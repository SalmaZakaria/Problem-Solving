#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() <<endl;
    cout << a + b <<endl;
    char s = b[0];
    b[0] = a[0];
    a[0] = s;
    cout << a << " " << b << endl;
    return 0;
}
