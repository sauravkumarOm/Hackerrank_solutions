#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int bill[n];
    int x ,y, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>bill[i];
        sum += bill[i];  
    }
    int b ;
    cin>>b;
    x = sum - bill[k];
    y = x/2;
    if (bill[k] && y!= b)
    {  
        cout<<b - y;
    }
    else if ( y==b)
    {
        cout<<"Bon Appetit";
    }
    // cout<<s;
    
    
    
    

    return 0;
}