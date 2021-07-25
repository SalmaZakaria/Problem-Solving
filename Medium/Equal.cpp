#include <bits/stdc++.h>
using namespace std;

int Operations(int n) {
    int res = 0;
    res += n / 5;
    n %= 5;
    res += n / 2;
    n %= 2;
    res += n;
    return res;
}

int main() {
    int n, t;
    cin >> t;
    
    while (t--) {   
        cin >> n;
        long arr[n];
        long min = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        long counter = INT_MAX;
        for (int i = 0; i < 4; i++) {
            long tempCount = 0;
            for (int j = 0; j < n; j++) {
                tempCount += Operations(arr[j] - min + i);
            }
            if (tempCount < counter)
                counter = tempCount;
        }
        
        cout << counter << endl;
    }
    return 0;
}
