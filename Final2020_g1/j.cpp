#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <list>   
#include <algorithm>
using namespace std;       
int main() {
    vector<char> k;
     
    vector<char>h;   
     
    vector<char>l;
        
    string a,b;

    cin >> a >> b;
    
    int   xxx =0;
    for (int  i=0; i < a.size(); i++) {

        char x  = a[i];

        int xx = x;
                        
        xxx =xxx+ xx;
         
        
    }
    for(int   j =0;  j < a.size(); j++) {
        k.push_back(a[j]);
    }
    int  zzz =0;
    for (int  j =0;  j < b.size();  j++) {
        char  z =  b[j];
        int  zz  =z;
        zzz =  zzz+zz;
    }
    if (zzz  !=  xxx)  {
        cout << "Understandable have a nice day";
        return 0;

    }
    
    int  v =0;                       
   char e= b[0];
    string  xxxxx = b + e;
    xxxxx.erase(0,1);
    string  bb  = b;
    int m = b.size();
    if (xxx ==  zzz) {
    if (a.substr(0, m) == b){ 
        cout << 0;
    }
    else {
        for (int  i =0;  i < b.size(); i++) {
           char  xxxx =  b[i];

           bb.erase(0,1);
           bb =  bb +xxxx;          
           int  bbb = bb.size(); 
           v =  v+1;

          for(int j =0;  j <a.size(); j++) {

               if(a.substr(j, bbb) == bb) {

                   cout <<  v <<endl;
                 return 0;
              }
            }
          }
        }
      }

    return  0;

}
