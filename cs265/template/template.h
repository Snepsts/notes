#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__

#include <iostream>

using namespace std;

template <typename T>
class storage{
public:
	storage();
	storage(T first, T second, T third, T fourth, T fifth);
	T first();
	T second();
	void printarray();

private:
	T array[5];
};

template <>
storage<int>::storage()
{
	for(int i = 0; i < 5; i++)
		array[i] = 0;
}

template <>
storage<char>::storage()
{
	for(int i = 0; i < 5; i++)
		array[i] = ' ';
}

template <typename T>
storage<T>::storage()
{
	T garbage;

	for(int i = 0; i < 5; i++)
		array[i] = garbage;
}

template <typename T>
storage<T>::storage(T first, T second, T third, T fourth, T fifth)
{
	array[0] = first; array[1] = second; array[2] = third; array[3] = fourth; array[4] = fifth;
}

template <typename T>
T storage<T>::first()
{
	return array[0];
}

template <typename T>
T storage<T>::second()
{
	return array[1];
}

template <typename T>
void storage<T>::printarray()
{
	for(int i = 0; i < 5; i++)
		cout << array[i] << '\n';
}


#endif //__TEMPLATE_H__
