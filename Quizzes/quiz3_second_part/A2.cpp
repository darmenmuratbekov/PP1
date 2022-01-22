#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main() {
    int x;
    cin >>x;
    vector<int >k;
    vector<int> z;
    vector<int >m;
    for(int i =0;  i < x;  i++) {
        int xx;
        cin >>  xx;
        k.push_back(xx);
    }  
    int f;
    cin >>f;      
    for (int j =0; j < f;  j++  ) {
          int zz;
          cin >>  zz;
          z.push_back(zz);
    }
    int cnt =0;
    for (int j =0; j < z.size(); j++) {
        int xxx = z[j];
        for (int i =0;  i < k.size();  i++) {
            if (z[j] ==  k[i]) {
                cnt++;
            }
        }
        m.push_back(cnt);
        cnt=0;
    }
    cout  <<endl;
    for (int i =0;  i <  m.size();  i++) {
        cout << m[i]<<endl;
    }
    return 0;
}
        
