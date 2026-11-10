#include <stdio.h>
/*
 Arrays are special variables that can hold multiple values within them organized via an index.
*/

/*Arrays can only have hold elements of one type of value, because it is implemented as a sequence of values in the computer's memory.
 Because of that, accessing a specific array cell is very efficient (because it has homogenous values).*/

// Defines an array of 10 integers:
int main() {
	int array[10];

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;
	array[5] = 60;
	array[6] = 70;

	printf("The 7th value of the array is %d.\n", array[6]);
	return 0;
}

