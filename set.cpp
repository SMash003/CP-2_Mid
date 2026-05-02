#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
}

// i/p -> 5
//        5 3 5 2 3
// O/P -> 2 3 5