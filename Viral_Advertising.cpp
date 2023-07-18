#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,recipient = 5 , cumilative = 2 , liked = 2;
    cin>>n;
    // cout<<recipient<<" ";
    for (int i = 1; i < n; i++)
    {
        recipient = (recipient/2) * 3;
        // cout<<recipient<<" ";
    }
    // cout<<liked<<" ";
    // cout<<cumilative+liked<<" ";
    for (int i = 1; i < n; i++)
    {
        liked = liked + liked/2;
        // cout<<liked<<" ";
        cumilative = liked + cumilative;

    }
    cout<<cumilative<<" ";
    return 0;
}