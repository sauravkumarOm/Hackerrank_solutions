#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    bool a[32][32];
    a[0][0] = false;
    a[0][1] = false;
    a[0][2] = true;
    a[1][0] = false;
    a[1][1] = false;
    a[2][0] = true;
    for (int i = 3; i < 32; i++)
    {
        int r = i;
        for (int j = 0; j <= i; j++)
        {
            if (r - 2 >= 0 && j + 1 < 15 && a[r - 2][j + 1] == false)
            {
                a[r][j] = true;
            }
            else if (r - 2 >= 0 && j - 1 >= 0 && a[r - 2][j - 1] == false)
            {
                a[r][j] = true;
            }
            else if (r + 1 < 15 && j - 2 >= 0 && a[r + 1][j - 2] == false)
            {
                a[r][j] = true;
            }
            else if (r - 1 >= 0 && j - 2 >= 0 && a[r - 1][j - 2] == false)
            {
                a[r][j] = true;
            }
            else
            {
                a[r][j] = false;
            }
            r--;
        }
    }
    while (t > 0)
    {
        int x, y;
        cin >> x >> y;
        if (a[x - 1][y - 1])
        {
            cout << "First";
            cout << endl;
        }
        else
        {
            cout << "Second";
            cout << endl;
        }
        t--;
    }
    return 0;
}