#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long A[500];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    long cores, limit;
    cin >> cores >> limit;
    sort(A, A + n, greater<int>());
    long Min = 0;
    for (int i = 0; i < n; i++) {
        if (limit > 0 && A[i] % cores == 0) {
            Min += (A[i] / cores);
            limit--;
        }
        else
            Min += A[i];
    }
    cout << Min << endl;
    return 0;
}
