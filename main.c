// c calculator
#include <stdio.h>

int main()
{
    // variables to store values for operands in float value
    float num1, num2;
    // variable to store value for operation in char vlaue
    char op;
    // print a message as title of the program
    printf("C Calculator\n");
    // input a float value from the user as the first operand
    printf("Enter First Number: ");
    // store the value in 'num1' variable
    scanf("%f", &num1);
    // input a float value from the user as the second operand
    printf("Enter Second Number: ");
    // store the value in 'num2' varialbe
    scanf("%f", &num2);
    // input a character value as the operation
    printf("Enter Operation (+, -, *, /): ");
    // store the value in 'op' variable
    scanf(" %c", &op);
    // run switch case for 'op' varialbe
    switch (op)
    {
    // if the value of 'op' variable is '+'
    case '+':
        // print the sum of 'num1' and 'num2'
        printf("%f", num1 + num2);
        // exit from the switch case
        break;
    // else if the value of 'op' variable is '-'
    case '-':
        // print the difference of 'num1' and 'num2'
        printf("%f", num1 - num2);
        // exit from the switch case
        break;
    // else  if the value of 'op' variable is '*'
    case '*':
        // print the product of 'num1' and 'num2'
        printf("%f", num1 * num2);
        // exit from the switch case
        break;
    // else  if the value of 'op' variable is '/'
    case '/':
        // print the division of 'num1' and 'num2'
        printf("%f", num1 / num2);
        // exit from the switch case
        break;
    // else the value of 'op' variable does not match with any cases
    default:
        // print an error message
        printf("Invalid Operation!");
        // exit from the switch case
        break;
    }
    return 0;
}
