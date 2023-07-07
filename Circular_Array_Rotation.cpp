#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , t ,q;
    cin>>n>>t>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    t %= n;
    for (int i = 0; i < q; i++)
    {
        int b;
        cin>>b;
        cout<<arr[(n-t+b)%n]<<endl;
    }
    
    
    
    return 0;
}