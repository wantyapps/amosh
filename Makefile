install:
	gcc main.c -o /usr/local/bin/amosh

iar:
	gcc main.c -o /usr/local/bin/amosh
	amosh -r

run:
	amosh -r
