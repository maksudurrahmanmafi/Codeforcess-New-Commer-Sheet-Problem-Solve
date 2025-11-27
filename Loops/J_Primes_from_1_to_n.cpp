#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
 
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for(int i =1; i<=n;i++){
        if (isPrime(i)) {
            cout << i << " ";
        } 
    }
    
 
    return 0;
}