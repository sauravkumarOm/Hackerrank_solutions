#include<bits/stdc++.h>
using namespace std;
int main(){
    int t , i;
    int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int h = 1;
        // int period = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                h++;
            }
            else{
                h *= 2;
            }
        
        }
        cout<<h<<endl;
    }
    
    
    
       
    
 
    return 0;
}