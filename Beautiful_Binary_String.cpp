#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int x = 0;
    while (x < s.size())
    {
        if (s[x] == '0' && s[x + 1] == '1' && s[x + 2] == '0')
        {
            count++;
            x += 3;
        }
        else
        {
            x += 1;
        }
    }

    cout << count;

    return 0;
}