#include <vector> //vector (what this source file is about)
#include <iostream> //cout and cin

using namespace std;

/* Brief introduction to vectors:
Vectors are the goto container of C++. They're dynamic, they handle the storage
for you, and they're just plain _convienient_. We're going to look over how to
define them and use them.
Quick note: Vectors are apart of the STL and as such are template containeres.
Therefore, we define them with vector<type> vectorname;
For example:
vector<int> v;
Will create a vector named v that stores ints. */

int main()
{
	vector<int> v; //vector that stores ints

	//The easiest way to add things to a vector is by using push_back
	//This will add them to the "back" of the vector.
	v.push_back(5);

	//We can also access vectors with back() and front()
	cout << v.front() << " " << v.back() << '\n';
	/* Since we only pushed a 5, this should print out: 5 5
	Essentially, the front and the back are the same since there's only one
	member of the vector. */

	//Push 10 to the back of the vector
	v.push_back(10);

	//Now we should see 5 10
	cout << v.front() << " " << v.back() << '\n';

	//Let's push some more variables to the vector
	v.push_back(15);
	v.push_back(20);
	v.push_back(25);
	v.push_back(30);

	cout << v.front() << " " << v.back() << '\n';

	//We can also see how big the vector is with size()
	cout << "The size of the vector is: " << v.size() << '\n';
	//It should say it's 6

	/*One of the best parts about vectors is that they're dynamic. That means
	we can remove members and add more at our will. We can use pop_back() to
	remove the back member of a vector. */
	v.pop_back();

	//Now the back should change to 25
	cout << v.front() << " " << v.back() << '\n';

	//and the size should be 5
	cout << "The size of the vector is: " << v.size() << '\n';

	/* We can also treat vectors sort of like arrays. We can access members with
	the [] operator. If you don't remember much about arrays, go see the array
	resource. */
	cout << "The 3rd member of the vector is: " << v[2] << '\n';

	//We can also print the whole vector like an array with a for loop
	for(int i = 0; i < v.size() /*Stop before the size of the vector*/; i++)
		cout << v[i] << '\n';

	//We can also use empty() to see if the vector is empty:
	if(v.empty())
		cout << "The vector is empty!\n";
	else
		cout << "The vector is NOT empty!\n";

	//If we want to delete the whole vector, one way we can do it is:
	while(!v.empty()) //while v is not empty
		v.pop_back(); //remove the back member of v

	//Once the loop is done, v should be empty. Let's check again:
	if(v.empty())
		cout << "The vector is empty!\n";
	else
		cout << "The vector is NOT empty!\n";

	//That's the basics to using a vector!!!

	return 0; //end main
}
