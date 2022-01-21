#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string s;
    cin >>s;
    vector<char> a;
    vector<char>b;
    vector<string>d;
    for (int i =0; i <  s.size();  i++) {
        a.push_back(s[i]);
    }
    int c[2000] = {0};
    for (int i=0;  i <a.size(); i++) {
        if (c[a[i]] >= 1) {
            b.push_back(a[i]);
        }
        c[a[i]]++;
    }
    for (int  i =0;  i < b.size(); i++) {
        cout <<b[i];
    }
    return 0;
}
