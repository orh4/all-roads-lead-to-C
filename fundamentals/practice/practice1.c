#include <stdio.h>

int main() {
	int a = 0, b = 1, c = 2;
	/*
	 While a variable in C can be declared as one type,
	 ultimately, the type of an expression is dictated by
	 their operands.
	 Meaning, if the below expression in the floating integer variable, pi,
	 were to be equal to 22/7, it would only output an integer
	 value, not a float value, since their operands are both
	 integers.
	 To fix this, just make either one, or both of the operands a floating
	 integer.
	*/
	float pi = 22.0/7; // approximate value
	char string[] = "Hello, World!";
	int array[3];

	/*
	 In C, not all character arrays are strings.
	 If the below character array were to be declared as name[][4],
	 printing name[0] would give "JaneDoe", because the first array
	 didn't have an additional character slot normally reserved for
	 a null terminator (i.e. "\0") at the end of the array.
	 The null terminator indicates where a string ends in C.
	 Hence, when printing the value of name[0], it continues on until
	 it hits the null terminator at the last empty slot name[1].

	 To fix this, just add an extra column to each row to allow an
	 extra slot for a null terminator to be generated.
	*/
	char name[][5] = {
		"Jane",
		"Doe"
	};

	char statement[] = "I love C! ... but I like Brainfuck more..";

	array[0] = a;
	array[1] = b;
	array[2] = c;

	printf("%s\n", string);
	printf("%s %s\n", name[0], name[1]);
	/*
	 There is no native "slicing" or arrays in C as compared to Python.
	 A similar way to achieve the "slicing" of an array in C is by using pointers,
	 as seen below.
	 You can also use a for loop to cycle through an array using a specified range.
	 ```
	 char name[] = "Jane";

	 for (int i = 0; i < 3; i++) {
    	 	printf("%c", name[i]);
	 }

	 // will print "Jan" and it's python equivalent is name[0:3]
	 ```

	 The same can applied to multidimensional arrays.

	 Interestingly, adding numbers to an array (eg. "name + 1") changes the index
	 at which the array starts from.
	 If I had an array name[] = "Test", print name after doing "name + 1" would
	 output "est".

	 Example:
	 ```
	 char test[] "testHello, World!";

	 printf("%s\n", name + 4); // would output "Hello, World!", similar to test[5:] in python.
	 ```
	*/
	printf("%.9s\n", statement);
	printf("π is approximately: %f\n", pi);
	return 0;
}
