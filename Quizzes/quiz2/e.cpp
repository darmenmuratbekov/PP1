#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string a;
    cin >>a;
    int b[2000] = {0};
    bool o[2000] ={0};
    vector<int> p;
    vector<int>k;
    for (int i =0;  i < a.size();  i++) {
        int x =  a[i] -'0';
        p.push_back(x);
        if (o[x] == 0) {
            k.push_back(x);
            o[x]++;

        }
        b[x]++;
    }
    sort(k.begin(), k.end());
    for (int i =0;  i < k.size(); i++ ) {
        cout <<  k[i] <<":" <<  b[k[i]]<<endl;
    }
    return 0;
}
