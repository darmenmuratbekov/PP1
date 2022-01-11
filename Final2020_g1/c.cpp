#include <iostream>
#include <vector> 
#include <map> 
#include <stack>
#include <queue>
using namespace std; 
int n, l,a[111111], use = -11111;
vector<int> v;
int main() {

    cin  >> n; // if  2

    for(int i = 1; i <= n; i++) 
    {

        cin >> a[i]; // if 1 2

    }
    
    v.push_back(a[1]); // input // 1 
  //  v.push_back(a[2]); // input  // 2
  //  v.pop_back(); // delete position  2
            
  //  cout << v[0] << endl;

    for(int i = 1; i < n; i++) 
    {
         // 1  // 2      //2 // 1
        if(a[i] >= v[v.size()-1]) 
        {

           // cout << a[i]; // if size i = 2; // 1
            while(!v.empty() && (a[i] >= v[v.size() - 1])) 
            {
         
                v.pop_back();;

            }

        }
        
        v.push_back(a[i]);
    }
    cout << v.size(); 
    return 0;
}
