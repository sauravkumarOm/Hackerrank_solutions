#include <bits/stdc++.h>
using namespace std;

void funny()
{
    string s, r;
    cin >> s;
    bool funny = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        int t;
        t = s.size() - i - 1;
        if (abs(s[t] - s[t - 1]) != abs(s[i] - s[i + 1]))
        {
            cout << "Not Funny ";
            funny = false;
            break;
        }
    }
    cout << endl;
    if (funny)
    {
        cout << "Funny ";
    }
}

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        funny();
    }

    return 0;
}