#include<bits/stdc++.h>

using namespace std;         

void btb(vector<int> v){
    int min = v[0];
    int max = v[0];
    int sum = 0;
    int add = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (min<v[i])
        {
            sum++;
            min = v[i];
        }
        if (max>v[i])
        {
            add++;
            max = v[i];
        }  
        
    }
    cout<<sum<<" "<<add;
    
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    btb(v);
    

    return 0;
}