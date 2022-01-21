#include <iostream>
using namespace std;


int main() {
    int a,b,d;
    cin >>  a >>b>>d;
    long c[a][b];
    for (int i =1;  i <= a; i++) {
        for (int j = 1;  j <= b; j++  ) {
            cin >>  c[i][j];
        }
    }
    int cnt =0;
    for (int i =1; i <=a; i++) {
        for (int j =1; j <= b;  j++) {
            if(c[i][j] == d) {
                cnt++;
                break;
            }
        }
    }
    cout <<  cnt;
    return 0;
}
