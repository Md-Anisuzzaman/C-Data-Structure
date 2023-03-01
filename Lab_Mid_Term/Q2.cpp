#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     set<int> sorted;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//         sorted.insert(arr[i]);
//     }

//     for (int i : sorted)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int unique = arr[0];
    cout << unique << " ";
    for (int i = 1; i < n; i++)
    {
        if (unique != arr[i])
        {
            unique = arr[i];
            cout << unique << " ";
        }
    }
    return 0;
}