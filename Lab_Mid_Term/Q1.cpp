/* Write a program to reverse an array */
// ios::sync_with_stdio(0);
//     cin.tie(0);
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int j = arr.size()-1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    return 0;
}