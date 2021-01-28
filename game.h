#include <stdio.h>
#include <string.h>

int game() {
	int lives = 10;
	char place[] = "Base";
	char name[100];
	printf("Making a character...\n");
	while ( 0 == 0 ) {
		printf("NAME> ");
		fgets(name, 100, stdin);
		if ( strcmp( name, "\n" ) == 0 ) {
			printf("");
		} else {
			break;
		};								            
	};
	for ( int i = 0; i <= strlen(name); i++ ) {
		if ( name[i] == '\n' ) {
			name[i] = '\0';
		};
	};
	printf("CHARACTER\n Name: %s\n Lives: %d\n Current Place: %s\n", name, lives, place);
	return 0;
};
