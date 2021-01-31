#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> V;   
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int L, T;
        cin >> L;
        cin >> T;           
        if (T == 0)
            sum += L;
        else
            V.push_back(L);
    }
    sort(V.rbegin(), V.rend());
    for (int i = 0; i < V.size(); i++)
    {
        if (k > 0) {
            sum += V[i];
            k--;
        }
        else
            sum -= V[i];
    }
    cout << sum << endl;
    return 0;
}
