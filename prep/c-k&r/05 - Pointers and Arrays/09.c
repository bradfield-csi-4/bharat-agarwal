int strlenn(char *s) {
	char *p = s;

	while (*p != '\0') {
		p += 1;
		// all pointer manipulations automatically take into
		// account the size of the objects pointed to.
	}

	return p - s;
}