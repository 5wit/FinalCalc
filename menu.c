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

#include<stdio.h>
#include<stdlib.h>
#include"my.h"
#include"helper.h"
#include"project.h"  

int print_menu() {
    int choice;
	do {	
		printf("=====================================================\n");	
		printf("|			MENU			    |\n");
		printf("=====================================================\n\n");		
		printf("1 : ADD\t\t\t2 : SUB\n3 : MULT\t\t4 : DIVD\n5 : SQUARE\t\t");
		printf("6 : SQUARE ROOT\n7 : POWER\t\t8 : FACT\n9 : GCD_LCM\t\t10 : CONVERSIONS\n");
		printf("11 : NCR-NPR\t\t12 : ADD_N_INTEGERS\n13 : COMPLEX_NO.\n14 : SERIES (more choices inside)\t\n15 : MATRIX (more choices inside)\n16 : MATHEMATICS\n\n\n\t\t0 : EXIT\n\n");
		printf("=====================================================\n\n");
		                       /*This printfs are only for distinction between choices and output on terminal when   run*/				
		printf("Enter your choice : \t");		
		scanf("%d", &choice);
		printf("\n");
	        switch(choice) {		/* This shows available choices for calculation
	        					and calls corresponding function */
			case 1:
				add();
				break;	      
			case 2:
				sub();
				break;
			case 3:
				mult();
				break;	
			case 4:
				divd();
				break;									
			case 5:
				square();
				break;			
			case 6:
				sqroot();
				break;				
			case 7:
				powr();
				break;			
			case 8:
				fact();
				break;		
			case 9:
				GCD_LCM();
				break;
			case 10:
				decimal_to_binary(); 
				break;
			case 11:
				ncr_npr();
				break;
			case 12:				
				addn();
				break;
			case 13:
				cmplxnoadr();
				break;
			case 14:
				series();
				break;
			case 0:
				exit(0);			
			default:
				printf("--------------------------------\n");
				printf("KINDLY ENTER A VALID CHOICE\n");
				printf("--------------------------------\n");
				break;
			case 15:
				matrix();
				break;
			case 16:
				math();
				break;
		}		      			
	}while(choice != 0);
//}		
    return 0;
}
