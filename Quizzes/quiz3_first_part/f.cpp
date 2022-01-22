#include <bits/stdc++.h>
using namespace std;

void PrimeFac(int n){
    for(int i = 2; n >= 2;){
        if(n % i == 0){
            cout << i << " "; //2 2
            n =  n / i;  // 6  
        }
        else i++;
        if(n < 2) exit(0);
    }
}

int main(){
    int n;
    cin >> n;
    PrimeFac(n);
}
