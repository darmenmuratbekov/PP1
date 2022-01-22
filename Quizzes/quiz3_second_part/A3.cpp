#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std; 

int main() {
    vector<long> firstarray;
    vector<long> secondarray;
    int a,b;
    cin >> a;
    int x, z;
    for(int i  = 1;  i  <= a;  i++) {
        cin >> x;
        firstarray.push_back(x);
    }
    cin >> b;
    for(int i = 1;  i <= b;  i++) 
    {
         cin >> z; 
         secondarray.push_back(z);
    }
    int mycount;
    cout << endl;
    for(int i = 0; i <  secondarray.size();  i++) 
    {
       mycount = count(firstarray.begin(), firstarray.end(),  secondarray[i]);
       cout << mycount << endl;
    }
  return 0;
}
