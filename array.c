#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tableau[5] = {4, 99, 55, 333, 3221};

    for (int i = 0; i < 5; i++)
    {
        printf("this is my array ");
        printf("%d\n", tableau[i]);
    }
    
    return 0;
}
