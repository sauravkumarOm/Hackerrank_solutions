#include<bits/stdc++.h>

using namespace std;

void appleAndOrange(int a,int b,int s,int t,vector<int> apple,vector<int> orange){
    int app , org;
    app = org = 0;
    for (int i = 0; i < apple.size() ; i++)
    {
        int apl= apple[i] + a;
        if (apl>=s && apl<=t)
        {
            app++; 
        }   
    }
    for (int i = 0; i < orange.size(); i++)
    {
         int o = orange[i] + b;
        if (o >=s && o <=t)
        {
            org++;
        }
        
    }
    cout<<app<<endl<<org<<endl;

    
}

int main(){
    int s,t;
    int a,b;
    int m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector<int> apple;
    vector<int> orange;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        apple.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        orange.push_back(y);
    }
    appleAndOrange(a,b,s,t,apple,orange);
    
    return 0;
}