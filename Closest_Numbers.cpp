#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[200000];
    vector<int> v;
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr + n);
    int max = INT16_MAX;
    for (int i = 1; i < n ; i++)
    {
        if (arr[i] - arr[i-1] < max)
        {
            v.clear();
            max = arr[i] - arr[i-1];
            v.push_back(arr[i-1]);
            v.push_back(arr[i]);
        }
        else if (arr[i] - arr[i-1] == max)
        {
            v.push_back(arr[i-1]);
            v.push_back(arr[i]);
        }
    }
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}