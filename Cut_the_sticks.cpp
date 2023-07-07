#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    } 
    sort(v.begin(), v.end());
    int m ;
    m = n;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i-1])
        {
            m -= count;
            cout<<m<<endl;
            count = 1;
        }
        else{
            count++;
        }
           
    }
    if (n==1)
    {
        cout<<"1";
    }
    
    
    
    
     
    

    return 0;
}