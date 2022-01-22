#include <iostream>
#include <vector>
#include <algorithm> 
#include <set>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    multiset<int>v;
        for (int i=0;i<n;i++){
        cin>>x;
        v.insert(x);
    }
    multiset<int> :: iterator it;  // what  is  differnret of usually  set. This multiset no  delete similary  elemenet in  array 
                                     //  also do sorting 
    //for(it = v.begin(); it !=  v.end();  it++) {
   //     cout << (*it) <<" ";
    //}
    //cout << endl;
    int a,b;
    cin>>a;
    int s[a];
    for(int i=0;i<a; i++){
        cin>> s[i];
    }
  
    for(int i=0;i<a;i++){
        cout<<v.count(s[i])<<endl;
    }
    return 0;
}
