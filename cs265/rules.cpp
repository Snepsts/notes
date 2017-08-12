#include <iostream>

using namespace std;

int main()
{
	//first rule
	//when defining an STL object w/ a template
	//object<type> name;
	vector<double> vecName;

	//for(type name = initial_value; initial_value <= final_value; increment_value_statement)
	for(double i = 0.1; i <= 0.5 /*i < 0.6*/; i += 0.1 /*i = i + 0.1*/)
	{
		//actual stuff goes in here
	}

	//pushing items
	//name.push_back(item);
	vecName.push_back(0.1);

	//iterators
	//object<type>::iterator name;
	vector<double>::iterator it;

	//name = objectname.begin(); //or .end();
	it = vecName.begin(); //it = vecName.end();

	//move iterator forward by one
	it++;
	//move iterator backwards by one
	it--;

	//dereference (to use for printing/comparison, etc)
	double value = *it;
	cout << *it << endl;

	//standard for loop an STL container with an iterator
	for(it = vecName.begin(); it != vecName.end(); it++)
	{
		double num = 0;
		if(*vit == num)
			cout << "This value is 0\n";
	}

	return 0;
}

//templates
template <typename T>
void function_name(T item)
{
	//function definition
}
