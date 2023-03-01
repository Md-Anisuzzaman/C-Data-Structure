#include <bits/stdc++.h>
using namespace std;

using namespace std;

int n, k;

void merge(int* a, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < n1)
        a[k++] = left[i++];
    while (j < n2)
        a[k++] = right[j++];

    // count pairs
    i = 0, j = n2 - 1;
    while (i < n1 && j >= 0) {
        if (left[i] + right[j] == k) {
            int count = count + j + 1;
            i++;
        } else if (left[i] + right[j] < k)
            i++;
        else
            j--;
    }
}

void mergeSort(int* a, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(a, 0, n - 1);
    cout << count << endl;
    return 0;
}