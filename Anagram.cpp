#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[26];
        int count = 0;
        if (s.size() % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        for (int j = 0; j < 26; j++)
        {
            a[j] = 0;
        }
        for (int k = 0; k < s.size(); k++)
        {
            int x = abs(s[k] - 'a');
            if (k < s.size() / 2)
            {
                a[x]++;
            }
            else
            {
                a[x] = std::max((a[x] - 1), 0);
            }
        }
        for (int y = 0; y < 26; y++)
        {
            count += a[y];
        }
        cout << count;
        cout << endl;
    }

    return 0;
}