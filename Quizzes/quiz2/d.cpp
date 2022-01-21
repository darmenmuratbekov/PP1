#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a;
    cin >> a;
    vector<char>s;
    vector<char>t;
    bool  b[20000] = {0};
    for (int i =0;  i < a.size(); i++) {

          if (b[a[i]] ==0) {
              t.push_back(a[i]);
              b[a[i]]++;
          }
    }
    if (t.size() ==1) {
        cout << 0;
        return 0;
    }
     int d  = a.size();
     int ok  =true;
    for(int i =0;  i <  a.size(); i++ ){
        if(a[i] != a[d -i -1]){
            ok  = false;
            
        }
    }
    if (ok == false) {
        cout <<  d;
        return 0;
    }
    else {
        cout << d-1;
        return 0;

    }
    return 0;
}
