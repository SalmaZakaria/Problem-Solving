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
    long widget;
    cin >> widget;
    sort(A, A + n);
    long order = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] <= widget) {
            order++;
            widget -= A[i];
        }
    }
    cout << order << endl;
    return 0;
}
