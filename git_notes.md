# Using git

#### By Michael Ranciglio
---
## Who is this for?
Noobs, mostly. By that I mean the poor souls that are going up against me at MegaminerAI from SEMO that need some help using git. Just kidding, I'm not that pretentious. But they might need the help still tho.

This is really just meant for them, but feel free to read it anyway if you're not who this is for. Not like I can stop you.

### Special notes
This tutorial is meant for command line git only. If you wanna use a GUI git tool, that's fine but I don't use those so this won't be of much use to you most likely.

## Grabbing the repo
* You will be given a git source, usually ending in .git
* Open a command line/terminal, on Ubuntu Linux this is usually done with ctrl+alt+t
* Navigate to the folder you want to clone the repo into
	* NOTE: It will still clone it into its own folder, for example, if you git clone this repo, it'll be put into a folder named "notes" in your current folder.

	If `pwd`

	Prints `/home/user/Documents`

	Then `git clone https://github.com/Snepsts/notes.git`

	Will put the repo notes in `/home/user/Documents/notes`

* So if you're not sure just navigate to your home directory.
	* You can do this with `cd ~/`
	* Fun fact, the home directory is what your terminal defaults to, so yeah.
* Then you will grab the .git link of what you're trying to download a copy of.
* Type: `git clone <paste url here>`
* Navigate to the folder with: `cd <repo name>`
* If there is a makefile, you can use `make` to build the program.
* That's pretty much it.

## Committing to the repo
* Now that you have your own copy of the repo, you can make changes to it and push them.
* First, make changes to the code.
* Next, open a terminal if you don't have one open, and navigate to the folder your repo is in `cd path/to/repo`
	* You can see what changes you're adding or what need to be added with `git status`
* Afterwards, type `git add --all`
* Then, do `git commit -m "<Commit message>"`
* Finally, do `git push`
* And that's about it. It isn't too hard
	* Note, if somebody else has pushed to the repo since your changes, you'll have to do a `git pull` first and possibly fix merge conflicts. Have fun with that.
* If you haven't made changes yet and somebody else has, you can use `git pull` to grab the update before you do your changes.

## Solving conflicts
* So, you've git pulled and there are significant problems (like similar lines have changed).
* If this is the case, we'll have to choose between two different versions. I'm going to assume you're using the Atom editor.
	* You'll have to choose between two things per instance of conflict. If you need them both, copy one, choose the other (there will be a button that says "choose me"), and paste that one. This is the easiest way to deal with it.
* And that's pretty much it. Have fun at MegaminerAI!!!

## MegaminerAI specifics
Okay here's a step by step guide on starting your AI using Github:
* Step 1: Grab the source
	* git clone https://github.com/siggame/Joueur.cpp
* Step 2: Make your own repo on Github
	* Go to the site, hit the plus button on the top right, and hit new repo
	* Give it a name but make sure it's empty
* Step 3: Resetting the origin
	* In the project folder, you're going to type git remote remove origin
	* Now your repo has no origin
* Step 4: Setting your repo to origin
	* Copy the `…or push an existing repository from the command line` commands
	* They should look something like this:
		* `git remote add origin https://github.com/yourusernamehere/reponame.git`
		* `git push -u origin master`
	* If you can't figure this part out I worry about you
* Step 5: Start coding
	* If you're on a team you'll need to add them to your Github repo's trusted users or something like that
	* It's in the repo settings on the website
	* You can figure it out, you're smart