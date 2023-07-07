index;
#building;
	gcc -c pilhas.c
	gcc -c filas.c
	gcc -c graph.c
	gcc -c main.c
	gcc -o graf main.o graph.o pilhas.o filas.o -g

clear:
#cleaning
	rm bib.o
	rm exe