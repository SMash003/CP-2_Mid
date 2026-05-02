#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }
}

//  i/p -> 5
//         1 2 2 3 1
//  O/P ->
//          1 -> 2
//          2 -> 2
//          3 -> 1