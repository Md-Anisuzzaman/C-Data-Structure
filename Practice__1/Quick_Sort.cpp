#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &arr)
{
    int i;

    if (arr.size() <= 1)
    {
        return arr;
    }

    int pivot = rand() % (arr.size());

    vector<int> left, right;
    for (i = 0; i < arr.size(); i++)
    {
        if (i == pivot)
            continue;
        if (arr[i] >= arr[pivot])
        {
            left.push_back(arr[i]);
        }
        else
        {
            right.push_back(arr[i]);
        }
    }

    vector<int> Sorted_Left_Side = quick_sort(left);
    vector<int> Sorted_Right_Side = quick_sort(right);
    vector<int> Sorted_Main_Array;

    for (i = 0; i < Sorted_Left_Side.size(); i++)
    {
        Sorted_Main_Array.push_back(Sorted_Left_Side[i]);
    }

    Sorted_Main_Array.push_back(arr[pivot]);

    for (i = 0; i < Sorted_Right_Side.size(); i++)
    {
        Sorted_Main_Array.push_back(Sorted_Right_Side[i]);
    }

    return Sorted_Main_Array;
}

int main()
{
    int i,n;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> Sorted_Main_Array = quick_sort(arr);

    for (i = 0; i < Sorted_Main_Array.size(); i++)
    {
        cout << Sorted_Main_Array[i] << " ";
    }

    return 0;
};
