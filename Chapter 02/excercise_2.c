/**
 *  Declare an array of three pointers to functions and invoke the appropriate
 *  function based on an index value passed in as an argument.
 */
#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);

typedef int (*fptrOperation)(int, int);
int compute(fptrOperation operation, int num1, int num2);
fptrOperation select(int n);
int evaluate(int f_index, int num1, int num2);

// Array of pointers to functions.
int (*fnptr[])(int, int) = {&add, &sub, &mul};

int main(void)
{
    int num1 = 5;
    int num2 = 5;
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", evaluate(i, num1, num2));
    }
    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int compute(fptrOperation operation, int num1, int num2)
{
    return operation(num1, num2);
}

fptrOperation select(int n)
{
    return fnptr[n];
}

int evaluate(int f_index, int num1, int num2)
{
    return compute(select(f_index), num1, num2);
}
