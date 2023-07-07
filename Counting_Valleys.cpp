#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sea = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            sea--;
        }
        else if (s[i] == 'U')
        {
            sea++;
        }
        if (s[i] == 'U' && sea == 0)
        {
            count++;
        }
        
    }
    cout<<count;

    return 0;
}