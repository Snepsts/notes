#include <iostream>

void swap_array_rec(int array[], int start, int end);
void swap_array_it(int array[], int size);
void print_array(int array[], int size);

int main()
{
	int array[10];

	for (int i = 0; i < 10; i++)
		array[i] = i + 1;

	print_array(array, 10);
	swap_array_rec(array, 0, 9);
	print_array(array, 10);
	swap_array_it(array, 10);
	print_array(array, 10);

	//if these work correctly, we should so 1-10, 10-1, 1-10 printed.

	return 0;
}

void swap_array_rec(int array[], int start, int end)
{
	if (start > end) //stop case
		return;

	int swap = array[start];
	array[start] = array[end];
	array[end] = swap;

	swap_array_rec(array, start+1, end-1);
}

void swap_array_it(int array[], int size)
{
	for (int i = 0; i < size/2; i++) {
		int swap = array[i];
		array[i] = array[(size-1)-i];
		array[(size-1)-i] = swap;
	}
}

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << ' ';

	std::cout << '\n';
}
