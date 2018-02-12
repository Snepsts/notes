#include <iostream>
#include <random>
#include <ctime>

int main()
{
	std::default_random_engine dre(time(nullptr));
	std::uniform_int_distribution<int> uid(0, 2000);

	int** array;

	array = new int*[10];

	for (int i = 0; i < 10; i++)
		array[i] = new int[10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array[i][j] = uid(dre);
		}
	}

	//clean up
	for (int i = 0; i < 10; i++)
		delete[] array[i];

	delete[] array;

	return 0;
}
