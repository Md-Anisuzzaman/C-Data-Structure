#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> prev_idx;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (prev_idx.count(str) == 0) {
            cout << "-1" << endl;
        } else {
            int index = prev_idx[str];
            cout << index << endl;
        }

        prev_idx[str] = i;
        v.push_back(str);
    }

    return 0;
}
