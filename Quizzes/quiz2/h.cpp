#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<char>l;
    vector<char>k;
    char f;
    cin >> f;
    string t;
    cin >>t;
    for (int i =0;  i < t.size(); i++) {
             l.push_back(t[i]);
    }
    for (int  i=0;  i < l.size(); i++){
        if (f !=  l[i]) {
            k.push_back(l[i]);
        }
    }
    for (int i =0; i < k.size(); i++) {
        cout <<k[i];
    }
    return 0;
}
