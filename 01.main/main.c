/*
 ============================================================================
 Name        : calculator.c
 Author      : Dasha Shcheglova
 Version     :
 Copyright   :
 Description : calculator
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)  //Calculator function for selecting an operation
{
	int a;
	int b;
	char c;
	float result;
	int i;

	do
	{
       printf("Select an operation ");
       printf("Operation (+,-,/,*,!,^,z): ");   //prints operations list on the screen, z - exit
	   scanf(" %c", &c);  //entering operations from the keyboard
	switch (c)
	{
	case '+':                /* finds a+b */
		printf("First number: ");
		scanf("%i", &a);
		printf("Second number: ");
		scanf("%i", &b);
		result = a + b;
		printf("Answer: %i + %i = %f \n", a, b, result);
		break;
	case '-':                /* finds a-b */
		printf("First number: ");
		scanf("%i", &a);
		printf("Second number: ");
		scanf("%i", &b);
		result = a - b;
		printf("Answer: %i - %i = %f \n", a, b, result);
		break;
    case '/':               /* finds a/b */
		printf("First number: ");
		scanf("%i", &a);
		printf("Second number: ");
		scanf("%i", &b);
		result = a / b;
		printf("Answer: %i / %i = %f \n", a, b, result);
		break;
	case '*':               /* finds a*b */
		printf("First number: ");
		scanf("%i", &a);
		printf("Second number: ");
		scanf("%i", &b);
		printf("Answer: %i * %i = %f \n", a, b, result);
		break;
	case '!':                 /* factorial */
		printf("First number: ");
	    scanf("%i", &a);
		if (a == 0)
		{
			result = 1;
		}
		else
		{
		result = 1;
		for (i = 1; i <= a; i++)
		   {
            result = result *i;
		   }
		}
		printf("Answer: %i! = %f \n", a, result);
		break;
	case '^':            /* exponentiation */
	    printf("First number: ");
	    scanf("%i", &a);
	    printf("Second number: ");
	    scanf("%i", &b);
	    result = 1;

	    for (i= 0; i < b; i++)
	    {
	    	result = result * a;
	    }
	    printf("Answer: %i ^ %i = %f \n", a, b, result);
		break;
	case 'z':
	        printf("Program exit");
	        break;
	      default:
	    	  printf("Wrong");
	    	  printf("Try again");
	          break;
	    }
	  }
	  while (c != 'z');


	}
