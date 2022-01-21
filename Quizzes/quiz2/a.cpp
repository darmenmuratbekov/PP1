#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;
    vector<int>l;
    for (int i =0; i < n;  i++  ) {
        cin >> x;
        l.push_back(x);
    }
    sort(l.begin(),  l.end());
    int cnt =0;

    for (int i =l[0];  i <=l[l.size()-1]; i++) {
        cnt++;
    }
    
    int w  =  cnt -  l.size();
    cout << w;
    return 0;
}
