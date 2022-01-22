#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    int t = 0;

    set<int> darmen;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        darmen.insert(r);
        t++;
    }
    if (darmen.size() == t) {
        cout <<  "YES";
    }

        

    else {
        cout <<  "NO";
    }

    return 0;
}
