#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    cin >> x; 

    auto it = lower_bound(v.begin(), v.end(), x); //Find the first element in the vector that is ≥ x

    //for upper bound -> auto it = upper_bound(...) the first element in v that is strictly greater than x

    if (it != v.end())
        cout << "Index: " << (it - v.begin());
    else
        cout << "No element >= x";
}