#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
 
    vector<int> a(n);
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
 
    int i = 1;
    while (i < t) {
        i += a[i];
    }
 
    cout << (i == t ? "YES" : "NO") << endl;
}