#include <iostream>
using namespace std;
bool opp(int i) {
    for (int l =2; l < i; l++) {
        if (i  % l == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    long long a;
    cin >> a;
    for (int i=2;  i  <= a;  i++) {
        if (opp(i) == 1) {
            long long x  = i;
            for(int j   = a ;  3 <=j; j--) {
                if (opp(j) == 1 && x  + j == a) {
                    cout <<  x <<" "<< j;
                    return 0;
                }
            }
        }
    }
    return 0;
}
