#include <bits/stdc++.h>
using namespace std;


string is_palindrome(string word) {
    if (word.length() <= 1) {
        return "Yes";
    }
    else if (word.front() != word.back()) {
        return "No";
    }
    else {
        word = word.substr(1, word.length() - 2);
        return is_palindrome(word);
    }
}

int main() {
    string word;
    cin >> word;
    cout << is_palindrome(word) << endl;
    return 0;
}