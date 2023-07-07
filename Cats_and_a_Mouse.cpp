#include<bits/stdc++.h>

using namespace std;

string catAndMouse(int x , int y , int z){
    int p = abs(x-z);
    int q = abs(y-z);
    int r = abs(x-y-z);
    if (p>q)
    {
        if (p>r)
        {
            return "Cat A";
        }
        else{
            return "Mouse C";
        }
    }
    
    else if (q>p)
    {
        if (q>r)
        {
            return "Cat A";
        }
        else{
            return "Mouse C";
        }
    }
    return 0;
    
}


int main(){
    int x , y , z;
    cin>>x>>y>>z;
    string result = catAndMouse(x,y,z);
    cout<<result;
    
    return 0;
}