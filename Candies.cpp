#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long r[n], candies[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
        candies[i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (r[i] > r[i-1] )
        {
            candies[i] = candies[i-1] + 1;
        }
    }
    for (int i = n-1; i >= 0 ; i--)
    {
        if (r[i] > r[i+1])
        {
            if (candies[i] < candies[i+1] + 1)
            {
                candies[i] = candies[i+1] + 1;
            }
            
        }
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += candies[i];
    }
    cout<<ans;
    
    
    

    return 0;
}