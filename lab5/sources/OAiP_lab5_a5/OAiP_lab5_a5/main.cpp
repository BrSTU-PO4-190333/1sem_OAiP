#include <iostream>

void OAiP_lab5_a5(double x);

int main()
{
    OAiP_lab5_a5(-9);
    OAiP_lab5_a5(-2.33);
    OAiP_lab5_a5(-0.0001);
    OAiP_lab5_a5(-0);
    OAiP_lab5_a5(0);
    OAiP_lab5_a5(0.0001);
    OAiP_lab5_a5(2.33);
    OAiP_lab5_a5(9);

    return 0;
}

void OAiP_lab5_a5(double x)
{
    if (x > 0)
    {
        printf(" % f > 0 \n", x);
        return;
    }

    if (x < 0) {
        printf(" % f < 0 \n", x);
        return;
    }

    printf(" % f = 0 \n", x);
}
