#include <iostream>
#include <vector>
#include <map> 

using namespace std; 


int main() {
    int x;
    cin >> x; 
    map<string, int> setstring;
    map<string, bool> mapbooling;

    string name;
    bool use = true;
    vector<string> result;
    bool  used[100];
    for(int i = 0; i < x; i++ ) {
        cin >> name;
        if(setstring.find(name) == setstring.end()) {
            setstring.insert(make_pair(name, 1));
            mapbooling.insert(make_pair(name, false));
        
        }
        else {
            setstring[name] = setstring[name]  + 1;
            
        }
        if(setstring[name] > 1 &&  mapbooling[name] == false) {

            result.push_back(name);
            mapbooling[name] = true;

        }
    }
    if(result.size() == 0) {
        
        cout << "Understandable, have a great day";
        return 0;
    }
    if(result.size() > 0) {
        for(int i = 0; i  <  result.size();  i++) 
        {
              cout << result[i] << endl;
        }
    }
    return 0;
}
