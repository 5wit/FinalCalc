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





				  /* CALCULATOR PROGRAM USING C LANGUAGE   */



#include<stdio.h>	   	

#include<math.h>		/* used for few maths functions */

#include<stdlib.h>		

#include"my.h"                  /*Contains functions used in calculator OR simply my math library*/
		
	
void add() {
	long int a , b, s;		
	printf("Enter two nos.\n");
	scanf("%ld%ld", &a, &b);
	s = a + b;
	printf("=============================\n");	/* these printfs are only to good appearence on terminal */
	printf("  %ld\n+\n  %ld\n-----------\n  %ld\n", a, b, s);
	printf("=============================\n");	
}		
void sub() {
	long int a , b, s;		
	printf("Enter two nos.\n");
	scanf("%ld%ld", &a, &b);
	s = a - b;
	printf("=============================\n");	
	printf("  %ld\n-\n  %ld\n-----------\n  %ld\n", a, b, s);
	printf("=============================\n");	
}		
void mult() {
	long int a , b, s;		
	printf("Enter two nos.\n");
	scanf("%ld%ld", &a, &b);
	s = a * b;
	printf("=============================\n");	
	printf("  %ld\n*\n  %ld\n-----------\n  %ld\n", a, b, s);
	printf("=============================\n");	
}		
void divd() {
	
	/* Asks user to input two numbers, 
	 *if second number is zero the prints error message : can not divide by zero */	
		
	double a , b;	
	double s;	
	printf("Enter two nos.\n");
	scanf("%lf%lf", &a, &b);
	if(b == 0) {
		    printf("div 0 err, can't divide by zero\n\n");	
	}	
	else {
		s =  a / b;
		printf("=============================\n");	
		printf("  %lf\n/\n  %lf\n-----------\n  %lf\n", a, b, s);
		printf("=============================\n");	
	}
}		
void square() {
	long int s = 0;
	printf("Enter a no. : \t");
	scanf("%ld", &s);	
	printf("=============================\n");
	printf("%ld\n", s*s);
	printf("=============================\n");
}								
void sqroot() {
	float m,n;
	float num;
	n = 0.0001;                       /* we can calculate upto decimal places also */
	printf("Enter a no. : \t");
	scanf("%f", &num);
 	for(m = 0; m<num; m = m+n) {				
        	if((m*m) > num) {
  	        	m = m-n;          /*This if() is used to calculate the final value as soon as the square of the number exceeds */
   			break;           /* the number then we deduct the value exceeded and stop the procedure using break; this is our  final value which is stored in m */
  }              
}
	printf("=============================\n");
	printf("%.2f\n", m);	
	printf("=============================\n");
}		
void powr() {
	int pow, num, i = 1;	  
	long int sum = 1;	  
	printf("Enter a no. : \t");	  
	scanf("%d",&num);	  
	printf("Enter power : \t");	  
	scanf("%d", &pow);	  
	while(i <= pow){
		sum = sum * num;
		i++;
	}
	printf("=============================\n"); 	
	printf("%d^%d =  %ld\n", num, pow, sum);
	printf("=============================\n");
}
void fact() {
	int c, n;
	long long int fact = 1;
	printf("Enter a number to calculate it's factorial : \t");
	scanf("%d", &n); 
		for (c = 1; c <= n; c++)
	fact = fact * c;
	printf("=============================\n");	
	printf("Factorial of %d = %lld\n", n, fact);
	printf("=============================\n");
	 
}
void GCD_LCM() {
	int a, b, x, y, t, gcd, lcm;
	printf("Enter two integers : \t");
	scanf("%d%d", &x, &y);
	a = x;
	b = y;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	gcd = a;
	lcm = (x*y)/gcd;
	printf("===========================================\n");
	printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
	printf("  Least common multiple of %d and %d = %d\n", x, y, lcm);
	printf("===========================================\n");	 
}
void decimal_to_binary() {
	int ch, n, c, k; 
	int decimal = 0, i = 0, rem;
	do {
		printf("=====================================================\n");				
              	printf("|		     CONVERSIONS  	            |\n");
                printf("=====================================================\n\n");   /* These are nested cases */	
		printf("1.DECIMAL -> BINARY\n");
                printf("2.BINARY  -> DECIMAL\n");
                printf("3.DECIMAL -> OCTAL\n");
                printf("4.GO BACK \n\n");
                printf("=====================================================\n\n");
                printf("ENTER THE CHOICE : \t ");	
                scanf("%d",&ch);
                switch(ch) {
        		case 1:
				printf("Enter a Decimal no. : \t");
				scanf("%d", &n); 
				printf("%d -> binary number -> : ", n);
				for (c = 10; c >= 0; c--) {
					k = n >> c; 
					if (k & 1)
						printf("1");
				else
					printf("0");
				} 
				printf("\n"); 
				break;
			case 2:
				printf("Enter Binary no. : \t");
				scanf("%d", &n);
				while (n != 0) {
					rem = n%10;
					n /= 10;
					decimal += rem*pow(2,i);
					++i;
				}				
				printf("%d -> Decimal -> %d\n", n, decimal);
				break;
			case 3:			
				printf("Enter any decimal number: ");
 				scanf("%d",&n);
				printf("%d -> Octal -> %X\n", n, n);
				break;
			case 4:
				break;
			default :
				printf("Enter proper choice\n");
		}	
	}while(ch != 4);
		 
}
int ncr_npr() {
	long factorial(int n) {
	int c;
	long result = 1;
	for (c = 1; c <= n; c++)
	result = result*c;
	return result;
	}
		
	long find_npr(int n, int r) {
	long result;
	result = factorial(n)/factorial(n-r);
	return result;
	} 
	
	long find_ncr(int n, int r) {
	long result;
	result = factorial(n)/(factorial(r)*factorial(n-r)); 
	return result;
	} 
	
	int n, r;
	long ncr, npr;
	printf("Enter the value of n and r : \t");
	scanf("%d%d",&n,&r); 
	ncr = find_ncr(n, r);
	npr = find_npr(n, r);
	printf("=============================\n");	
	printf("%dC%d = %ld\n", n, r, ncr);
	printf("%dP%d = %ld\n", n, r, npr); 
	printf("=============================\n");	
	return 0;
	 
}


void addn() {				
	int n, sum = 0;
	printf("Enter integers\n");
	printf("Enter ctrd + d for termination\n");	/*  ctrl + d  terminates the input */ 	
	while((scanf("%d", &n)) != -1) 			
		sum = sum + n;
	printf("=============================\n");	
	printf("Sum of entered integers = %d\n",sum);
	printf("=============================\n");
} 			
void cmplxnoadr() {
	int ch;	
	struct complex a, b, c;
	do {
		printf("=====================================================\n");				
              	printf("|		     COMPLEX NOS.  	            |\n");
                printf("=====================================================\n\n");   /* These are nested cases */	
		printf("1.COMPLEX ADD\n");
                printf("2.COMPLEX SUB\n");
                printf("3.COMPLEX MULT\n");
                printf("4.GO BACK \n\n");
                printf("=====================================================\n\n");
                printf("ENTER THE CHOICE : \t ");	
                scanf("%d",&ch);
                switch(ch) {
        		case 1:
                       		printf("\n");
				printf("Enter a and b where a + ib is the first complex number.\n");
				printf("a =  ");
				scanf("%d", &a.real);
				printf("b =  ");
				scanf("%d", &a.img);
				printf("Entered complex number = (%d) + (%d)i\n", a.real, a.img); 	
				printf("Enter c and d where c + id is the second complex number.\n");
				printf("c =  ");
				scanf("%d", &b.real);
			   	printf("d =  ");
			   	scanf("%d", &b.img);
				printf("Entered complex number = (%d) + (%d)i\n", b.real, b.img); 	
			  	c.real = a.real + b.real;
			 	c.img = a.img + b.img;
				printf("-------------------------------------------------------------------------\n");
				printf("Sum of two complex numbers = (%d) + (%d)i\n", c.real, c.img);
				printf("-------------------------------------------------------------------------\n");		
				break;
			case 2:					
				printf("\n");
				printf("Enter a and b where a + ib is the first complex number.\n");
				printf("a =  ");
				scanf("%d", &a.real);
				printf("b =  ");
				scanf("%d", &a.img);
				printf("Entered complex number = (%d) - (%d)i\n", a.real, a.img); 	
				printf("Enter c and d where c + id is the second complex number.\n");
				printf("c =  ");
				scanf("%d", &b.real);
			   	printf("d =  ");
			   	scanf("%d", &b.img);
				printf("Entered complex number = (%d) - (%d)i\n", b.real, b.img); 	
			  	c.real = a.real - b.real;
			 	c.img = a.img - b.img;
				printf("-------------------------------------------------------------------------\n");
				printf("Sum of two complex numbers = (%d) + (%d)i\n", c.real, c.img);
				printf("-------------------------------------------------------------------------\n");	
				break;
			case 3:
				printf("\n");
				printf("Enter a and b where a + ib is the first complex number.\n");
				printf("a =  ");
				scanf("%d", &a.real);
				printf("b =  ");
				scanf("%d", &a.img);
				printf("Entered complex number = (%d) + (%d)i\n", a.real, a.img); 	
				printf("Enter c and d where c + id is the second complex number.\n");
				printf("c =  ");
				scanf("%d", &b.real);
			   	printf("d =  ");
			   	scanf("%d", &b.img);
				printf("Entered complex number = (%d) + (%d)i\n", b.real, b.img); 	
			  	c.real = a.real * b.real;
			 	c.img = a.img * b.img;
				printf("-------------------------------------------------------------------------\n");
				printf("Sum of two complex numbers = (%d) + (%d)i\n", c.real, c.img);
				printf("-------------------------------------------------------------------------\n");	
				break;
					// add mult of comlpex nos 
			case 4:
				break;
		}		
	}while(ch != 4);
}


void series() {
            int i,n,j;
            float x,t,s,r;
            int ch;
      
            do {
                printf("==========================================\n");	/* These are nested cases */
                printf("|		SERIES			 |\n");
                printf("==========================================\n");		
                printf("1.SINE SERIES\n");
                printf("2.COSINE SERIES\n");
                printf("3.EXPONENTIAL SERIES\n");
                printf("4.GO BACK \n");
                printf("===================================================\n\n");
                printf("ENTER THE CHOICE\n");	
                scanf("%d",&ch);
                switch(ch) {
              
                  case 1:
                             printf("\n");
                             printf("ENTER THE LIMIT : \t");
                             scanf("%d",&n);
                             printf("ENTER THE VALUE OF x : \t");
                             scanf("%f",&x);
                             printf("===================================================\n");
                             printf("Sine series : sin x = x - ((x^3)/3!) + ((x^5)/5!) - …………..\n");

                             r = ((x*3.1415)/180);
                             t = r;
                             s = r;
                             i = 2;
                             for(j = 2; j <= n; j++) {
                
                                    t = (t*(-1)*r*r)/(i*(i+1));
                                    s = s+t;
                                    i = i+2;
                             }
                             printf("\n");
                             printf("SUM OF THE GIVEN SINE SERIES IS %4f\n",s);
                             printf("===================================================\n");           
                             break;
                  case 2:
                             printf("\n");
                             printf("ENTER THE LIMIT :  ");
                             scanf("%d",&n);
                             printf("ENTER THE VALUE OF x:");
                             scanf("%f",&x);
                             printf("===================================================\n");     
                             printf(" Cosine Series : cos x = 1 - ((x^2)/2!) + ((x^4)/4!) -…………...\n");
                                 
                             r=((x*3.14)/180);
                             t=1;
                             s=1;
                             i=1;
                             for(j=2;j<=n;j++) {
                        
                                    t=((-1)*t*r*r)/(i*(i+1));
                                    s=s+t;
                                    i=i+2;
                             } 
                             printf("\n");
                             printf(" SUM OF THE COSINE SERIES IS %f\n",s);
                             printf("===================================================\n"); 
                             break;
                  case 3:
                             printf("\n");
                             printf("ENTER THE LIMIT");
                             scanf("%d",&n);
                             printf("\n");
                             printf("ENTER THE VALUE OF x:");
                             scanf("%f",&x);
                             printf("===================================================\n");        
                             printf("Exponential Series  : e^x  = 1 + (x/1!) + ((x^2)/2!) + ((x^3)/3!)+…….\n");
                           ;          
                             t=1;
                             s=1;
                             for(i=1;i<n;i++) {

                                    t=(t*x)/i;
                                    s=s+t;
                             }
                             printf("\n");
                             printf("SUM OF EXPONENTIAL SERIES IS %f\n",s);
                             printf("===================================================\n");
                             break;
                       case 4: 
                            break;// exit(0);
                  default:
                             printf("WRONG CHOICE\n");
                }
                
               
            }
            while(ch != 4);
}

		/*
		 * 	This function contains choices available for operations on matrix
		 * 	Like : add, subtract, multiply matrix									
		 */
void matrix() {
	int i, j, r1 = 0, c1 = 0, r2 = 0, c2 = 0;
	int a[ROW][COL];			/* ROW, COL are defined globally */
	int b[ROW][COL];	
	int ch;
	int c[ROW][COL], k, add = 0;
	int ch1;
	long det;
	do {
		printf("==========================================\n");	/* These are nested cases */
                printf("|		MATRIX			 |\n");
                printf("==========================================\n\n");	
                printf("1.CREATE MATRIX\t\t");					/* These are available matrix operations */
		printf("2.ADD MATRIX\n");
		printf("3.SUBTRACT MATRIX\t");
		printf("4.MULTIPLY MATRIX\n");
	        printf("5.TRANSPOSE MATRIX\t");
	        printf("6.DETERMINANT\n\n\t\t");      
                printf("7.GO BACK \n\n");
                printf("================================================\n");
                printf("ENTER YOUR CHOICE : \t");	
                scanf("%d",&ch);
                switch(ch) {
              
			case 1:				     				  /* MATRIX CREATION */
				printf("Enter no of rows\t");
				scanf("%d", &r1);
				printf("Enter no of cols\t");
				scanf("%d", &c1);
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &a[i][j]);
					}
				}
				printf("----------------------------\n");				
				printf("MATRIX LOOK\n");
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
						printf("%d\t", a[i][j]);
					}printf("\n");
				}
				printf("----------------------------\n");				
				break;
			case 2:								/* MATRIX ADDITION */
				printf("FIRST MATRIX :\nEnter no of rows\t");
				scanf("%d", &r1);
				printf("Enter no of cols\t");
				scanf("%d", &c1);
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &a[i][j]);
					}
				}printf("\n");
				
				
				
				printf("SECOND MATRIX :\nEnter no of rows\t");
				scanf("%d", &r2);
				printf("Enter no of cols\t");
				scanf("%d", &c2);
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &b[i][j]);
					}
				}printf("\n");
				printf("FIRST MATRIX LOOK\n");
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
						printf("%d\t", a[i][j]);
					}printf("\n");
				}printf("\n");			
				printf("SECOND MATRIX LOOK\n");
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
						printf("%d\t", b[i][j]);
					}printf("\n");
				}printf("\n");
				if(r1 == r2 && c1 == c2) {
					printf("----------------------------\n");
					printf("Sum of entered matrices:-\n");
					for(i = 0; i < r2; i++) {
						for(j = 0; j < c2; j++) {
							printf("%d\t", a[i][j] + b[i][j]);
						}printf("\n");
					}
				printf("----------------------------\n");
				printf("\n");
				}
				else 
					printf("MATRIX CAN NOT BE ADDED; ENTER SAME DIMENSIONS\n\n");				
								
				break;
							
			case 3:
											/* MATRIX SUBTRACTION */
				printf("FIRST MATRIX :\nEnter no of rowst\t");
				scanf("%d", &r1);
				printf("Enter no of cols\t");
				scanf("%d", &c1);
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &a[i][j]);
					}
				}
				printf("FIRST MATRIX LOOK\n");
				printf("----------------------------\n");				
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
						printf("%d\t", a[i][j]);
					}printf("\n");
				}
				printf("----------------------------\n");
				printf("Enter no of rows\t");
				scanf("%d", &r2);
				printf("Enter no of cols\t");
				scanf("%d", &c2);
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &b[i][j]);
					}
				}
				printf("MATRIX LOOK\n");
				printf("----------------------------\n");
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
						printf("%d\t", b[i][j]);
					}printf("\n");
				}
				printf("----------------------------\n");
				if(r1 == r2 && c1 == c2) {
					printf("Difference of entered matrices:-\n");
					printf("----------------------------\n");
					for(i = 0; i < r2; i++) {
						for(j = 0; j < c2; j++) {
							printf("%d\t", a[i][j] - b[i][j]);
						}printf("\n");
					}
				printf("----------------------------\n");
				printf("\n");
				}
				else 
					printf("MATRIX CAN NOT BE ADDED; ENTER SAME DIMENSIONS\n");				
				break;				
			case 4:
											/* MATRIX MULTILPICATION */
				printf("FIRST MATRIX :\nEnter no of rows\t");
				scanf("%d", &r1);
				printf("Enter no of cols\t");
				scanf("%d", &c1);
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &a[i][j]);
					}
				}
				
				
				printf("SECOND MATRIX :\nEnter no of rows\t");
				scanf("%d", &r2);
				printf("Enter no of cols\t");
				scanf("%d", &c2);
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &b[i][j]);
					}
				}

				printf("FIRST MATRIX LOOK\n");
				printf("----------------------------\n");
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
						printf("%d\t", a[i][j]);
					}printf("\n");
				}
				printf("----------------------------\n");				
				printf("SECOND MATRIX LOOK\n");
				printf("----------------------------\n");
				for(i = 0; i < r2; i++) {
					for(j = 0; j < c2; j++) {
						printf("%d\t", b[i][j]);
					}
				printf("\n");
				}
				printf("----------------------------\n");
				printf("\n");
				if(c1 != r2) {
					printf("Matrices can not be multipied;\nEnter proper dimensions\n\n");
				}
				else {
					for(i = 0; i < r1; i++) {
						for(j = 0; j < c2; j++) {
							for (k = 0; k < r2; k++) {
          							add = add + a[i][k]*b[k][j];
       							}
 							c[i][j] = add;
							add = 0;
						 }
					}
				printf("MATRIX LOOK\n");
				printf("------------------------\n");
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c2; j++) {
						printf("%d\t", c[i][j]);
					}
				printf("\n");
				}
				printf("------------------------\n");
				}					
				break;					
			case 5:								/* MATRIX TRANSPOSE */
				printf("FIRST MATRIX :\nEnter no of rows\t");
				scanf("%d", &r1);
				printf("Enter no of cols\t");
				scanf("%d", &c1);
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
							printf("Enter a[%d][%d]\t: ", i, j);
							scanf("%d", &a[i][j]);
					}
				}
				printf("MATRIX LOOK\n");
				for(i = 0; i < r1; i++) {
					for(j = 0; j < c1; j++) {
						printf("%d\t", a[i][j]);
					}printf("\n");
				}
				printf("MATRIX TRANSPOSE LOOK\n");
				printf("----------------------------\n");
				for(j = 0; j < c1; j++) {
					for(i = 0; i < r1; i++) {
						printf("%d\t", a[i][j]);
					}
				
				printf("\n");
				}
				printf("----------------------------\n");
				break;
			case 6:								/* DETERMINANT */
				 printf("Matrix determinant for\n\n");
				 printf("1 : 2*2 MATRIX\n");
				 printf("2 : 3*3 MATRIX\n");
				 printf("3 : GO BACK\n\n"); 	 
				 printf("ENTER YOUR CHOICE\n");	
				 scanf("%d", &ch1);
				 switch(ch1) {
				 	case 1: 
				 		for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("Enter a[%d][%d]\t: ", i, j);
								scanf("%d", &a[i][j]);
							}
						}
							printf("-----------------------------\n");				
							printf("MATRIX LOOK\n");
							for(i = 0; i < 2; i++) {
								for(j = 0; j < 2; j++) {
									printf("%d\t", a[i][j]);
								}printf("\n");
							}printf("\n");
						det =  a[0][0]*a[1][1] - a[1][0]*a[0][1];
						printf("Determinant of 2*2 matrix : %ld\n", det);
						printf("----------------------------\n");
				 		break;
				 	case 2:
				 		for(i = 0; i < 3; i++) {
							for(j = 0; j < 3; j++) {
								printf("Enter a[%d][%d]\t: ", i, j);
								scanf("%d", &a[i][j]);
							}
						}
							printf("---------------------------------\n");				
							printf("MATRIX LOOK\n");
							for(i = 0; i < 3; i++) {
								for(j = 0; j < 3; j++) {
									printf("%d\t", a[i][j]);
								}printf("\n");
							}printf("\n");
						det =  a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2]))
							-a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) 
							+ a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
						printf("Determinant of 3*3 matrix : %ld\n", det);
						printf("---------------------------------\n");
				 		break;
				 	case 3:
						break;
					default :
						printf("Enter proper choice\n");
						break;
					}
				break;		 									
			case 7:
				printf("GOING OUT OF MATRIX\n");
				break;
		}				

	}  while(ch != 7);
}

void math() {
	int ch;
	double x, y, soln, cnvr, nmr, dmr;
	do {
		printf("=====================================================\n");	/* These are nested cases */
                printf("|	         	MATHEMATICS	      	    |\n");
                printf("=====================================================\n\n");	
                printf("1.arc sin(x)\t\t");					/* These are available matrix operations */
		printf("2.arc cos(x)\n");
		printf("3.arc tan(x)\t\t");
		printf("4.atan2 (y,x)\n");
	        printf("5.cos(x)\t\t");
	        printf("6.sin(x)\n");      
                printf("7.exp(x)\t\t");
		printf("8.log(x)\n");
		printf("9.log10(x)\t\t");
		printf("10.tan(x)\n\n\t\t");		
		printf("0 : EXIT\n\n");
                printf("=====================================================\n");
                printf("ENTER YOUR CHOICE : \t");	
                scanf("%d",&ch);
                switch(ch) {
              
			case 1:				    		/* the arc sine of x in radians */
				cnvr = 180.0 / PI;				
				printf("Enter the value of x : \t");
				scanf("%lf", &x); 
		        	soln = asin(x) * cnvr;
	          		printf("The arc sine of %lf is %lf degrees\n", x, soln);
				break;
			case 2:						/* the arc cosine of x in radians */
				cnvr = 180.0 / PI;				
				printf("Enter the value of x : \t");
				scanf("%lf", &x);				
				soln = acos(x) * cnvr;
				printf("The arc cosine of %lf is %lf degrees\n", x, soln);
				break;			
			case 3:						/* the arc tangent of x in radians */
				cnvr = 180.0 / PI;				
				printf("Enter the value of x : \t");
				scanf("%lf", &x);				
				soln = atan (x) * cnvr;
				printf("The arc tangent of %lf is %lf degrees\n", x, soln);
				break;
			case 4:	/* This function returns the principal arc tangent of y/x, in the interval [-pi,+pi] radians */	
				cnvr = 180.0 / PI;				
				printf("Enter the value of x : \t");
				scanf("%lf", &x);
				printf("Enter the value of y : \t");
				scanf("%lf", &y);				
				soln = atan2 (y,x) * cnvr;
				printf("The arc tangent of x = %lf, y = %lf ", x, y);
				printf("is %lf degrees\n", soln);
				break;			
			case 5:
				cnvr = PI / 180;				
				printf("Enter the value of x : \t");
				scanf("%lf", &x);
				soln = cos( x*cnvr );
   				printf("The cosine of %lf is %lf degrees\n", x, soln);
				break;			
			case 6:
				printf("Enter value of x : \t");
				scanf("%lf", &x);				
				cnvr = PI / 180;
				soln = sin( x*cnvr );
				printf("The sine of %lf is %lf degrees\n", x, soln);
				break;			
			case 7:
				printf("Enter value of x : \t");
				scanf("%lf", &x);				
				printf("The exponential value of %lf is %lf\n", x, exp(x));
				break;			
			case 8:
				printf("Enter value of x : \t");
				scanf("%lf", &x);				
				soln = log(x);
  				printf("log(%lf) = %lf\n", x, soln);
				break;			
			case 9:
				printf("Enter value of x : \t");
				scanf("%lf", &x);				
				soln = log10(x);
				printf("log10(%lf) = %lf\n", x, soln);
				break;			
			case 10:
				printf("Enter value of x : \t");
				scanf("%lf", &x);				
				cnvr = PI / 180;
				nmr = sin( x*cnvr );
				dmr = cos( x*cnvr );
				printf("%lf\n%lf", nmr, dmr);				
				if(dmr == 0)
					printf("The tan of %lf is not defined\n", x);
				else
					printf("The tan of %lf is %lf degrees\n", x, nmr/dmr);
				break;						
			case 0:	
				break;
			default :
				printf("Enter proper choice\n");
				break;
		}
	}while(ch != 0);		
}








































































