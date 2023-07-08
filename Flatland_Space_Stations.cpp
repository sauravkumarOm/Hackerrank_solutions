#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size() ; i++)
    {
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    int max = 0;
    for (int i = 0; i <= v[0]; i++)
    {
        max = std::max(max , v[0]);
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = v[i]; j < v[i+1]; j++)
        {
            max = std::max(max , min(j - v[i] , v[i+1] - j));
        }
    }
    for (int i = v[m-1]; i < n ; i++)
    {
        max = std::max(max , i - v[m-1]);
    }
    cout<<max;  

    return 0;
}