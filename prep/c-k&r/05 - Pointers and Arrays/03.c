// consider a a function getint that performs free-format input conversion
// by breaking a stream of characters into integer values -- one integer per call

// getint has to return the value it found and signal
// the end of file when there is no more input


int main(void) {
    int n, array[SIZE], getint(int *);

    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n += 1) {
        // ..
    }
}