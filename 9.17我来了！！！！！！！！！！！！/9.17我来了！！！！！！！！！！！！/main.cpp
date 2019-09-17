#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node* N;

int Length(N K);
void FindKth(N O,int P);

int main()
{
    int i,L,l,o;
    scanf("%d",&o);
    N J,j,head;
    J=(struct Node*)malloc(sizeof(struct Node));
    J->next=NULL;
    head=J;
    while(1)
    {
        scanf("%d",&i);
        if(i<0) break;
        j=(struct Node*)malloc(sizeof(struct Node));
        j->data=i;
        J->next=j;
        j->next=NULL;
        J=j;
    }
    L=Length(head);
    l=L-o+1;
    FindKth(head,l);
    return 0;
}

int Length(N K)
{
    N p;
    int cnt=0;
    p=K;
    while(p->next)
    {
        p=p->next;
        cnt++;
    }
    return cnt;
}

void FindKth(N O,int P)
{
    if(P<=0){
        printf("NULL");
    }
    else{
        N u;
        int cnt=0;
        u=O;
        while(u&&cnt<P)
        {
            u=u->next;
            cnt++;
        }
        printf("%d",u->data);
    }
}
