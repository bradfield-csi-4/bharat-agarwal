#include <stdio.h>

int strlenn(char *s);

int main(void) {
	printf("%d\n", strlenn("hello, world"));
	return 0;
}

int strlenn(char *s) {
	// works for "hello, world"
	// works for array[100]
	// works for char *ptr;

	int length;

	for (length = 0; *s != '\0'; s += 1) {
		length += 1;
	}

	return length;
}

// Formal parameters in a function definition, char s[] and char *s are equivalent.
