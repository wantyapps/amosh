#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

int game() {
	system("clear");
	int lives = 10;
	char place[100];
	strcpy(place, "Base - Level 1");
	int knife1 = 0;
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
	system("clear");
	printf("CHARACTER\n Name: %s\n Lives: %d\n Current Place: %s\n", name, lives, place);
	while (1) {	
		if ( strcmp( place, "Base - Level 1" ) == 0 ) {
			printf("You are standing in a closed room. There is a table next to you.\n");
			printf("Options:\n");
			printf("1. Examine the table\n");
			printf("2. Try to open the door\n");
			printf("99. Exit Game\n");
			char *choice = readline(">");
			add_history(choice);
			if ( strcmp( choice, "1" ) == 0 ) {
				if ( knife1 == 1 ) {
					printf("There is nothing on the table.\n");
				} else {
					system("clear");
					printf("You see a dusty knife on the table.\n");
					printf("Options:\n");
					printf("1. Take the knife\n");
					printf("2. Do nothing\n");
					printf("99. Exit Game\n");
				};
				while (1) {	
					char *ifChoice = readline(">");
					if ( strcmp( ifChoice, "1" ) == 0 ) {
						knife1 = 1;
						system("clear");
						printf("You took the knife.\n");
						break;
					} else if ( strcmp( ifChoice, "2" ) == 0 ) {
						printf("You did nothing.\n");
						break;
					} else if ( strcmp( ifChoice, "99" ) == 0 ) {
						system("clear");
						printf("Bye!\n");
						return 0;
					} else {
						printf("Invalid option. Try again.\n");
					};
				};
			} else if ( strcmp( choice, "2" ) == 0 ) {
				printf("The door opened.\n");
				strcpy(place, "Base - Level 2");
				break;
			} else if ( strcmp( choice, "99" ) == 0 ) {
				printf("Bye!\n");
				return 0;
			} else {
				printf("Invalid option. Try again.\n");
			};
		};
	};
	
	return 0;
};
