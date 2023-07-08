#include <bits/stdc++.h>
using namespace std;

void bits()
{
    int n;
    cin >> n;
    cout << 4294967295 - n;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bits();
        cout << endl;
    }

    return 0;
}