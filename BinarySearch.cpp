#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    cin >> target;

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (v[mid] == target) {
            cout << "Found at index: " << mid;
            return 0;
        }
        else if (v[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    cout << "Not found";
}