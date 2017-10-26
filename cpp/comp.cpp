#include <iostream>
#include <vector>

using namespace std;

template <typename T>
bool comp_asc(vector<T> v);

int main()
{
	vector<int> vec;

	vec.push_back(4);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(6);
	vec.push_back(24);
	vec.push_back(26); //make it NOT ascending

	vector<int> vec2;

	for (int i = 1; i < 10; i++)
		vec2.push_back(i); //make it ascending

	if (comp_asc(vec))
		cout << "vec is ascending order!!!\n";
	else
		cout << "vec is NOT ascending order!!!\n";

	if (comp_asc(vec2))
		cout << "vec2 is ascending order!!!\n";
	else
		cout << "vec2 is NOT ascending order!!!\n";

	return 0;
}

template <typename T>
bool comp_asc(vector<T> v)
{
	for (typename vector<T>::iterator vit = v.begin(); vit != v.end(); vit++) {
		for (typename vector<T>::iterator vot = vit + 1; vot != v.end(); vot++) {
			if (*vit > *vot) //compare n with {n + 1, n + 2 ... end}
				return false; //if it's greater than any in front of it, it's not ascending, return false
		}
	}

	return true; //if it made it through all the for loops, it's ascending, return true
}
