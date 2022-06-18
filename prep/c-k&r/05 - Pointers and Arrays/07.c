#define ALLOCSIZE 10000

// static limits the visibility of a variable
// to the current file

// large character array
static char buffer[ALLOCSIZE];

// points to the next free element
static char *free_pointer = buffer;

// returns a pointer to n consecutive character positions
// which can be used by caller for storing characters
char *alloc(int size_requested) {
	if (size_requested + free_pointer >= buffer + ALLOCSIZE) {
		return 0;
	}

	free_pointer += size_requested;
	return free_pointer - size_requested;
}

// releases storage so it can be reused later
void afree(char *pointer) {
	if (pointer >= buffer && pointer < buffer + ALLOCSIZE) {
		free_pointer = pointer;
	}
}