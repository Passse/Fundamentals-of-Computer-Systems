//
//  main.cpp
//  选择排序2
//
//  Created by s20181102933 on 2019/8/27.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int *p;
    int a[10];
    p=a;
    int min;
    int k=0;
    for(int i=0;i<10;i++){
        cin>>p[i];
    }
    
    for(int i=0;i<10;i++){
        min=p[i];
        for(int j=i;j<10;j++){
            if(p[j]<min){
                min=p[j];
                k=j;
            }
        }
        if(p[i]!=min){
            p[k]=p[i];
            p[i]=min;
        }
    }
    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
