#include<stdio.h>
#include<stdlib.h>
typedef int Position;
typedef struct SNode*PtrToSNode;
struct SNode{
    int *Data;
    Position Top;
    int MaxSize;
};

typedef PtrToSNode Stack;
int main()
{
    int x;
    bool IsFull(Stack S);
    bool Push(Stack S, int x);
    bool IsEmpty(Stack S);
    int Pop(Stack S);
    Stack CreateStack(int MaxSize);
}

Stack CreateStack(int MaxSize)
{
    Stack S=(Stack)malloc(sizeof(struct SNode));
    S->Data=(int*)malloc(MaxSize*sizeof(int));
    S->Top=-1;
    S->MaxSize=10;
    return S;
}

bool IsFull(Stack S)
{
    return (S->Top==S->MaxSize-1);
}
bool Push(Stack S, int x)
{
    if(IsFull(S))
    {
        printf("ddd");
    }
    else{
        S->Data[++(S->Top)]=x          ;
        return true;
    }
}

bool IsEmpty(Stack S)
{
    return(S->Top==-1);
}
int Pop(Stack S)
{
    if(IsEmpty(S))
    {
        printf("ddd");
        return ERROR;
    }
    else{
        return(S->Data[(S->Top)--]);
    }
}
