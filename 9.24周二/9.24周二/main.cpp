#include<stdio.h>

int main()
{
    int p;
    int *i;
    i=&p;
    p = 100;
    printf("%d\n",p);
    printf("%x\n",i);
    printf("%x\n",&i);
}
