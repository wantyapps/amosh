#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funcs.h"

int main(int argc, char *argv[]) {
	if ( argc >= 2 ) {
		if ( strcmp(argv[1], "--run" ) == 0 || strcmp( argv[1], "-r" ) == 0 ) {
			char command[100];
			while ( 0 == 0 ) {
				printf("AMOSH>");
				fgets( command, 100, stdin );
				char lowercase[100];
				for ( int i = 0; i <= strlen(command); i++) {
					lowercase[i] = tolower(command[i]);
				};
				if ( strcmp( lowercase, "load\"floppy\"\n" ) == 0 ) {
					printf("Loading...\n");
					printf("Happy Birthday, Dad!\n");
				} else if ( strcmp( lowercase, "clear\n" ) == 0 ) {
					clear();
				} else if ( strcmp( command, "\n" ) == 0 ) {
					printf("");
				} else if ( strcmp( lowercase, "exit\n" ) == 0 ) {
					return 0;
				} else if ( strcmp( lowercase, "easteregg\n" ) == 0 ) {
					printf("Wow! You found an easter egg! RESPECT +100\n");
					char gameChoice[100];
					printf("Do you want to play a game? [Y/n]: ");
					fgets(gameChoice, 100, stdin);
					char lowercaseGameChoice[100];
					for ( int i = 0; i <= strlen(gameChoice); i++ ) {
						lowercaseGameChoice[i] = tolower(gameChoice[i]);
					};
					if ( strcmp ( lowercaseGameChoice, "y\n" ) == 0 ) {
						game();
					} else {
						printf("");
					};
				} else {
					printf("Command not found.\n");
				};
			};
		};
	};
	return 0;
}
