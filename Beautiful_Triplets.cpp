#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if ((v[j] - v[i]) == d)
            {
                for (int k = i + 1; k < n; k++)
                {
                    if ((v[k] - v[j]) == d)
                    {
                        count++;
                        break;
                    }
                    
                }
                break;
            }
            
        }
        
        
    }
    cout<<count<<endl;
    
    
    

    return 0;
}