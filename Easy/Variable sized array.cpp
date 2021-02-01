#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x; int k;
    cin >> x >> k;
    int y;
    int** ptr = new int* [k];            
        for (int i = 0; i < k; i++) {
            cin >> y;
            ptr[i] = new int[y];
            for (int j = 0; j < y; j++) {
                cin >> ptr[i][j];
            }
        }     
    while (x--) {
        int t; 
        cin >> t;
        int index;
        cin >> index;
        cout << ptr[t][index] << endl;
    }
    return 0;
}
