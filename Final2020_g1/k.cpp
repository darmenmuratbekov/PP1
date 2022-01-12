#include <iostream>
#include <vector> 
#include <cmath> 
#include <map>
#include <string>
#include <algorithm>




using namespace std; 


int main() {
    int x;
    cin >> x; 
    string name, namechange;
    map<string, string> result;
    vector<string> key;
    multimap<string, string>resultkey; 
    string have;
    bool ok[1000] = {0};
    for(int i = 1; i <= x; i++) 
    {
        cin >> name >> namechange;
     // 1   // Aslan Nurbol 
     // 2 // Nurbol HackMachine 
        if(result.find(name) == result.end()) {
            // Aslan
            result[namechange] = name;
            // 1 Nurbol Aslan
    
        }
        else{
            // 
            result[namechange]  = result[name];
            result.erase(name);
        }
    }
    cout << endl;
    cout << result.size() << endl; 
  //  vector<pair<string, string> > forsorting; 
    // sort(result.begin(),  result.end())  // s0  map  is  not sort  because of we create 
    // new vector  for sort 
    string newname;
    string newsurname;
    multimap<string,string> forsorting;
    while (result.empty() != 1)
    {
       // cout << result.begin()->first << " " <<  result.begin() ->second << endl;
        
        newname = result.begin() -> first;
        newsurname = result.begin() -> second;
        forsorting.insert(make_pair(newsurname, newname));
        result.erase(result.begin());
    }
    while(forsorting.empty() != 1)

    {     

        cout << forsorting.begin()->first << " " << forsorting.begin()->second << endl;
        forsorting.erase(forsorting.begin());

    }
    
   return 0;
}
