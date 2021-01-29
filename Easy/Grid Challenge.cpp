#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char A[n][n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            sort(s.begin(), s.end());          
            strcpy(A[i], s.c_str());
        }
        bool flag = true;
        for (int x = 0; x < n; x++)
        {
            for (int y = 1; y < n; y++)
            {
                if (A[y][x] < A[y - 1][x]) {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                break;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
