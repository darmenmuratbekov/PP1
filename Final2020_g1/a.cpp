#include <iostream>
#include <map>

using namespace std;

int main(){

    int a[] = {1, 2, 5, 10, 20, 50, 100};

    map<int, int> d;
    int k, c, t;

    for(int i = 0; i < 7; ++i){
        cin >> k;
        d.insert(make_pair(a[i], k));
    }


  //  d["key"] = "value"
    
     //d.insert(make_pair("key","value"));

    int n;
    cin >> n;

    for(int j = 0; j < n; ++j){
        cin >> t;
        map<int, int> d_copy = d;

        for(int i = 6; i >= 0; --i){
            c = a[i];
            while(t >= c && d_copy[c] > 0){
                t =  t - c;
                d_copy[c]--;
            }
        }

        if(t == 0){
            d = d_copy;
            cout << "Transaction accepted!" << endl;
        }else{
            cout << "Transaction stopped!" << endl;   
        }
    }
    

    return 0;
}
