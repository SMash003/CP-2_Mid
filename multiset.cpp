#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> ms;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
}

//  i/p -> 5
//         5 3 5 2 3
//  O/P ->
//         2 3 3 5 5