#include<stdio.h>

int main(int argc, char const *argv[])
{
    char line[100];
    printf("Enter a line or a string :");
    fgets(line,100,stdin);
    printf("Line: %s\n",line);
    return 0;
}
