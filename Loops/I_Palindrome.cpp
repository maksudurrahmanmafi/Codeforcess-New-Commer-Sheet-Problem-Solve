#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string str = s;
    reverse(s.begin(), s.end());
    // leading zero বাদ দেওয়া
    int i = 0;
    while (i < s.size() && s[i] == '0')
    {
        i++;
    }
    string reversed = s.substr(i);
 
    // Output 1st line: reversed number without leading zero
    cout << reversed << endl;
    if (s == str)
    {
        cout<< "YES";
    }
    else
        cout << "NO";
 
    return 0;
}
