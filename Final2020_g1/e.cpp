#include <iostream> 
#include <vector> 
#include <algorithm>
#include <map> 
using namespace std; 


int main() {
    int x; 
    cin >> x;
    string one, two,three,four;
    vector<string> onepairn;
    map<string, string> twopairm;
    for (int i = 0; i  < x;  i++) {
        cin >> one;
        onepairn.push_back(one);
    }
    int xx;
    cin >> xx;
    for(int j = 0;  j < xx;  j++) {
        cin >> two >> three;
        twopairm.insert(make_pair(two, three));
    }
    cin >> four;
    vector<string> result;

    for(auto i : twopairm) {
       if(i.first == four) { // also  we can use iterator
           result.push_back(i.second);
       }
       if(i.second == four) {
           result.push_back(i.first);
       }
    }
    vector<string> generalresultonvector;
    bool used[10000];
    map<string, bool> generalresult;



    int cnt =0 ;
   // cout << generalresult[onepairn[0]]  <<endl; // 0  false store here 
    for(int i = 0; i < onepairn.size(); i++) {
        for(int j = 0; j < result.size(); j++) {
            if(onepairn[i] == result[j] && generalresult[onepairn[i]] == false  ) {
               generalresult.insert(make_pair(onepairn[i], true));

            }
            if(onepairn[i] == result[j]) {
                 generalresultonvector.push_back(onepairn[i]);
            }
        }
    }
    cout << generalresult.size() << endl;

    map<string, bool> ::iterator it;

    for(it = generalresult.begin(); it != generalresult.end(); it++) {
        cout << (*it).first << " ";
    }
    return 0;
}
