#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
    char **ans = new char *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new char[n];
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = grid[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] > grid[i - 1][j] && grid[i][j] > grid[i + 1][j] && grid[i][j] > grid[i][j - 1] && grid[i][j] > grid[i][j + 1])
            {
                ans[i][j] = 'X';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}