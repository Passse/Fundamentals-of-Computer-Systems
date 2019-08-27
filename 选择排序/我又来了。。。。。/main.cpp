//
//  main.cpp
//  我又来了。。。。。
//
//  Created by s20181102933 on 2019/8/27.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int i,j;
    int k=0;
    int min;
    int *p;
    p=a;
    for(i=0;i<10;i++){
            min=p[i];
        for(j=i;j<10;j++){
        if(p[j]<min){
            min=p[j];
            k=j;
        }
    }
        if(min!=p[i]){
        p[k]=p[i];
        p[i]=min;
        }
    }
    for(i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
