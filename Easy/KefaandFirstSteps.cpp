#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n;
    cin >> n;
    int A[1000];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int count = 1, maximum = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] >= A[i - 1]) {
            count++;
            maximum = max(count, maximum);
        }
        else
            count = 1;
    }
    cout << maximum << endl;
    return 0;
}