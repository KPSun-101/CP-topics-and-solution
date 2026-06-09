#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if(x < 2) return false;
    for(long long i = 2; i*i <= x; ++i) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        long long root = sqrt(a[i]);
        if(root * root == a[i] && isPrime(root))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
