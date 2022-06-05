#include <iostream>
#include <cmath>

void OAiP_lab4_a5(double x, double y, double z);

int main()
{
    OAiP_lab4_a5(-15.246, 4.642e-2, 20.001e2);
    return 0;
}

void OAiP_lab4_a5(double x, double y, double z)
{
    double s1 = y / 2;
    double s2 = x - s1;
    double s3 = fabs(x);
    double s4 = -sqrt(s3);
    double s5 = pow(y, s4);
    double s6 = log(s5);
    double s7 = s6 * s2;
    double s8 = atan(z);
    double s9 = sin(s8);
    double s10 = pow(s9, 2);
    double a = s7 + s10;
    std::cout << a << std::endl;
}
