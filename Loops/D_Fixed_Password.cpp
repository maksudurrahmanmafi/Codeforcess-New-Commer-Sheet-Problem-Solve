#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1999;
    while (true)
    {
        int a;
        cin >> a;

        if (n == a)
        {
            cout << "Correct\n";
            return 0;
        }
        else
            cout << "Wrong\n";
    }

    return 0;
}
