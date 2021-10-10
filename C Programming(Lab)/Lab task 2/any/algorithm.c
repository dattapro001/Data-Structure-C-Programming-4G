
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

void Registration();
void log_in();
void quiz();
void practice();
int score;

int ani()
{

    int x;

    printf("\n\nEnter any value grater than 0 and less than 10:   ");
    scanf("%d",&x);
    if(x>=0 && x<=10)
    {
      turn();
    }
    else
    {
        printf("\n\nyou have exited from the program");
    }
}
int turn()
{
       int a;
       system("cls");
       system("color 70");
       printf("\n\n|press 1 for c learning\n\n|");
       printf("|press 2 for quiz\n\n|");
       printf("|press 3 for practice|\n\n");
       printf("|press 4 for exit|\n\n");


       printf("choose your option: ");
       scanf("%d",&a);
       system("cls");
       return a;
}

int menu()
{
      int c;
      system("cls");
      system("color 0e");
      printf("\n\n|press 1 for MEnu\n\n|");

      printf("click: ");
      scanf("%d",&c);
      system("cls");
      return c;

}
void c_learning()
{
    int c;
    system("color 1");
    printf("\n\nStart learning C here.\n");
    printf("Select a topic\n\n");
    printf("1.C for Loop\n2.C programming Arrays\n3.c function\n4.break and continue\n5.C programming goto\n6.Structure\n7.String");
    printf("\n\n\n||Choose one:  ");
    scanf("%d",&c);
    system("cls");
    if(c==1)
    {
        goto loop;
    }
    else if(c==2)
    {
        goto array;
    }
    else if(c==3)
    {
        goto function;
    }
    else if(c==4)
    {
        goto Break_continue;
    }
    else if(c==5)
    {
        goto Goto;

    }
    else if(c==6)
    {
        goto structure;
    }
    else if(c==7)
    {
        goto string;
    }


    loop:
        system("cls");

        system("color 3");

        int h;
        printf("1.for loop\n\n2.while loop\n\n3.do..while loop\n\n");
        printf("Choose a loop: ");
        scanf("%d",&h);
        system("cls");
        if(h==1)
        {
            system("color 14");
            printf("In programming, a loop is used to repeat a block of code until the specified condition is met.C programming has three types of loops: ");
            printf("\n\n1.for loop\n2.do..while loop\n3while loop");

            printf("\n\nsyntax of the for loop is: ");

            printf("\n\nfor(initializationStatement; testExpression; updateStatement)");
            printf("{\n\t\t statements inside the body of loop\n}");
            printf("\nHow for loop works?\n\n*The initialization statement is executed only once.\n\n*Then, the test expression is evaluated.\n*If the test expression is evaluated to false, the for loop is terminated.");
            printf("\n\n*However, if the test expression is evaluated to true, statements inside the body of the for loop are executed, and the update expression is updated.");
            printf("\n\n*Again the test expression is evaluated.");
            printf("\n\nThis process goes on until the test expression is false. When the test expression is false, the loop terminates.n\n");
            printf("\n\nA basic code for 'for' loop");

            printf("\n\n// Printing numbers from 1 to 10\n\n#include <stdio.h>\nint main()\n{\n  int i;\n  for (i = 1; i < 11; ++i)\n {\n\t printf(D, i);\n }");
            getch();
                printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();

        }
        else if(h==2)
        {

           system("color 3");
           printf("\nIn this tutorial, you will learn to create while and do...while loop in C programming with the help of examples.\n\n");
           printf("In the previous tutorial, we learned about for loop. In this tutorial, we will learn about while loop\n\n.");
           printf("while loop.\n\nThe syntax of the while loop is: ");
           printf("while (testExpression)\n{\n\n\t\t// the body of the loop\n} ");
           printf("\n\nHow while loop works?\n\nThe while loop evaluates the test expression inside the parenthesis ().\n\n");
           printf("**If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.\n\n");
           printf("**The process goes on until the test expression is evaluated to false.\n\n**If the test expression is false, the loop terminates (ends).\n\n");
           printf("OUTPUT\n\n");
           printf("1\n2\n3\n4\n5\n");
           getch();

               printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();

        }
        else if(h==3){

          system("color 3");

          printf("\n\nIn this tutorial, you will learn to create do...while loop in C programming with the help of examples.\n\n");
          printf("do...while loop\n\nThe do..while loop is similar to the while loop with one important difference. The body of do...while loop is executed at least once. Only then, the test expression is evaluated.");
          printf("\nThe syntax of the do...while loop is: ");
          printf("\n\ndo\n{\n\t// the body of the loop\n}\nwhile (testExpression);");
          printf("\n\nHow do...while loop works?\n\n**The body of do...while loop is executed once. Only then, the test expression is evaluated.");
          printf("\n\n**If the test expression is true, the body of the loop is executed again and the test expression is evaluated.\n\nThis process goes on until the test expression becomes false.");
          printf("\n\n**If the test expression is false, the loop ends.");
          printf("\n\nExample 2: do...while loop\n\n// Program to add numbers until the user enters zero.\n\n#include <stdio.h>\nint main()\n{\n\tdouble number, sum = 0;\n\t// the body of the loop is executed at least once");
          printf("\n\tdo\n\t{\n\tprintf(Enter a number: );");
          printf("\n\tscanf(lff, &number);\n\tsum += number;\n\n\twhile(number != 0.0);\n\t\tprintf(Sum =2lf,sum);\n}");
          printf("\n\n\nOUTPUT\n\n");
          printf("Enter a number: 1.5\n\nEnter a number: 2.4\n\nEnter a number: -3.4\n\nEnter a number: 4.2\n\nEnter a number: 0Sum = 4.70\n\n");
          getch();

          printf("\nEnter any digit to return main menu\n");
          int n;
          scanf("%d",&n);
          main();

       }
       else
        //ani();
        main();

   array:
    system("cls");

    system("color 3");


    printf("In this tutorial, you will learn to work with arrays. You will learn to declare, initialize and access elements of an array with the help of examples.");
    printf("\n\n\nAn array is a variable that can store multiple values. For example, if you want to store 100 integers, you can create an array for it.\n\n\t|||int data[100];||| ");
    printf("\n\nHow to declare an array?\n\n\t|||dataType arrayName[arraySize];|||");
    printf("\nFor example,\n\n\t|||float mark[5]|||;");
    printf("\n\nHow to initialize an array?\n\nIt is possible to initialize an array during declaration.\n\n For example,");
    printf("\n\n\t|||int mark[5] = {19, 10, 8, 17, 9};|||");
    printf("\n\nYou can also initialize an array like this.\n\n\tint mark[] = {19, 10, 8, 17, 9};");
    printf("\n\n**Change Value of Array elements\n\n\nint mark[5] = {19, 10, 8, 17, 9}\n\n// make the value of the third element to -1\nmark[2] = -1");
    printf("\n\n// make the value of the fifth element to 0\nmark[4] = 0;");
    printf("\n\nInput and Output Array Elements");
    printf("​\n\nscanf(d, &mark[2]);");
    printf("\n\n// take input and store it in the ith element");
    printf("scanf(d, &mark[i-1]);");


    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();


   function:
         system("cls");

         system("color 3");

         printf ("\t\t\t\t\t*****C Functions*****\n");
         printf("\nA function is a collection of statements grouped together to do some specific task. In series of learning C programming, we already used many functions unknowingly.\n");
         printf("Functions such as - printf(), scanf(), sqrt(), pow() or the most important the main() function.\n");
         printf("Every C program has at least one function. in example : the main() function.\n");
         printf("\n\nFunction declaration\n");
         printf("Like variable declarations, functions are also declared.\n");
         printf("Function declaration tells the compiler that there exists a function with some name that may be used later in the program.");
         printf("Function declaration is also known as function prototype or function signature.\n");
         printf("\n\nSyntax of function declaration: ");
         printf("return_type function_name( parameter_list)\n");
         printf("\n\nReturn type: Return type defines the data type of value returned by the function.");
         printf("A function does some calculation and may return a resultant value. So that the result of one function can be used by another function.\n");
         printf("For example: sqrt() function returns square root of given number, which is later used by calling function.\n");
         printf("You must mention return type as void if your function does not return any value.\n");
         printf("\n\nFunction name: Function name is a valid C identifier that uniquely identifies the function.\n");
         printf("You must follow identifier naming rules while naming a function.\n");
         printf("\n\nParameter list: A function may accept input.\n");
         printf("Parameter list contains input type and variable name given to the function. Multiple inputs are separated using comma ,.\n");
         printf("A function declaration must be terminated using semicolon (;).\n");
         printf("You can declare a function anywhere in the program.");
         printf("However it is best practice to declare functions below pre-processor directives.\n");
         printf("\n\nImportant note: Function declaration is optional.");
         printf("You can directly define and call a function skipping its declaration. However, you must define the function prior to its use.\n");
         printf("\n\nFunction calling\n");
         printf("\nThe most important part of function is its calling. Calling of a function in general is execution of the function.\n");
         printf("It transfers program control from driver (current) function to called function.");
         printf("We can optionally pass input to the calling function.\n");
         printf("\n\nSyntax of function call: ");
         printf("function_name( parameter_list );\n");
         printf("\n\nExample of Function\n");
         printf("#include <stdio.h>\n");
         printf("int add(int num1, int num2);\n");
         printf("int main()\n");
         printf("{int n1, n2, sum;\n");
         printf("printf(Enter two numbers: );\n");
         printf("scanf(&n1, &n2)\n");
         printf("sum = add(n1, n2)");
         printf("Sum = \n");
         printf("return 0;}\n");
         printf("\n\nOutput -\n");
         printf("Enter two numbers: 10 20\n");
         printf("Sum = 30\n");
         int a;
         printf ("\n\n\nThere are two types of function in C programming: \n");
         printf("1.Standard library functions\n2.User-defined functions\n");
         printf("\nChoose your option: \n");
         scanf ("%d", &a);
         system("cls");
         if (a==1)
         {
           system("cls");


           system("color 3");


           printf("\t\t\t\t~~~Standard Library Functions~~~\n");
           printf ("\nStandard library functions: The standard library functions are built-in functions in C programming.These functions are defined in header files. For example,The printf() is a standard library function to send formatted output to the screen (display output on the screen). This function is defined in the stdio.h header file.Hence, to use the printf() function, we need to include the stdio.h header file using #include <stdio.h>.The sqrt() function calculates the square root of a number. The function is defined in the <math.h> header file\n");
           system ("color 0b");
           printf ("\n---Advantages of Using C library functions---\n");
           printf("\n1.They work one of the most important reasons you should use library functions is simply because they work. These functions have gone through multiple rigorous testing and are easy to use.\n");
           printf("\n2.The functions are optimized for performance. Since, the functions are standard library functions, a dedicated group of developers constantly make them better. In the process, they are able to create the most efficient code optimized for  maximum performance.\n");
           printf("\n3.It saves considerable development time.Since the general functions like printing to a screen, calculating the square  root and many more are already written. You shouldn't worry about creating them once again.\n");
           printf("\n4.The functions are A function is a block of code that performs a specific task.\n");
           printf("\nExample: Square root using sqrt() function.\nSuppose, you want to find the square root of a number. To compute the square root of a number, you can use the sqrt() library function. The function is defined in the math.h header file.\n");
           printf("\n\n#include <stdio.h>\n#include <math.h>\n");
           printf("int main()\nfloat num,root;\n");
           printf("printf(Enter a number: \n");
           printf("scanf(%f, &num);\n");
           printf("root = sqrt(num);\n");
           printf("printf(Square root of %.2f = %.2f, num, root);\n");
           printf("return 0;\n");
           printf ("\n\nWhen you run the program, the output will be:\nEnter a number: 12,\nSquare root of 12.00 = 3.46\n");
           printf("\n\t\t~~~~Library Functions in Different Header Files~~~\n\n<assert.h>  Program assertion functions\n\n<ctype.h>  Character type functions\n\n<locale.h>  Localization functions\n\n<math.h>  Mathematics functions\n\n<setjmp>  Jump functions\n\n<signal.h>  Signal handling functions\n\n<stdarg.h>  Variable arguments handling functions\n\n<stdio.h>  Standard Input/Output functions\n\n<stdlib.h>  Standard Utility functions\n");
           printf("\n<string.h>  String handling functions\n\n<time.h>  Date time functions\n");
           getch();
           //ani();

    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();


        }

        else
        {

             system("cls");

             system("color 3");

             printf("\t\t\t\t~~~User-Defined Functions~~~\n");
             printf("\nA function is a block of code that performs a specific task.\n");
             printf("C allows you to define functions according to your need. These functions are known as user-defined functions.\n");
             printf("For example: Suppose, you need to create a circle and color it depending upon the radius and color. You can create two functions to solve this problem: \n");
             printf("---createCircle() function \n---color() function\n");
             printf("\nExample: User-defined function\n");
             printf("Here is an example to add two integers. To perform this task, we have created an user-defined addNumbers().\n");
             printf("\n\n\t#include <stdio.h>\n");
             printf("int addNumbers(int a, int b);\n");
             printf("int main()\n");
             printf("int n1,n2,sum;\n");
             printf("Enters two numbers: \n");
             printf("&n1,&n2\n");
             printf("sum = addNumbers(n1, n2);\n");
             printf("sum = %d,sum\n");
             printf("return 0;}\n");
             printf("int addNumbers(int a, int b)\n");
             printf("int result;\n");
             printf("result = a+b;\n");
             printf("return result;\n");
             printf("\n\nBased on prototype, user defined function are further categorized in four categories.\n");
             printf("\n1.Function with no return and no argument\n");
             printf("2.Function with no return but arguments\n");
             printf("3.Function with return but no argument\n");
             printf("4.Function with return and arguments\n");
             getch();
             //ani();
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();


        }


  Break_continue:
              system("cls");


              system("color 3");

              printf ("                  ~~~~C BREAK~~~~            \n");
              printf ("\n The break statement ends the loop immediately when it is encountered. Its syntax is: break;");
              printf("\n The break statement is almost always used with if...else statement inside the loop.\n");


              printf("\nHere are some EXAMPLES:");
              printf("\nExample 1: break statement:\n// Program to calculate the sum of numbers\n");

              printf("\n#include <stdio.h>");

              printf("\nint main() {");

              printf("\nint i;");
              printf("\ndouble number, sum = 0.0;");

              printf("\nfor (i = 1; i <= 10; ++i) {");



              printf("\nif (number < 0.0) {");
              printf("\n  break;\n\n} ");


              printf("\nsum += number;\n\n}");



              printf(" \nreturn 0; \n}");

              printf("\n\n     OUTPUT:     ");

              printf("\nEnter n1: 2.4\nEnter n2: 4.5\nEnter n3: 3.4\nEnter n4: -3\n\nSum = 10.30");


              printf("\n\nThis program calculates the sum of a maximum of 10 numbers.Why a maximum of 10 numbers?It's because if the user enters a negative number, the break statement is executed.This will end the for loop, and the sum is displayed.");
              printf("\nIn C,break is also used with the switch statement.");
              printf("\n\n\n\n             ~~~~C CONTINUE~~~~     \n");
              printf("\n\nThe continue statement skips the current iteration of the loop and continues with the next iteration. Its syntax is: ");

              printf("continue;");
              printf("\nThe continue statement is almost always used with the if...else statement.");
              printf("\n\n\n Example 2: continue statement");
              printf("\n// Program to calculate the sum of numbers (10 numbers max) ");
              printf("\n#include <stdio.h>");
              printf("\nint main() { ");
              printf("\n  int i;\n double number, sum = 0.0;");

              printf("\n for (i = 1; i <= 10; ++i) { \n printf(Enter a n%d: , i);");
              printf("\nscanf(%lf, &number);");

              printf("\nif (number < 0.0) {\n   continue;\n }");

              printf("\n sum += number; // sum = sum + number;\n  }");

              printf("\n  printf(Sum = %.2lf, sum);");

              printf("\n return 0;");
              printf("\n   Output  ");
              printf("\nEnter n1: 1.1\nEnter n2: 2.2\nEnter n3: 5.5\nEnter n4: 4.4\nEnter n5: -3.4\nEnter n6: -45.5\nEnter n7: 34.5\nEnter n8: -4.2\nEnter n9: -1000\nEnter n10: 12\nSum = 59.70");

              printf("\n\nIn this program, when the user enters a positive number, the sum is calculated using sum += number; statement.");

              printf("\n\nWhen the user enters a negative number, the continue statement is executed and it skips the negative number from the calculation.");
              //ani();
            printf("\nEnter any digit to return main menu\n");
    int r;
    scanf("%d",&r);
    main();

  Goto:
     system("cls");

     system("color 3");


     printf("  \n\n\n                  ~~~C Programming Goto ~~~");
     printf("\nThe goto statement allows us to transfer control of the program to the specified label.");
     printf("\nSyntax of goto Statement:");
     printf("\ngoto label;'\n... .. ...\n... .. ...\nlabel: \nstatement;");
     printf("\nThe label is an identifier. When the goto statement is encountered, the control of the program jumps to label: and starts executing the code");
     printf(" \nProgram to calculate the sum and average of positive numbers");
     printf("\n// If the user enters a negative number, the sum and average are displayed");

     printf("\n #include <stdio.h>");
     printf("\n int main() {\n const int maxInput = 100; ");
     printf("\n int i;\ndouble number, average, sum = 0.0; ");

     printf("\nfor (i = 1; i <= maxInput; i+l) {\n printf(Enter a number: ,i );");
     printf("\nscanf(%lf, &number);");
     printf("\n // go to jump if the user enters a negative number.\nif (number < 0.0) {\ngoto jump;\n}");
     printf("\n sum += number; \n}");

     printf("\njump: ");
     printf(" printf( average = sum / (i - 1););");
     printf("  printf(Sum = %.2f\n, sum);");
     printf("  printf(Average = %.2f, average);");

     printf(" return 0;\n}");
     printf("\nOutput\n\n");
     printf("\n\n\n1. Enter a number: 3\n2. Enter a number: 4.3");
     printf("\n3. Enter a number: 9.3\n4. Enter a number: -2.9");
     printf("\n\nSum = 16.60\n\nAverage = 5.53");

     printf("\n\nReasons to avoid Goto: ");
     printf("\nThe use of goto statement may lead to code that is buggy and hard to follow. For example,");

     printf("\n\n\none:\nfor (i = 0; i < number; ++i)\n{");
     printf("\n  test += i;\n goto two;\n}");
     printf("\ntwo: \nif (test > 5)\n {");
     printf(" goto three;\n}\n\n... .. ...");
     printf("\n\nAlso, the goto statement allows you to do bad stuff such as jump out of the scope.");

     printf("\nThat being said, goto can be useful sometimes. For example: to break from nested loops.");
     printf("\n\nShould you use goto?");
     printf("\n\nIf you think the use of goto statement simplifies your program, you can use it. That being said, goto is rarely useful and you can create any C program without using goto altogether.");
     getch();

    // ani();
     printf("\nEnter any digit to return main menu\n");
     int f;
     scanf("%d",&f);
     main();

  structure:
         system("cls");

         system("color 3");


         printf("\n\n\n\t        ~~~~~C Structure~~~~~");
         printf("\n\n\nIn C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.");
         printf("\n\nHow to define structures?");
         printf("\n\nBefore you can create structure variables, you need to define its data type. To define a struct, the struct keyword is used.");
         printf("\nWhen a struct type is declared, no storage or memory is allocated. To allocate memory of a given structure type and work with it, we need to create variables.");

         printf("\n\nHere's how we create structure variables:");

         printf("\n\nstruct Person\n{");
         printf("  char name[50];\n  int citNo;\n  float salary;");
         printf("};\n\nint main()\n{\n struct Person person1, person2, p[20];\n  return 0;\n}");
         printf("\nWhy structs in C?");
         printf("\n\nSuppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables name, citNo and salary to store this information.");

         printf("\n\nWhat if you need to store information of more than one person? Now, you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2,etc.");

         printf("\n\n better approach would be to have a collection of all related information under a single name Person structure and use it for every person.");
         getch();


        // ani();
    printf("\nEnter any digit to return main menu\n");
    int o;
    scanf("%d",&o);
    main();
  string:
      system("cls");

      system("color 3");

      printf("In this tutorial, you'll learn about strings in C programming. You'll learn to declare them, initialize them and use them for various I/O operations with the help of examples.\n");
      printf("in C programming, a string is a sequence of characters terminated with a null character \0.\n\n For example:");

      printf("char c[] = c string");
      printf("When the compiler encounters a sequence of characters enclosed in the double quotation marks,it appends a null character \0 at the end by default.\n\n");
      printf("\n\nHow to declare a string?\n\n");
      printf("Here's how you can declare strings:");
      printf("\n\nchar s[5];\n\n");
      printf("How to initialize strings?\n\n");
      printf("You can initialize strings in a number of ways.\n\n");
      printf("char c[] = abcd;\n\nchar c[50] = abcd;\n\n;char c[] = {'a', 'b', 'c', 'd', '\0'};\n\nchar c[5] = {'a', 'b', 'c', 'd', '\0'}\n\n");
      printf("Read String from the user.\n\n\nYou can use the scanf() function to read a string.\nThe scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).\n\n");
      printf("Example : scanf() to read a string");
      printf("\n\n\n#include <stdio.h>\nint main()\n{\n\tchar name[20];\n\tprintf(Enter name: );\n\tscanf(s, name);\n\tprintf(Your name is s., name);\n\treturn 0;\n}");
      printf("\n\nOutput\n\nEnter name: Dennis\n\nYour name is Dennis.");
      printf("\n\n\nPassing Strings to Functions");
      printf("\n\nStrings can be passed to a function in a similar way as arrays. Learn more about passing arrays to a function.\n\n");
      printf("Example : Passing string to a Function\n\n#include <stdio.h>\n\nvoid displayString(char str[]);\n\nint main()\n{\n\tchar str[50];\n\tprintf(Enter string: );\n\tfgets(str, sizeof(str), stdin); ");
      printf("\n\tdisplayString(str);// Passing string to a function.\n\treturn 0;\n}\nvoid displayString(char str[])\n{\n\tprintf(String Output: );\n\tputs(str);\n}");
      printf("\n\n\nCommonly Used String Functions\n\nstrlen() - calculates the length of a string\n\nstrcpy() - copies a string to another\n\nstrcmp() - compares two strings\n\nstrcat() - concatenates two strings\n\n");
      getch ();


      //ani();


    printf("\nEnter any digit to return main menu\n");
    int z;
    scanf("%d",&z);
    main();







}
void practice()
{
    int j;
    system("color 9");
    printf("\n\nHere you can practice with these topics and can increase your skill\n\n");
    printf("\n\nThe topics you can practice are: ");
    printf("\n1.Array\n");
    printf("\n2.if...else");
    printf("\n\nChoose: ");
    scanf("%d",&j);
    system("cls");
    if(j==1)
    {
        goto Array;
            printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();

    }
    else{

        goto ifeli;
        printf("\nEnter any digit to return main menu\n");
        int n;
        scanf("%d",&n);
        main();

    }



    Array:
        system("cls");

        system("color 11");

        int n;
        printf("1.Write a C program to read and print elements of array. - using recursion\n\n");
        printf("2.Write a C program to print all negative elements in an array.\n\n");
        printf("3.Write a C program to find sum of all array elements. - using recursion\n\n");
        printf("Choose one: ");
        scanf("%d",&n);
        system("cls");
        if(n==1)
        {
           system("color 0f");
           printf("Write a C program to declare, initialize, input elements in array and print array. How to input and display elements in an array using for loop in C programming.");
           printf("\n\nC program to input and print array elements using loop.");

           printf("\n\nExample");

           printf("\n\nInput");

           printf("\n\nInput size: 10");
           printf("\n\nInput elements:\n\n 1\n\n22");

           printf("\n\nOutput");

           printf("\n\nOutput: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10");


       }

         else
         {

           printf("\nEnter any digit to return main menu\n");
           int f;
           scanf("%d",&f);
           main();

          }



           int s;
           printf("\n\npress 1 to see the solution:  ");
           scanf("%d",&s);
           system("cls");
           if(s==1)
           {

              system("color 11");

              printf("\n\ninclude <stdio.h>\n\n#define MAX_SIZE 1000 // Maximum array size");
              printf("\n\nint main()\n{\nint arr[MAX_SIZE]; // Declare an array of MAX_SIZE\nint i, N;");

              printf("\n/* Input array size */\nprintf(Enter size of array: );");
              printf("\nscanf(d, &N);");

              printf("\nprintf(Enter %d elements in the array :, N)");
              printf("\nfor(i=0; i<N; i++)\n\tscanf(d, &arr[i]);\n");
              printf("printf(\nElements in array are: )\n\nfor(i=0; i<N; i++)\n\tprintf(%d,, arr[i]);");

              printf("\nreturn 0;");
              getch();
             // ani();
                 printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();


           }



       else if(n==2)
       {
           system("color 11");

           printf("Write a C program to input elements in array and print all negative elements. How to display all negative elements in array using loop in C program. Logic to display all negative elements in a given array in C programming.");

           printf("\nExample");

           printf("\nInput");

           printf("Input array:\n-1\n-10\n100\n5\n61\n-2\n23\n8\n-90\n51");

           printf("Output:  -1, -10, -2, -23, -90");

           int s;
           printf("\n\npress 1 to see the solution:  ");
           scanf("%d",&s);
           system("cls");
           if(s==1)
           {
               system("color 11 ");
               printf("\n\ninclude <stdio.h>\n\n#define MAX_SIZE 1000 // Maximum array size");
               printf("\n\nint main()\n{\nint arr[MAX_SIZE]; // Declare an array of MAX_SIZE\nint i, N;");

               printf("\n/* Input array size */\nprintf(Enter size of array: );");
               printf("\nscanf(d, &N);");

               printf("\nprintf(Enter %d elements in the array :, N)");
               printf("\nfor(i=0; i<N; i++)\n\tscanf(d, &arr[i]);\n");
               printf("printf(\nElements in array are: )\n\nfor(i=0; i<N; i++)\n\tprintf(%d,, arr[i]);");
               printf("\nprintf(\nAll negative elements in array are : );\n\nfor(i=0; i<N; i++)");
               printf("{\n\tif(arr[i] < 0)\n{\n\tprintf(d\t, arr[i]);\n}");
               getch();
               //ani();
                printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();


           }

       }
       else
       {
           system("color 11");
           printf("Write a C program to read elements in an array and find the sum of array elements. C program to find sum of elements of the array. How to add elements of an array using for loop in C programming. Logic to find sum of array elements in C programming.");
           printf("\nExample");

           printf("\nInput");

           printf("\n\nInput elements: 10 20 30 40 50");

           printf("\n\nSum of all elements: 150");

           int s;
           printf("\n\npress 1 to see the solution:  ");
           scanf("%d",&s);
           system("cls");
           if(s==1)
           {
               system("color 11");
               printf("\n\ninclude <stdio.h>\n\n#define MAX_SIZE 1000 // Maximum array size");
               printf("\n\nint main()\n{\nint arr[MAX_SIZE]; // Declare an array of MAX_SIZE\nint i, N,sum=0;");

               printf("\n/* Input array size */\nprintf(Enter size of array: );");
               printf("\nscanf(d, &N);");

               printf("\nprintf(Enter %d elements in the array :, N)");
               printf("\nfor(i=0; i<N; i++)\n\tscanf(d, &arr[i]);\n");
               printf("printf(\nElements in array are: )\n\nfor(i=0; i<N; i++)\n\tprintf(%d,, arr[i]);");

               printf("\nfor(i=0; i<n; i++)\n   sum = sum + arr[i];");

               printf("printf(Sum of all elements of array = d, sum);");

               printf("\n\nreturn 0;");
               getch();

               //ani();
               printf("\nEnter any digit to return main menu\n");
               int n;
               scanf("%d",&n);
               main();

           }


        }

   ifeli:
       system("cls");

       system("color 8");

       int a;
       printf("\t\t\t~~~Practice Section of IF...ELSE~~~\n");
       printf("\n\n1.C program to find maximum between two numbers.\n");
       printf("2.C program to check whether a number is negative, positive or zero.\n");
       printf("3.C program to check whether a number is divisible by 5 and 11 or not.\n");
       printf("4.C program to check whether a number is even or odd.\n");
       printf("\nchoose ur option: \n");
       scanf("%d", &a);
       system("cls");
       if(a==1)
       {

           system("color 8");
           printf("Write a C program to find maximum between two numbers using if else.");
           printf("C program to input two numbers from user and find maximum between two numbers using if else.");
           printf("How to find maximum or minimum between two numbers using if else in C programming.\n");
           printf("\n\nExample-\n");
           printf("\nInput\n");

           printf("Input num1: 10\n");
           printf("Input num2: 20\n");

           printf("\n\nOutput\n");
           printf("\nMaximum = 20\n");

           int s;
           printf("\n\npress 1 to see the solution:  ");
           scanf("%d",&s);
           system("cls");
           if(s==1)
           {
               system("color 8");
               printf("\n\n\n#include <stdio.h>\nint main()\n{\n\tint num1,num2;//input 2 num from user\n\n\tprintf(Enter 2 num:)\n\tscanf(d d, &num1, &num2)");
               printf("\n\tif(num1>num2)\n\tprintf(d is maximum,num1);\n\tif(num2>num1)\n{\n\tprintf(d is mximum,num2)\n\tif(num1==num2)\n\tprintf(both are equal)\n\n");

               printf("\nEnter any digit to return main menu\n");
               int f;
               scanf("%d",&f);
               main();

           }


      }

      else if(a==2)
      {
            system("color 8");
            printf("Write a C program to check positive, negative or zero using simple if or if else.");
            printf("C program to input any number from user and check whether the given number is positive, negative or zero.");
            printf("Logic to check negative, positive or zero in C programming.\n");
            printf("\n\nExample\n");
            printf("Input\n");
            printf("Input number: 23\n");
            printf("\nOutput\n");
            printf("23 is positive\n");
            int s;
            printf("\n\npress 1 to see the solution: ");
            scanf("%d", &s);
            system("cls");
            if (s==1)
            {
                system("color 8");
                printf("\n\n//a program to check wethe a number is positive,negative or zero\n\n#include<stdio.h>\nint main()\n");
                printf("{\n\tint num;/* Input number from user */\n\tprintf(Enter any number: );\n\tscanf(d, &num);\n\tif(num > 0)\n\tprintf(Number is POSITIVE);\nif(num < 0)\n\tprintf(Number is NEGATIVE);");
                printf("\nif(num == 0)\n\tprintf(Number is ZERO);");
                printf("\nEnter any digit to return main menu\n");
                int f;
                scanf("%d",&f);
                main() ;

            }


     }
     else if(a==3)
     {
         system("color 8");
          printf("Write a C program to check whether a number is divisible by 5 and 11 or not using if else. How to check divisibility of any number in C programming.");
          printf("C program to enter any number and check whether it is divisible by 5 and 11 or not.");
          printf("Logic to check divisibility of a number in C program.\n");
          printf("\n\nExample--\n");
          printf("\nInput\n");
          printf("Input number: 55\n");

          printf("\nOutput\n");
          printf("Number is divisible by 5 and 11\n");

          int s;
          printf("\n\npress 1 to see the solution:  ");
          scanf("%d",&s);
          system("cls");
          if(s==1)
          {
              system("color 8");
              printf("{\n\tint num;/* Input number from user */\n\tprintf(Enter any number: );\n\tscanf(d, &num);\n\tif((num % 5 == 0) && (num % 11 == 0))\n\tprintf(Number is divisible by 5 and 11);\n\tprintf(Number is not divisible by 5 and 11);\n\n");
              printf("\nEnter any digit to return main menu\n");
              int f;
              scanf("%d",&f);
              main();
          }

     }
     else if(a==4)
     {
         system("color 8");
          printf("Write a C program to check whether a number is even or odd using if else.");
          printf("How to check whether a number is even or odd using if else in C program.");
          printf("C Program to input a number from user and check whether the given number is even or odd.");
          printf("Logic to check even and odd number using if...else in C programming.\n");
          printf("\n\nExample--\n");
          printf("\nInput\n");

          printf("Input number: 10\n");

          printf("\n\nOutput\n");

          printf("10 is even number\n");

          int s;
          printf("\n\npress 1 to see the solution:  ");
          scanf("%d",&s);
          system("cls");
          if(s==1)
          {
              system("color 8");
              printf("\n\n#include <stdio.h>\nint main()\n{\n\tint num;/* Input number from user */\n\tprintf(Enter any number to check even or odd: );/n/tscanf(d, &num);");
              printf("\n\t/* Check if the number is divisible by 2 then it is even */\n\tif(num % 2 == 0)\n\tprintf(Number is Even.);\n\telse\n\tprintf(Number is Odd.);\n\n");
              printf("\nEnter any digit to return main menu\n");
              int f;
              scanf("%d",&f);
              main();
          }

    }



}
int main()
{

   int a,regi;
   system("color 0D");
   system("cls");
   printf("\t\t\t\t\t\t\t  WELCOME!!!\n");
   printf("\t\t\t\t\t\t\t     to  \t\t\t\t\n");
   printf("\t\t\t\t\t A program developed by 'TEAM SLOW LEARNERS!!'\n\n");
   printf("\n\n\n\n\tChoose\n");
   printf("\t1.Registration\n\t2.LOG IN\n\t3.C-Learning\n\t4.Quiz\n\t5.Practice\n");
   printf("\n\n\tN.B: First you have register and then log in to your account.!!!\n\n");
   printf("\tAfter these two steps you can go to other section.\n\n");
   printf("\n\n\n\tchoose your option :  ");
   scanf("%d",&a);
   system("cls");
   if(a==1)
   {
       system("cls");
       printf("\t\t\t\t\t||Welcome to the Registration section||\n\n");
       Registration();
       ani();

   }
   else if(a==2)
   {
       log_in();
       main();
   }

   else if(a==3)
   {
       c_learning();
   }

   else if(a==4)
   {
       quiz();
   }

   else{

      practice();
   }

   while(menu()==1)
   {
       int t=turn();
       if(t==1)
       {
           c_learning();

       }
       else if(t==2)
       {
          quiz();
       }
       else if(t==3)  {
         practice();
       }
       else{
        printf("\n\nYou have exited from the program\n\n");
        break;
       }
   }


}


struct log_in{
    char First_Name[20];
    char Last_Name[20];
    char User_Name[10];
    char Password[15];
    };



void Registration()
{
    FILE*REG;
    REG=fopen("log_in12.txt","w");
    struct log_in l;
    printf("Enter your First Name : ");
    scanf("%s",l.First_Name);
    printf("Enter your Last Name : ");
    scanf("%s",l.Last_Name);
    printf("Enter your User Name : ");
    scanf("%s",l.User_Name);
    printf("Enter your PASSWORD:  ");
    scanf("%s",l.Password);
    fwrite(&l,sizeof(l),1,REG);


    fclose(REG);

    printf("\n");
    printf("Now you may LOG IN with your USER_ID & PASSWORD\n");
    printf("Now If you want to continue then press any key :  ");

    getch();
    system("cls");


    main();
   // log_in();

}
void log_in()
{
    char User_Name[10];
    char Password[15];
    FILE*REG;
    REG=fopen("log_in12.txt","r");
    struct log_in l;
    printf("User_Id: ");
    scanf("%s",User_Name);
    printf("Password : ");
    scanf("%s",Password);

    while(fread(&l,sizeof(l),1,REG));
    {
        if(strcmp(User_Name,l.User_Name)==0 && strcmp(Password,l.Password)==0)
        {
            printf("Log In is Succesful\n");
        }
        else{
            printf("Wrong UserName or Password!!!!. Please enter the correct one.\n");
        }
    }
    fclose(REG);

}


void quiz()
{

    int g;
    system("cls");
    system("color 8");
    printf("\n\t\t\t\t\t\t||QUIZ TIME||\n\n\n");
    printf("In here you can test yourself by quiz.Only 5 questions will be given.Each question carries 5 points.After answering all question you will see your result.The result will only show whether you have passed or failed.\n\n");
    printf("\n**If you want to continue then press 1.\n**If you want to go to the main menu then press 2.\n\n ");
    printf("\nchoose: ");
    scanf("%d",&g);
    system("cls");
    if(g==1)
    {
         goto q;
    }
    else if(g==2)
    {
        turn();
    }



    q:
     system("cls");


     Quiz:
        system("cls");

        int z,d;
        printf("\t\t\t\t\t|Lets Start.Good Luck|\n\n");
        printf("\n!!!First Question!!!\n");
        printf("\npress any integer value to continue:  ");
        scanf("%d",&z);
        system("cls");
        printf("\n\nWhich One is one of the key feature in C Programming Language?\n");
        printf("\nOPYIONS:\n1.Portability\n2.Singularity\n3.Decrease\n");

        printf("\nChoose Your Option : ");
        scanf("%d",&d);
        system("cls");
        if(d==1)
        {
           printf("Correct!!");
           score+=5;

        }



        else
        {
           printf("Sorry,Wrong Choice!!");
           score-=5;


        }

         printf("\n\nNow time for the Second Question\n");
         printf("\npress any integer value to continue:  ");
         scanf("%d",&z);
         system("cls");
         printf("\n\nHow may methods are there to create increment and decrement statement in C\n\n");
         printf("\nOPTIONS:\n1.One\n2.Three\n3.Two\n");
         printf("Choose Your Option : ");
         scanf("%d",&d);
         system("cls");
         if(d==3)
         {
            printf("Correct!!");
    	    score+=5;
         }
        else
        {
            printf("Sorry,Wrong Choice!!");
            score-=5;
        }



        printf("\n");
        printf("\n\nNow The Third question is coming up!!");
        printf("\npress any integer value to continue:  ");
        scanf("%d",&z);
        system("cls");
        printf("\nHow many types of loop statement are there in C?\n");

        printf("\nOPTIONS:\n1.Five\n2.Four\n3.Three\n");
        printf("Choose Your Option : ");
        scanf("%d",&d);
        system("cls");
        if(d==2)
        {
          printf("\nCorrect!!\n\n");
          score+=5;
        }


       else
       {
          printf("\n\nSorry,Wrong Choice!!\n\n");
          score-=5;
       }



       printf("\n\n4th Question ::\n");
       printf("\npress any integer value to continue:  ");
       scanf("%d",&z);
       system("cls");
       printf("\n\nhow many kinds of Array are there?\n");
       printf("\nOPTIONS:\n1.Two\n 2.Three\n 3.Four\n");
       printf("Choose your option : ");
       scanf("%d",&d);
       system("cls");

       if(d==1)
       {
          printf("Correct!!");
          score+=5;
       }

       else
       {
          printf("Sorry,Wrong Choice!!");
          score-=5;
       }


       printf("\n\n5th Question ::\n");
       printf("\npress any integer value to continue:  ");
       scanf("%d",&z);
       system("cls");
       printf("\n\nPivot is used in which sorting algorithm?\n");
       printf("\nOPTIONS:\n1.Insertion Sort\n 2.Merge Sort\n 3.Quick Sort\n");
       printf("Choose your option : ");
       scanf("%d",&d);
       system("cls");
       if(d==3)
        {
            printf("Correct!!");
            score+=5;
        }

       else
       {
            printf("Sorry,Wrong Choice!!");
            score-=5;
       }




      if(score>=5)
      {
              printf("\n\nCongrats!!you have passed!!!!!");
              printf("\nEnter any digit to return main menu\n");
              int n;
              scanf("%d",&n);
              main();
      }
      else
      {
            printf("\n\n\nSorry!!! You have Failed!!!");
            printf("\n\n\n\nEnter any digit to return main menu\n");
            int n;
            scanf("%d",&n);
            main();
      }




}
