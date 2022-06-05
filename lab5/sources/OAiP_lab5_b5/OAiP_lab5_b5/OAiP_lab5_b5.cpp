#include <iostream>

void OAiP_lab5_b5(int number);

int main()
{
    OAiP_lab5_b5(9);
    OAiP_lab5_b5(-9);
    OAiP_lab5_b5(6);
    OAiP_lab5_b5(4);
    OAiP_lab5_b5(5);
    OAiP_lab5_b5(2);
    OAiP_lab5_b5(10);
}

void OAiP_lab5_b5(int number)
{
    switch (number)
    {
    case 0: printf("'%c' => case %d \n", 'G', number); break;
    case 1: printf("'%c' => case %d \n", 'U', number); break;
    case 2: printf("'%c' => case %d \n", 'N', number); break;
    case 3: printf("'%c' => case %d \n", 'P', number); break;
    case 4: printf("'%c' => case %d \n", 'O', number); break;
    case 5: printf("'%c' => case %d \n", 'W', number); break;
    case 6: printf("'%c' => case %d \n", 'D', number); break;
    case 7: printf("'%c' => case %d \n", 'E', number); break;
    case 8: printf("'%c' => case %d \n", 'R', number); break;
    case 9: printf("'%c' => case %d \n", 'Y', number); break;
    default: printf("'%c' => default \n", '-', number); break;
    }
}
