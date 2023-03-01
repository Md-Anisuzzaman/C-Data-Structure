#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n1, n2, j;

    cin >> n1;

    vector<int> arr_one(n1);

    for (i = 0; i < n1; i++)
    {
        cin >> arr_one[i];
    }

    cin >> n2;

    vector<int> arr_two(n2);

    for (i = 0; i < n2; i++)
    {
        cin >> arr_two[i];
    }
    int count = 0;

    for (i = 0; i < arr_one.size(); i++)
    {
        for (j = 0; j < arr_two.size(); j++)
        {
            if (arr_one[i] == arr_two[j])
            {
                count++;
            }
        }
    }

    if (count == arr_one.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
};



// #include <algorithm>
// #include <iostream>
// #include <vector>

// bool isSubset(std::vector<int> a, std::vector<int> b) {
//     std::sort(a.begin(), a.end());
//     std::sort(b.begin(), b.end());
//     for (int i : a) {
//         if (!std::binary_search(b.begin(), b.end(), i)) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     std::vector<int> a = {1, 2, 9};
//     std::vector<int> b = {1, 2, 3, 4, 5};
//     std::cout << isSubset(a, b) << std::endl; // prints 1 (true)
//     return 0;
// }