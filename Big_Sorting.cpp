#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n ; i++)
    {
        cin>>arr;
        v[arr]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        while (v[i] > 0)
        {
            cout<<v[i]<<endl;
            v[i]--;
        }
        
    } 

    return 0;
}