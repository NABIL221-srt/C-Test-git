#include<stdio.h>

int main(int argc, char const *argv[])
{
    char line[200];
FILE * hand;
hand=fopen("file.txt","r");
while (fgets(line,200,hand) != NULL)
{
    printf("%s",line);
}


    return 0;
}
