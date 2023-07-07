#include<bits/stdc++.h>
using namespace std;

void feast(){
    int n, c, m;
    cin>>n>>c>>m;
    int x = n/c , y = n/c;
    while (y >= m)
    {
        x = x + y/m;
        y = y%m + y/m;
    }
    cout<<x<<endl; 
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t ; i++)
    {
        feast();
    }
    return 0;
}