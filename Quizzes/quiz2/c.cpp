#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


int main() {
    vector<int>l;
    int n;
    cin >>n;
    int b[20000];
    int x;
    for (int i =0; i < n;  i++  ) {
        cin >> x;
        l.push_back(x);
        b[x]++;
    }
    int max =  l[0];
    for (int i =0;  i < l.size();  i++) {
        if(max  < l[i]) {
         max  = l[i];

        }
    }
    int maxi =  b[0];
    for (int i =0; i <= 10000; i++ ) {
        if(maxi < b[i]) {
            maxi = b[i];
        }
    }
    for (int i = max; i >=0; i--) {
           if (maxi == b[i]) {
               cout << i << " ";
           }
    }
    return 0;
}
