#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[3],b[3],a1 = 0,b1=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for (int i = 0; i < 3; i++)
    {
        if (a[i]>b[i])
        {
            a1++;
        }
        if (a[i]<b[i])
        {
            b1++;
        }    
        
    }
    printf("%d %d",a1,b1);
        
        
    return 0;
}