/*
 Any operation that can be achieved by array can also be done with pointers.
 The pointer version will typically be faster.
*/

int main(void) {
	int a[10]; // 10 consecutive objects named a[0]..[a9]

	int *pa; // pointer to an integer
	pa = &a[0];

	*pa; // a[0];
	*(pa + 1); // a[1]

	// By definition, the value of a variable or expression
	// of type array is the address of
	// element zero of the array

	pa = &a[0]; // pa and a have identical values.

	pa = a; // the name of an array is a synonym
			// for the location of the initial element

	int i = 4; // quiet compilation errors

	a[i] == *(a + i); // equivalent

	// pointer is a variable
	pa = a, pa += 1; // possible

	// An array name is not a variable
	// a = pa; -- throws an error array type not assignable
	// a += 1 -- invalid int[10] + int

}