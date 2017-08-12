#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 9; i++)
		v.push_back(i);

	for(auto vit = v.begin(); vit != v.end(); vit++)
	{
		if(*vit == 3 || *vit == 6)
			v.erase(vit);
	}

	for(auto q : v)
		cout << q << '\n';

	return 0;
}

if(nit == neighbors.end())
	std::cout << "Nothing to attack!\n";
else
{
	auto attacked_beaver = neighbors[0];

	for(const auto& neighbor : neighbors)
	{
		if(neighbor->beaver->health < attacked_beaver->beaver->health)
			attacked_beaver = neighbor;
	}

	std::cout << "Beaver #" << beaver->id << " attacking beaver #"
			  << attacked_beaver->beaver->id << std::endl;
	beaver->attack(attacked_beaver->beaver);
}
