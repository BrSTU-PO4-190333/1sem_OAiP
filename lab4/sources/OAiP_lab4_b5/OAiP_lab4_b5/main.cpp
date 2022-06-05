#include <iostream>

void OAiP_lab4_b5(double x, double y);
void print_operation(double x, double y, char operation, double result);

int main()
{
    OAiP_lab4_b5(1, 2);
}

void OAiP_lab4_b5(double x, double y)
{
    double result;

    result = x + y;
    print_operation(x, y, '+', result);

    result = x - y;
    print_operation(x, y, '-', result);

    result = x * y;
    print_operation(x, y, '*', result);

    result = x / y;
    print_operation(x, y, '/', result);
}

void print_operation(double x, double y, char operation, double result)
{
    printf(" x %c y = % .2f %c % .2f = % .2f \n", operation, x, operation, y, result);
}
