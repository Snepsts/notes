#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	const int X = 5;
	const int Y = 7;
	const int Z = 10;

	int a[X][Y][Z];

	for (int x = 0; x < X; x++) {
		for (int y = 0; y < Y; y++) {
			for (int z = 0; z < Z; z++) {
				//a[x][y][z] = rand() % 10000000;
				a[x][y][z] = rand() % 9 + 1;
			}
		}
	}

	for (int x = 0; x < X; x++) {
		for (int y = 0; y < Y; y++) {
			for (int z = 0; z < Z; z++) {
				printf("%d ", a[x][y][z]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
