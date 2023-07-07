#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    long long int ar[n] , sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        sum = sum+ar[i];
    }
    printf("%lld" , sum) ;     
    return 0;
}