#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int remainder;
    int r = 0;
    while (x != 0)
    {
        remainder = x % 10;
        r = r*10 + remainder;
        x /=10;
    }
    return r;
    
}

int main(){
    int i , j , k;
    cin>>i>>j>>k;
    int count = 0;
    for (int y = i; y <= j; y++)
    {
        int difference = abs(y - reverse(y));
        if (difference % k == 0)
        {
            count++;
        }  
    }
    cout<<count;
    
    
    
    return 0;
}