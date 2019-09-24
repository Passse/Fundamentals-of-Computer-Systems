#include<stdio.h>

int main()
{
//    int p;
//    int *i;
//    i=&p;
//    p = 100;
//    printf("%d\n",p);
//    printf("%x\n",i);
//    printf("%x\n",&i);
    int i = 2,ii = 3;
    int *p1 = &i;
    int *p2 = p1;
    printf("i = %p   ii = %p\n",&i,&ii);
    printf("%p\n",p1);
    printf("%p\n",p2);
    int *p3 = p1;
    p3 = &ii;
    *p3 = 5;
    printf("%d %d\n",*p3,ii);
    printf("%p %p\n",p3,&ii);
    return 0;
}
