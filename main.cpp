#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funcs.hpp"
#include <readline/readline.h>
#include <readline/history.h>
#include "game.hpp"

int main(int argc, char *argv[]) {
	if ( argc >= 2 ) {
		if ( strcmp(argv[1], "--run" ) == 0 || strcmp( argv[1], "-r" ) == 0 ) {
			while ( 0 == 0 ) {
				char *command = readline("AMOSH> ");
				if ( strcmp(command, "") != 0 ) {
					add_history(command);
				};
				char lowercase[100];
				for ( int i = 0; i <= strlen(command); i++) {
					lowercase[i] = tolower(command[i]);
				};
				if ( strcmp( command, "load\"floppy\"" ) == 0 ) {
					printf("Loading...\n");
					printf("Happy birthday, Dad!\n");
				} else if ( strcmp( lowercase, "clear" ) == 0 ) {
					clear();
				} else if ( strcmp( command, "" ) == 0 ) {
					printf("");
				} else if ( strcmp( lowercase, "exit" ) == 0 ) {
					return 0;
				} else if ( strcmp( lowercase, "easteregg" ) == 0 ) {
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
				} else if ( strcmp( lowercase, "exec" ) == 0 ) {
					char cmd[100];
					printf("CMD> ");
					fgets(cmd, 100, stdin);
					exec(cmd);
				} else if ( strcmp( lowercase, "help" ) == 0 ) {
					printf("Help:\n");
					printf("COMMAND              INFO\n");
					printf("load\"floppy\"         Load contents of a floppy disk inserted to an AMOSH-X1 Machine\n");
					printf("clear                Clear console\n");
					printf("easteregg            Easter egg. (under development)\n");
					printf("exec                 Execute a shell command\n");
					printf("help                 Show this help manual\n");
					printf("exit                 Exit\n");

				} else {
					printf("Command not found.\n");
				};
			};
		} else {
			usage();
			return 1;
		};
	} else {
		usage();
		return 1;
	};
	return 0;
}
