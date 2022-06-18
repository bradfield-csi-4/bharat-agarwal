#define ALLOCSIZE 10000

// Outside of a function, static restrains the visibility
// of a variable to the current file (compilation unit).

static char buffer[ALLOCSIZE]; // large character array
static char *free_pointer = buffer;// points to the next free element


// calls to afree must be made in opposite order to
// calls made on afree

// Storage managed by alloc and afree is in a stack
// last-in, first-out

// malloc doesn't have such restrictions

char *alloc(int size_requested) {
	if (size_requested + free_pointer >= buffer + ALLOCSIZE) {
		return 0;
	}

	free_pointer += size_requested;
	return free_pointer - size_requested;
	// returns a pointer to n consecutive
	// character positions, which can be
	// used by caller for storing characters
}

void afree(char *pointer) {
	// releases storeage so it can be reused later
	if (pointer >= buffer && pointer < buffer + ALLOCSIZE) {
		free_pointer = pointer;
	}
}