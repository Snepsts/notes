#include <iostream> //cerr
#include <fstream> //ifstream && ofstream
#include <string> //string (for file names)

using namespace std;

/* Brief introduction to files:
While files aren't complicated, remembering how to define and work with them
off the top of your head can be. In C++ we can store and access information
through files with the interface provided by the STL. This is very convienient
and everybody should take advantage of fstreams. This is going to remind you on
how to define them and check for their commonplace errors. */

int main()
{
	/* Input File Streams (ifstream)
	ifstreams will try to find a file and give you an interface to use them to
	retrieve information from said file. If the file does not exist, it will
	fail and you should act accordingly. */

	string filename = "file.txt"; //make your file name here
	ifstream fin(filename); //declare ifstream "fin"

	if(fin.fail()) //check if it failed
	{
		cerr << "File failed to open! Does " << filename << " exist???\n";
		return 1; //if it did end the program early
	}

	/* Output File Streams (ofstream)
	ofstreams will try to find a file and give you an interface to use them to
	store information to said file. If the file does not exist, it will create a
	new one for you. However, you should still prepare for a fail (it's good
	practice) */

	filename = "output.txt"; //make your file name here
	ofstream fout(filename); //declare ofstream "fout"

	if(fout.fail()) //check if it failed
	{
		cerr << "File failed to open! Does " << filename << " exist???\n";
		return 1; //if it did end the program early
	}

	/* Do whatever you need with files here. Some tricks include:
	1. getline(fin, line);
		where line is a string, it gets the next line in the file and puts it
		into line.
	2. fin >> obj;
		Where obj is some type. Keep in mind if you try to input a string to an
		int, you're going to have trouble. Make sure you know what you're doing
		with this.
	3. fout << obj;
		This will write whatever obj is to the file fout points to. */

	//once we're done with the files, we should close them
	fout.close();
	fin.close();

	return 0; //end main
}
