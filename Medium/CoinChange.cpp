#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


int main() {

    int m;
    cin >> m;
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    long Arr[m + 1];
    memset(Arr, 0, sizeof(Arr));
    Arr[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = A[i]; j <= m; j++) {
            Arr[j] += Arr[j - A[i]];
        } 
    }
    cout<<Arr[m];
    return 0;
}
