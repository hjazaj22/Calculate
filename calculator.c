//hedije jazaj
#include <stdio.h>
#include <math.h> // For sqrt() function

// Function to add two numbers
int add(int num1, int num2)
{
    return num1 + num2;
}

// Function to subtract two numbers
int subtract(int num1, int num2)
{
    return num1 - num2;
}

// Function to multiply two numbers
int multiply(int num1, int num2)
{
    return num1 * num2;
}

// Function to divide two numbers
float divide(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return (float)num1 / num2;
}

// Function to calculate square of a number
int square(int num)
{
    return num * num;
}

// Function to calculate square root of a number
float squareRoot(int num)
{
    if (num < 0)
    {
        printf("Error: Invalid input for square root\n");
        return 0;
    }
    return sqrt(num);
}

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Enter operator (+, -, *, /, s, r): ");
    scanf(" %c", &operator);

    int result;
    float result_float;

    switch (operator)
    {
    case '+':
        result = add(num1, num2);
        printf("Result: %d\n", result);
        break;
    case '-':
        result = subtract(num1, num2);
        printf("Result: %d\n", result);
        break;
    case '*':
        result = multiply(num1, num2);
        printf("Result: %d\n", result);
        break;
    case '/':
        result_float = divide(num1, num2);
        printf("Result: %.2f\n", result_float);
        break;
    case 's':
    case 'S':
        result = square(num1);
        printf("Result: %d\n", result);
        break;
    case 'r':
    case 'R':
        result_float = squareRoot(num1);
        printf("Result: %.2f\n", result_float);
        break;
    default:
        printf("Error: Invalid operator\n");
        break;
    }

    return 0;
}

