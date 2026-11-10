#include <stdio.h>

int main() {
	int a = 12, b = 13, c = 11, d = 14;

	if (a + b == c + d) {
		printf("Test A.\n");
	};

	if (a - b != c - d) {
		printf("Test B.\n");
	};

	if (a > b && c > d) {
		printf("What?\n");
	} else if (a < b && c > d) {
		printf("No?\n");
	} else {
		printf("Test C.\n");
	};

	if (a < c || d > b) {
		printf("Test D.\n");
	};

	return 0;
}
