#include <stdio.h>

/*
 There are several types of variables in C.
 There are:
 - Integers: Numbers which are either positive or negative. (int, char, short, long, long long)
 - Unsigned Integers: Numbers which are ONLY positive. (unsigned int, unsigned char, unsigned short, unsigned long, unsigned long long)
 - Floating point numbers: Real numbers, i.e. numbers that can be expressed in the form of a fraction. (float and double)
 - Booleans: true and false values. (bool)
 - Structures: ...
*/

/*
 The different types of variables define their bounds.
 - char: ranging from -128 to 127
 - long: ranging from -2,147,483,648 to 2,147,483,647 (however, it can be more on different computers, such as 64 bit computers where it ranges from –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
*/

// C uses arrays of characters to define strings (i.e. it views strings as a "collection" of characters.)

// Integers:
int main() {
	int a = 0, b = 1, c = 2, d = 3, e = 4;

	a = b - c + d * e;
	printf("%d\n", a);
	
	return 0;
}
