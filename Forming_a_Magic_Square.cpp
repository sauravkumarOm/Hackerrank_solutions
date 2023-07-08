#include<bits/stdc++.h>
using namespace std;
int main(){
    int s[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin>>s[i][j];
        }
    }
    int x = 0, y = 0, z = 0;
    for (i = 0; i < 3;)
    {
        for (j = 0; j < 3;)
        {
            if (i == j)
            {
                x += s[i][j];
                i++;
                j++;
            }
            else if (i != j)
            {
                   
            }
        }
    }
    cout<<x;
    // for (i = 0; i < 3; i++)
    // {
        
    // }
    // cout<<y<<" ";

    
    
    
    
     
    return 0;
}