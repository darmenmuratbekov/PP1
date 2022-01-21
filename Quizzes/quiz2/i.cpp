#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
        vector<char>y;
       string s;
       cin >>s;
       char q = 'B';
       char w = 'R';
       char r= 'L';
       char t = 'F';
       for (int i =0;  i <= s.size(); i++) {
           y.push_back(s[i]);
       }
       int z = 0,  x =0 ,c =0,v = 0,b=0,n=0;
       sort(y.begin(),  y.end());
       for (int i =0; i <= y.size(); i++) {
           if(y[i]== 'L') {
               z++;
            x++;
           }
           if(y[i] =='R') {
               z--;
               v++;
           }
           if(y[i]== 'B') {
               c++;
               b++;
           }
           if(y[i] == 'F'){
              c--;
              n++;
           }
       }
         int sss = abs(z);
         int fff = abs(c);
         vector<char> xxx;
       for (int  i=1;  i <=sss;  i++ ) {
           if(x > v) {
               xxx.push_back('R');
           }
           else{
               xxx.push_back('L');
           }
       }
       for(int i  =1;  i <=fff; i++) {

          if (b > n) {
              xxx.push_back('F');
          }
          else{
              xxx.push_back('B');
          }
       }
        
         sort(xxx.begin(),  xxx.end());
         for (int  i=0; i <  xxx.size();  i++) {
             cout << xxx[i];
         }
       return 0;
}
