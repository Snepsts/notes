#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	double* d = new double[n];

	for (int i = 0; i < n; i++)
		std::cin >> d[i];
		//std::cin >> *(d + i);

	for (int i = 0; i < n; i++)
		std::cout << (d + i) << '\n';
		//std::cout << &d[i];

	delete[] d;

	return 0;
}
