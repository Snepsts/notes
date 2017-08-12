#include <iostream>

using namespace std;

int main()
{
	vector<int> v;

	int ar[10] = {1,2,3,4,5,6,7,8,9,10};

	Array<int> a(ar, 10);

	return 0;
}


template <typename T>
Array::Array(T ar[], int size){
	MySize = size;

	for(int i = 0; i < size; i++)
		m_array[i] = ar[i];
}
