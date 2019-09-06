#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node* A;

int main()
{
    int i,n;
    A L,j,s;
    L=(struct Node*)malloc(sizeof(struct Node));
    L->next=NULL;
    s=L;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d",&i);
        j=(struct Node*)malloc(sizeof(struct Node));
        j->data=i;
        s->next=j;
        s=j;
        n--;
    }
    
    struct Node* S=L->next;
    while(S){
        printf("%d",S->data);
        S=S->next;
        if(S)
            printf(" ");
    }
    
    return 0;
}
