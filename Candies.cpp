#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    long long Rating[n];
    long long Candies[n];
    for (int i = 0; i < n; i++) {
        cin >> Rating[i];
        Candies[i] = 1;
    }

    
    for (int i = 1; i < n; i++) {
        if (Rating[i] > Rating[i - 1])
            Candies[i] = Candies[i - 1] + 1;
        else
            Candies[i] = 1;
    }
    for (int i = n - 1; i > 0; i--) {        
        if (Rating[i - 1] > Rating[i] && Candies[i - 1] <= Candies[i])
            Candies[i - 1] = Candies[i] + 1;
        
    }
    long long counter = 0;
    for (int i = 0; i < n; i++) {
        counter += Candies[i];
    }
    cout << counter << endl;
    return 0;
}
