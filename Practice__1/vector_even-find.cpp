#include <bits/stdc++.h>
using namespace std;
vector<int> even_generator(vector<int> &arr)
{
    vector<int> even;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
    }

    return even;
}
int main()
{
    int i, j;

    vector<int> arr = {2, 8, 13, 17, 10};

    vector<int> allEven = even_generator(arr);

    for (i = 0; i < allEven.size(); i++)
    {

        cout << allEven[i] << " ";
    }

    return 0;
};
