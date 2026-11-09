#include <stdio.h>
#include <string.h>

int main() {
	char string[13] = "Hello, World!";

	printf("%s\n", string);
	printf("%ld\n", strlen(string));

	char dest[20]="Hello";
	char src[20]=", World!";
	strncat(dest,src,20);
	printf("%s\n",dest);

	const char * name = "John";

	if (strncmp(name, "John", 4) == 0) {
    		printf("Hello, John!\n");
	} else {
    		printf("You are not John. Go away.\n");
	}

	return 0;
}
