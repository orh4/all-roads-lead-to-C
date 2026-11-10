#include <stdio.h>

int main() {
	// 2-D Array:
	/*
	int array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	*/
	
	//                 | | |,| | |,| | |
	int array[3][3] = {1,2,3,4,5,6,7,8,9};

	int var = array[2][2];

	printf("%d\n", var);
	
	return 0;
}
