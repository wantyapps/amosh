install:
	gcc main.c -o /usr/local/bin/amosh -lreadline

iar:
	gcc main.c -o /usr/local/bin/amosh -lreadline
	amosh -r

run:
	amosh -r
