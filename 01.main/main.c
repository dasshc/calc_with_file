/*
 ============================================================================
 Name        : calculator.c
 Author      : Dasha Shcheglova
 Version     : 3.0
 Copyright   :
 Description : calculator.file
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char exit = 0;
  char c = 0;
  char t = 0; // save what type of data is contained in the file after we read it
  int i = 0;
  FILE *input, *output;

  do // each time will ask about the continuation of the program
  {
    puts("Enter any symbol on the keyboard and tap Enter or 'z' for exit");// give the user a choice to continue the program or exit

    scanf(" %c", &exit); //the users enters a symbol
    if (exit == 'z')
    {
      break; // the end of program. if the users enters 'z'
    }

    input = fopen("input.txt", "r"); // read the file 'input'
    output = fopen("output.txt", "w"); //write to the file 'output'

    fscanf(input, "%c", &c);
    fscanf(input, " %c", &t);
// The calculator can be used for numbers and vectors
    switch (t)

    {
      case 's': // numbers in the file
      {
        int a; // type integer
        int b;
        float result;

        fscanf(input, " %d", &a);
        fscanf(input, " %d", &b);

        switch (c)
        {
          case '+':
            result = a + b;
              fprintf(output, "answer: %d + %d = %f \n", a, b, result); // outputs the result to a file instead of to the console
            break;
          case '-':
            result = a - b;
            fprintf(output, "answer: %d - %d = %f \n", a, b, result);
            break;
          case '*':
            result = a * b;
            fprintf(output, "answer: %d * %d = %f \n", a, b, result);
            break;
          case '/':
            result = a / b;
            fprintf(output, "answer: %d / %d = %f \n", a, b, result);
            break;
          case '^':
            result = 1;

            for (i = 0; i < b; i++)
            {
              result = result * a;
            }
            fprintf(output, "answer: %d ^ %d = %f \n", a, b, result);
            break;
          case '!':
            if (a == 0) // if number=0, then dont need to count the factorial, the answer is 1
            {
              result = 1;
            }
            else // if number the factorial = 0
            {
              result = 1;
              for (i = 1; i <= a; i++)
              {
                result = result * i;
              }
            }
            fprintf(output, "answer: %d! = %f \n", a, result);
            break;
          default:
            puts("Wrong. Try again");
            break;
        }
        break; // getting out of numbers (case 's')
      }
      case 'v': // vectors
      {
        int *vector_a;
        int *vector_b;
        float *vector_result;
        int size = 0;

        fscanf(input, " %d", &size);


        vector_a = calloc(size, sizeof(int));
        vector_b = calloc(size, sizeof(int));
        vector_result = calloc(size, sizeof(float));


        for (i = 0; i < size; i++) // reading the values of 1 vector from the file
        {
          fscanf(input, " %d", &vector_a[i]);
        }


        for (i = 0; i < size; i++) // vector 2
        {
          fscanf(input, " %d", &vector_b[i]);
        }

       switch (c)
        {
          case '+':

            for (i = 0; i < size; i++)
            {
              vector_result[i] = vector_a[i] + vector_b[i];
            }


            fprintf(output, "("); // write values using '(' in output
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_a[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_a[i]);
              }
            }

            fprintf(output, " + "); // write '+' in file

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_b[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_b[i]);
              }
            }

            fprintf(output, " = "); // write '=' in file

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%.2f ", vector_result[i]);
              }
              else
              {
                fprintf(output, "%.2f)", vector_result[i]); // write values with  ')'
              }
            }
            break;
          case '-':

            for (i = 0; i < size; i++)
            {
              vector_result[i] = vector_a[i] - vector_b[i];
            }

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_a[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_a[i]);
              }
            }

            fprintf(output, " - ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_b[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_b[i]);
              }
            }

            fprintf(output, " = ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%.2f ", vector_result[i]);
              }
              else
              {
                fprintf(output, "%.2f)", vector_result[i]);
              }
            }
            break;
          case '*':

            for (i = 0; i < size; i++)
            {
              vector_result[i] = vector_a[i] * vector_b[i];
            }


            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_a[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_a[i]);
              }
            }

            fprintf(output, " * ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_b[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_b[i]);
              }
            }

            fprintf(output, " = ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%.2f ", vector_result[i]);
              }
              else
              {
                fprintf(output, "%.2f)", vector_result[i]);
              }
            }
            break;
          case '/':

            for (i = 0; i < size; i++)
            {
              vector_result[i] = vector_a[i] / vector_b[i];
            }


            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_a[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_a[i]);
              }
            }

            fprintf(output, " / ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%d ", vector_b[i]);
              }
              else
              {
                fprintf(output, "%d)", vector_b[i]);
              }
            }

            fprintf(output, " = ");

            fprintf(output, "(");
            for (i = 0; i < size; i++)
            {
              if (i != size - 1)
              {
                fprintf(output, "%.2f ", vector_result[i]);
              }
              else
              {
                fprintf(output, "%.2f)", vector_result[i]);
              }
            }
            break;
          default:
            puts("Wrong. Try again");
            break;
        }

        free(vector_a); // frees the memory that was allocated
        free(vector_b);
        free(vector_result);
        break; // for vectors (case 'v')
      }
      default:
        puts("Wrong");
        break;
    }
    fclose(input);
    fclose(output);

    puts("check output.txt");
  }
  while (exit != 'z');

  puts("The end");
}
