#include <iostream>
#include <vector> 
#include <cmath> 
#include <map>
#include <string>


using namespace std; 


int main() {
    int x;
    cin >> x; 
    string name, namechange;
    vector<pair<string,string >> result;
    for(int i = 0; i < x; i++) {
        cin >> name >> namechange;
       result.push_back(make_pair(name, namechange ));

    }
    bool ok = false;
    string nameatvector;
    map<string, bool> okay;
    vector<int>use;
    cout << endl;
    vector<pair<string,string>> newvector;
    for(int i = 0; i < result.size(); i++) {
        nameatvector = result[i].second;
        for(int j = 1; j < result.size(); j++) {
            if(nameatvector == result[j].first) {
                result[i].second = result[j].first;
                nameatvector = result[i].second;
                ok = true;
                cout <<  nameatvector << endl;
            }
        }
        if(ok == true) {
            newvector.push_back(make_pair(result[i].first, nameatvector));
            
        }
        ok = false;
      //  else  {
     //   newvector.push_back(make_pair(result[i].first, result[i].second));
      //  }
    }
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < newvector.size(); i++) {
        cout << newvector[i].first << " "<< newvector[i].second << endl;
    }
    
   return 0;
}
