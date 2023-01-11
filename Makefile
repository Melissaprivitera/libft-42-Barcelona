all: testfunctions.c
	cc testfunctions.c -o testfunctions

clean:
	rm -r testfunctions

