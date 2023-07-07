#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    // cout<<n<<" "<<m;
    int a[n],b[m];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        // cout<<a[i]<<" ";  
 
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        // cout<<b[i]<<" ";
    }
    for (int x = 1; x <= 100; x++)
    {
        int p =1;
        for (int i = 0; i < n; i++)
        {
            if (x%a[i]!=0)            // for finding the small quantity of value you should remove all unnassary values
            {
               p=0;
            } 
        }
        for (int j = 0; j < m; j++)
        {
            if (b[j]%x!=0)
            {
                p=0;
            }  
        }
        if (p==1)
        {
            sum++;
        } 
    }
    cout<<sum;
    return 0;
}
    
    
    // int y = b[0];
    
    // for (int i = 0; i < n; i++)
    // {
    //     a[0] = a[0]*a[i];
    //     if (a[0]%a[i] == 0)
    //     {
    //         sum++;
    //         cout<<sum<<" "<<endl;
            
    //     }  
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     b[0] = b[0]*b[i];
    //     if (b[0]%b[i]==0)
    //     {
    //         sum++;
    //         cout<<sum<<" ";
    //     }
        
    // }
    
    
    
    
    
    
    