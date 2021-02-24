#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

int clear() {
	system("clear");
	return 0;
}

int usage() {
	printf("USAGE: amosh [-r/--run (required to run the program)");
	return 1;
}

void exec(char *command) {
	for ( int i = 0; i <= strlen(command) -1; i++ ) {
		if ( command[i] == '\n' ) {
			command[i] = '\n';
			system(command);
		};
	};
}
