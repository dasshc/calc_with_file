/*
 ============================================================================
 Name        : calculator.c
 Author      : Dasha Shcheglova
 Version     : 2.0
 Copyright   :
 Description : calculator.vector
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)  //Calculator function for selecting an operation
{
	int *vector_a;
	int *vector_b;
	char c=0;
	float *vector_result;
	int i=0;
	int size=0;

	do
	{
		puts("Enter the size of vectors: ");
		scanf("%i", &size);
       printf("Select an operation ");
       printf("Operation (+,-,/,*,z): ");   //prints operations list on the screen, z - exit
	   scanf(" %c", &c);  //entering operations from the keyboard
	switch (c)
	{
	case '+':                /* finds a+b */
		vector_a = calloc(size, sizeof(int));
		printf("First number: ");
		for (i = 0; i < size; i++) {
			printf("vector_a[%i]=", i);
			scanf("%i", &vector_a[i]);
		}
		vector_b = calloc(size, sizeof(int));
		printf("Second number: ");
		for (i = 0; i < size; i++) {
			printf("vector_b[%i]=", i);
			scanf("%i", &vector_b[i]);
		}

		vector_result = calloc(size, sizeof(float));
		for (i = 0; i < size; i++) {
			vector_result[i] = vector_a[i] + vector_b[i];
		}
		printf("Answer: ");
		for (i = 0; i < size; i++) {
			printf("vector_result[%i] = %f \n", i, vector_result[i]);
		}
		break;
		free(vector_a);
		free(vector_b);
		free(vector_result);

	case '-':                /* finds a-b */
		vector_a = calloc(size, sizeof(int));
				printf("First number: ");
				for (i = 0; i < size; i++) {
					printf("vector_a[%i]=", i);
					scanf("%i", &vector_a[i]);
				}
				vector_b = calloc(size, sizeof(int));
				printf("Second number: ");
				for (i = 0; i < size; i++) {
					printf("vector_b[%i]=", i);
					scanf("%i", &vector_b[i]);
				}

				vector_result = calloc(size, sizeof(float));
				for (i = 0; i < size; i++) {
					vector_result[i] = vector_a[i] - vector_b[i];
				}
				printf("Answer: ");
				for (i = 0; i < size; i++) {
					printf("vector_result[%i] = %f \n", i, vector_result[i]);
				}
				break;
				free(vector_a);
				free(vector_b);
				free(vector_result);
    case '/':               /* finds a/b */
    	vector_a = calloc(size, sizeof(int));
    			printf("First number: ");
    			for (i = 0; i < size; i++) {
    				printf("vector_a[%i]=", i);
    				scanf("%i", &vector_a[i]);
    			}
    			vector_b = calloc(size, sizeof(int));
    			printf("Second number: ");
    			for (i = 0; i < size; i++) {
    				printf("vector_b[%i]=", i);
    				scanf("%i", &vector_b[i]);
    			}

    			vector_result = calloc(size, sizeof(float));
    			for (i = 0; i < size; i++) {
    				vector_result[i] = vector_a[i] / vector_b[i];
    			}
    			printf("Answer: ");
    			for (i = 0; i < size; i++) {
    				printf("vector_result[%i] = %f \n", i, vector_result[i]);
    			}
    			break;
    			free(vector_a);
    			free(vector_b);
    			free(vector_result);
	case '*':               /* finds a*b */
		vector_a = calloc(size, sizeof(int));
				printf("First number: ");
				for (i = 0; i < size; i++) {
					printf("vector_a[%i]=", i);
					scanf("%i", &vector_a[i]);
				}
				vector_b = calloc(size, sizeof(int));
				printf("Second number: ");
				for (i = 0; i < size; i++) {
					printf("vector_b[%i]=", i);
					scanf("%i", &vector_b[i]);
				}

				vector_result = calloc(size, sizeof(float));
				for (i = 0; i < size; i++) {
					vector_result[i] = vector_a[i] * vector_b[i];
				}
				printf("Answer: ");
				for (i = 0; i < size; i++) {
					printf("vector_result[%i] = %f \n", i, vector_result[i]);
				}
				break;
				free(vector_a);
				free(vector_b);
				free(vector_result);
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
