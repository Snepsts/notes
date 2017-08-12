/// <summary>
/// This is called every time it is this AI.player's turn.
/// </summary>
/// <returns>Represents if you want to end your turn. True means end your turn, False means to keep your turn going and re-call this function.</returns>
bool AI::run_turn()
{
    // This is your Stumped ShellAI
    // ShellAI is intended to be a simple AI that does everything possible in the game, but plays the game very poorly
    // This example code does the following:
    // 1. Grabs a single beaver
    // 2. tries to move the beaver
    // 3. tries to do one of the 5 actions on it
    // 4. Grabs a lodge and tries to recruit a new beaver

    // First let's do a simple print statement telling us what turn we are on
    std::cout << "My turn " << game->current_turn << std::endl;

    // 1. get the first beaver to try to do things with
    // NOTE: this is the `auto` keyword. If you are not familiar with it, think of it this way:
    //       it basically asks the compiler to figure out what the type is. Because the beavers vector
    //       contains `Beaver` instances, the compiler can figure out `auto` -> `Beaver` (at a basic level)
    const auto beaver = random_element(player->beavers);

    // if we have a beaver, and it's not distracted, and it is alive (health greater than 0)
    if(beaver && beaver->turns_distracted == 0 && beaver->health > 0)
    {
        // then let's try to do stuff with it

        // 2. Try to move the beaver
        if(beaver->moves > 2)
        {
            // then it has enough moves to move in any direction, so let's move it

            // find a spawner to move to
            Tile target = nullptr;
            for(const auto& tile : game->tiles)
            {
                if(tile->spawner && tile->spawner->health > 1)
                {
                    // then we found a healthy spawner, let's target that tile to move to
                    target = tile;
                    break;
                }
            }

            // If we found a target tile to path to, then do so
            if(target)
            {
                // use the pathfinding algorithm below to make a path to the spawner's target tile
                const auto path = find_path(beaver->tile, target);

                // if there is a path, move to it
                //      length 0 means no path could be found to the tile
                //      length 1 means the target is adjacent, and we can't move onto the same tile as the spawner
                //      length 2+ means we have to move towards it
                if(path.size() > 1)
                {
                    std::cout << "Moving beaver #" << beaver->id << " towards tile #" << target->id << std::endl;
                    beaver->move(path.front());
                }
            }
        }

        // 3. Try to do an action on the beaver
        if(beaver->actions > 0)
        {
            // then let's try to do an action!

            // Do a random action!
            std::shuffle(actions.begin(), actions.end(), gen);
            const auto action = actions.front();

            // how much this beaver is carrying, used for calculations
            const auto load = beaver->branches + beaver->food;

            switch(action.front()) // just look at the first character
            {
            case 'b': // action == "buildLodge"
            {
                // if the beaver has enough branches to build a lodge
                //   and the tile does not already have a lodge, then do so
                if((beaver->branches + beaver->tile->branches) >= player->branches_to_build_lodge && beaver->tile->lodge_owner)
                {
                    std::cout << "Beaver #" << beaver->id << " building lodge" << std::endl;
                    beaver->build_lodge();
                }
                break;
            }
            case 'a': // action == "attack"
            {
                // look at all our neighbor tiles and if they have a beaver attack it!
                auto neighbors = beaver->tile->get_neighbors();
                std::shuffle(neighbors.begin(), neighbors.end(), gen);
                for(const auto& neighbor : neighbors)
                {
                    if(neighbor->beaver)
                    {
                        std::cout << "Beaver #" << beaver->id << " attacking beaver #"
                                  << neighbor->beaver->id << std::endl;
                        beaver->attack(neighbor->beaver);
                        break;
                    }
                }
                break;
            }
            case 'p': // action == "pickup"
            {
                // make an array of our neighboring tiles + our tile as all can be picked up from
                auto pickup_tiles = beaver->tile->get_neighbors();
                pickup_tiles.push_back(beaver->tile);
                std::shuffle(pickup_tiles.begin(), pickup_tiles.end(), gen);

                // if the beaver can carry more resources, try to pick something up
                if(load < beaver->job->carry_limit)
                {
                    for(const auto& tile : pickup_tiles)
                    {
                        // try to pickup branches
                        if (tile->branches > 0)
                        {
                            std::cout << "Beaver #" << beaver->id << " picking up branches" << std::endl;
                            beaver->pickup(tile, "branches", 1);
                            break;
                        }
                        // try to pickup food
                        else if (tile->food > 0)
                        {
                            std::cout << "Beaver #" << beaver->id << " picking up food" << std::endl;
                            beaver->pickup(tile, "food", 1);
                            break;
                        }
                    }
                }
                break;
            }
            case 'd': // action == "drop"
            {
                // choose a random tile from our neighbors + out tile to drop stuff on
                auto drop_tiles = beaver->tile->get_neighbors();
                drop_tiles.push_back(beaver->tile);
                std::shuffle(drop_tiles.begin(), drop_tiles.end(), gen);

                // find a valid tile to drop resources onto
                Tile tile_to_drop_on = nullptr;
                for(const auto& tile : drop_tiles)
                {
                    if(!tile->spawner)
                    {
                        tile_to_drop_on = tile;
                        break;
                    }
                }

                // if there is a tile that resources can be dropped on
                if(tile_to_drop_on)
                {
                    // if we have branches to drop
                    if(beaver->branches > 0)
                    {
                        std::cout << "Beaver #"  << beaver->id << " dropping 1 branch" << std::endl;
                        beaver->drop(tile_to_drop_on, "branches", 1);
                    }
                    // or if we have food to drop
                    else if(beaver->food > 0)
                    {
                        std::cout << "Beaver #"  << beaver->id << " dropping 1 food" << std::endl;
                        beaver->drop(tile_to_drop_on, "food", 1);
                    }
                }
                break;
            }
            case 'h': // action == "harvest"
            {
                // if we can carry more, try to harvest something
                if(load < beaver->job->carry_limit)
                {
                    // try to find a neighboring tile with a spawner on it to harvest from
                    auto neighbors = beaver->tile->get_neighbors();
                    std::shuffle(neighbors.begin(), neighbors.end(), gen);
                    for(const auto& neighbor : neighbors)
                    {
                        // if it has a spawner on that tile, harvest from it
                        if(neighbor->spawner)
                        {
                            std::cout << "Beaver #"  << beaver->id << " harvesting spawner #"
                                      << neighbor->spawner->id << std::endl;
                            beaver->harvest(neighbor->spawner);
                            break;
                        }
                    }
                }
                break;
            }
            }
        }
    }
