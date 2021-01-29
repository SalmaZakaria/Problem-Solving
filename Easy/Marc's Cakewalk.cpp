#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A + n, greater<int>());
    long minSum = 0;
    for (int i = 0; i < n; i++) {
        minSum += pow(2, i) * A[i];
    }
    cout << minSum << endl;
    return 0;
}
