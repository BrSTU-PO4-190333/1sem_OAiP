#include <iostream>

void OAiP_lab6_a5_for();

int main()
{
    OAiP_lab6_a5_for();

    return 0;
}

void OAiP_lab6_a5_for()
{
    std::string str_number = "";
    float number;
    float result;
    for (;1;) {
        std::cout << " number: ";
        std::cin >> str_number; // input str
        number = atof(str_number.c_str()); // str to float
        if (number == 0)
        {
            break;
        }

        result = number >= 0 ? number : -number;

        if (number > 0) {
            printf(" simple message \n");
        }

        printf(" |%f| = %f \n\n", number, result);
    }
    printf(" end infinity cycle \n");
}
