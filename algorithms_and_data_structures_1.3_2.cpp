#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    vector<int> A(n,0);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    cin >> n;
    vector<int> B(n,0);
    for(int i = 0; i < n; i++)
        cin >> B[i];

    return 0;
}