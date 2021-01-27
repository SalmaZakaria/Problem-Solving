#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long A[n];
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        
    }
    sort(A, A + n);
    long min = A[n - 1];
    for (int i = 0; i <= n - k; i++)
    {        
        if (A[k + i - 1] - A[i] < min)
            min = A[k + i - 1] - A[i];
    }
    cout << min << endl;
    return 0;
}
