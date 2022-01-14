#include <iostream> 
#include <vector> 
#include <algorithm>
#include <map> 
using namespace std; 


int main() {
    int x; 

    cin >> x;

    string one, two,four;
    vector<string> onepairn;
    vector<pair<string,string>> twopairm;
    
    vector<string> result;
    for (int i = 0; i  < x;  i++) {
        cin >> one;
        onepairn.push_back(one);
    }
    int xx;
    cin >> xx;
    for(int j = 0;  j < xx;  j++) {

        cin >> one >>  two;
        twopairm.push_back(make_pair(one, two));

    }
    cin >> four;

    for(auto i : twopairm) {
       if(i.first == four) 
       { // also  we can use iterator

           result.push_back(i.second);

       }
       if(i.second == four) {

           result.push_back(i.first);

       }
    }

    sort(result.begin(),  result.end());

    cout << result.size() << endl;

    for(int i = 0; i < result.size(); i++) 
    {
        cout << result[i] << " ";
    }
    return 0;
   /* cout << endl;
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
    if(generalresult.size() == 0) 
    {
        cout << 0;
        return 0;
    }

    cout << generalresult.size() << endl;

    map<string, bool> ::iterator it;

    for(it = generalresult.begin(); it != generalresult.end(); it++) {
        cout << (*it).first << " ";
    } */
    return 0;
}
