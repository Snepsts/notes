#include <stdio.h>

int main()
{
	int a, b;
	float c, d;

	a = 15005;
	b = a / 2;
	printf("%d\n", b);
	printf("%3d\n", b);
	printf("%03d\n", b);

	c = 2;
	d = c / 3;
	printf("%3.3f\n", d);

	return 0;
}
