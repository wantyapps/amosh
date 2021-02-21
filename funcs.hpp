#include <stdlib.h>
#include <stdio.h>

int clear() {
	system("clear");
	return 0;
}

int usage() {
	printf("USAGE: amosh [-r/--run (required to run the program)");
	return 1;
}
