#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int max = 0, p;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int count = 0;
            for (int k = 0; k < m; k++)
            {
                if (v[i][k] == '1' || v[j][k] == '1')
                {
                    count++;
                }
                if (count > max)
                {
                    max = count;
                    p = 1;
                }
                else if (max == count)
                {
                    p++;
                }
            }
        }
    }
    cout<<max<<endl<<p<<endl;
    

    return 0;
}