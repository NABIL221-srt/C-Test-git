#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("veuillez saisir votre age : \n");
    scanf("%d",&age);


    if (age >= 18)
    {
        printf("Bienvenue a l'Hotel ");
    }else {
        printf("desole vous n'etes pas eligible ");
    }
    
    return 0;
}
