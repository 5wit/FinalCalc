/*****************************************************************************
 * Copyright (C) Shubham S. Wadhe 
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/



/*
 *	CALCULATOR  IN  C  LANGUAGE 		
 *	
 *	MIS : 	111408064
 *
 *	SYIT : 2015-16   */
 


#include<stdio.h>
#include<stdlib.h>

#include<ctype.h>			/* checking for whether input is digit character or else */ 

#include"helper.h"			/* contains functions prototypes and structured declared especially for stack */

#include"project.h"			/* contains functions prototypes and structured declared */

#include"my.h"				/* contains functions prototypes and structured declared */

extern def f;				/* structure defined in another file */

int main() {
    printf("\n");
    printf("=====================================================\n");	
    printf("|			CALCULATOR		    |\n");
    printf("=====================================================\n\n");	
    printf("Enter a valid expression WITHOUT SPACES,\n\nlike : 3-23*23+32/8\n\nMore choices will be shown after evaluation \n\n");
    printf("=====================================================\n\n");
    getsymbol();
    opr();
    stepwise();				/* shows each step of process, expression converted to postfix */
    cal();
	print_menu();
  
}

/* all the functions given below are used for evaluating a expression,
   it takes a valid input, uses stack for storing and evaluating based on precedence, 
   pop last two nos. operates on them and push them again in the stack .. */	

void getsymbol() {
   
    char ch = getch(); 			/* getch() -> single character input at a time */
    if(isdigit(ch)) {
        number = 0;
	while(isdigit(ch)) {
	    number = 10*number + (ch-'0');	/* string to number */
	    ch = getch();
	}
	ungetch(ch);
	sym = 0;
    }
    else {
	sym = ch;		/* keep operator as it is */
    }
}



void opr() { 
    char chsym;					
    oprt();				
    while(sym == '+'|| sym == '-') {		/* checking for '+' or '-' sign. */
	chsym = sym;
	getsymbol();
	oprt();
	put(chsym, 0);
    }
}



void oprt() {
    char chsym;
    prnth();
    while(sym == '*'|| sym == '/') {		/* checking for '*' or '/' sign. */
	chsym=sym;
	getsymbol();
	prnth();
	put(chsym,0); 
    }
}



void prnth() { 			/* check for paranthesis */
    if(sym == '(') {
	getsymbol();
	opr();
	if(sym != ')') {
	    printf("error in expression input\nEnter a valid expression\n");
	    exit(0);
	}

    }
    else if(sym == 0) {
	put('l', number);
	
    }

    getsymbol();
}




void cal() {
    char ch;
    int n;
    while((ch = get()) != EOF) {
	switch(ch) {
	    case '+':
		ipush(ipop()+ipop());			/*  remove last two nos and add them, and insert sum */
		break;
	    case '-':
		n = ipop();
		ipush(ipop()-n);
		break;
	    case '*':
		ipush(ipop()*ipop());			/*  remove (pop) last two nos and add them, and insert (push) sum */
		break;
	    case '/':
		n = ipop();
		if(n == 0) {
		    printf("div 0 err, can't divide by zero\n");
		    break;	//exit(0);
		}
		ipush(ipop()/n);
		break;
	    case 'l':
		ipush(f.a);
		break;
	    default:
		printf("Err \n");
		exit(0);
		break;
	}
    }
    printf("%d\n", ipop());			/* result of expression */
    if(!isEmpty()) {
	printf("Big err \n");
	exit(0);
    }
}

