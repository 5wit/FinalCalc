project:project.o helper.o cal.o menu.o
	gcc -o project project.o helper.o cal.o -lm menu.o 
project.o:project.c project.h
	gcc -c project.c
helper.o:helper.c helper.h
	gcc -c helper.c
cal.o:cal.c my.h 
	gcc -c cal.c -lm
menu.o:menu.c
clean:
	rm calculate.o helper.o cal.o menu.o

