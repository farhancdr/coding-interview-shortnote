#include "bits/stdc++.h"
using namespace std;

void insertion_sort(int* a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
    vector<int> a = { 34, 21, 45, 67, 23, 8, 12, 5, 40 };
    insertion_sort(a.data(), a.size());
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;

}