#include <iostream>

void OAiP_lab6_b5(double a, double b, double h = 0.2);

int main()
{
    OAiP_lab6_b5(1, 2);

    return 0;
}

void OAiP_lab6_b5(double a, double b, double h)
{
    double x = a;
    double f;
    do
    {
        if (x >= b)
        {
            printf(" break \n");
            break;
        }

        if (x == a + 2 * h)
        {
            x += 0.2;
            printf(" continue \n");
            continue;
        }

        f = cos(x) * exp(-x);
        printf(" f(% f) = % f \n", x, f);

        x += 0.2;
    } while (1);
}
