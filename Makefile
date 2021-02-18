install:
	gcc main.cpp -o /usr/local/bin/amosh -lreadline
iar:
	gcc main.cpp -o /usr/local/bin/amosh -lreadline
	amosh -r
run:
	amosh -r
