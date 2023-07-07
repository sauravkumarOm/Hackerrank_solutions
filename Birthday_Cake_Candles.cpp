#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int birthdayCakeCandle(vector<int> v){
    // sort(v.begin(),v.end());
    int sum = 0;
    int candle = v[v.size()-1];
    for (int i = 0; i <v.size() ; i++)
    {
        if (v[i]==candle)
        {
            sum++;
        }
        
    }
    return sum++;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int x = birthdayCakeCandle(v);
    cout<<x<<endl;
    
    return 0;
}