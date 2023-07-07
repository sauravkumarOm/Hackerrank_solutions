#include<bits/stdc++.h>
using namespace std;
#define TOP_OF_RANGE 100

void counting(vector<int> v){
    vector<int> count(TOP_OF_RANGE , 0);
    for (int i = 0; i < v.size(); i++)
    {
        count[v[i]]++; 
    }

    for (auto&a : count) {
        cout<<a<<" ";
    }
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> y;
    for (int i = 0; i < n ; i++)
    {
        int x;
        cin>>x;
        y.push_back(x);
    }
    counting(y);
    

    return 0;
}
