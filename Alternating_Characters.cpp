#include<bits/stdc++.h>
using namespace std;

void altenating(){
    string s;
    cin>>s;
    int count = 0, ans = 0;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (i == 0 || s[i] == s[i-1])
        {
            count++;
        }
        else{
            if (count > 1)
            {
                ans += count - 1;
            }
            count = 1;
        }
        
    }
    if (count > 1)
    {
        ans += count - 1;
    }
    cout<<ans;
    
    
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        altenating();
        cout<<endl;
    }
    

    return 0;
}