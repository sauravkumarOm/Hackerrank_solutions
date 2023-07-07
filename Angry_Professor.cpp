#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k;
    // cout<<n<<" "<<k<<endl;
    string s;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        // cout<<ar[i]<<" ";
    }
    // cout<<endl;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] <= 0)
        {
            p++;
        }
        
         
    }
    if (p >= k)
    {
        s = "NO";
        cout<<s;
    }
    else{
        s = "YES";
        cout<<s;
    }
    cout<<endl;
    
       
    
}

int main(){
    int t;
    cin>>t;
    // cout<<t<<endl;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    

    return 0;
}