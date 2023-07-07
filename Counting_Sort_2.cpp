#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr;
    cin>>n;
    vector<int> v(100);
    for (int i = 0; i < n ; i++)
    {
        cin>>arr;
        v[arr]++;
    }
    for (int i = 0; i < 100 ; i++)
    {
        while (v[i] > 0)
        {
            cout<<i<<" ";
            v[arr]--;
        }
        
    }
    

    return 0;
}