#include <bits/stdc++.h>
using namespace std;

int main() {
    int target;
    cin >> target;

    int left = 0, right = target;
    int ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (mid * mid >= target)//(whose square ≥ target)
        {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
}