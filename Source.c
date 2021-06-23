#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y = 0, a, b;
	a = 1;
	b = 10;
	printf("input x:");
	scanf("%d", &x);
	int z = x;
	for (int i = 0; i < 11; i++) {
		if (b != 0) {
			for (int j = 0; j < b - 1; j++) {
				x *= z;
			}
		}
		else {
			x = 1;
		}

		y += a * x;
		a++;
		b--;
		x = z;
	}
	printf("Res is: %d", y);
	return 0;
}
