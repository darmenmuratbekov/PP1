#include <iostream>
#include <vector> 
#include <string> 


using namespace std; 

int main() { 
    // today  you  will  need  to write a program  that  will 
    // encrypt  the starting using the 
    // Vigenere cip 
    //  example 
    string a,b; 
    
    cin >> a  >> b; 

    for(int i = 0; i < a.size();  i++)
    {
        if(a.size() == b.size()) 
        {
            break;
        }
        else {
            b = b + b[i];
        }
    }
    b = b.substr(0, a.size());
    int xa,xb;
    int xab;
    char p = 't' + 1;
    char t = 'p'; 
    char newxb;
    char newxa;
    int newabint = 97;
    int changeint;
    char newab;
    int newabintresult;
    int xabs;
    char abresult = 'a' + 34;
    for(int i = 0; i < a.size(); i++) {
         xa = a[i] - 'a'; // 'b', 1 = 'b' - 'a' 
         xb = b[i] - 'a'; // 'c', 2 = 'c' - 'a' 
                          // xa = a[i] 'e', 4  = 'e' - 'a'
                          // xb = b[i]  'b', 1 = 'b' - 'a'
         xab = xa + xb; // if

         if(26 > xab) { // 25 24 23 22 21

             newab  = 'a' + xab;
             cout << newab;

         }
         if(xab  >= 26) { // 26 27 28 29

             xab = xab % 26; 
             newab = xab + 'a';
             cout << newab;

         }
       //     changeint = newab;
        //    cout << changeint << endl;

         
    }
    // it's second solution  of this problems
         return 0;
         string ans = "";
         char kl;
         for (int i = 0; i <  b.size(); i++) {
             xa = a[i] - 'a';
             xb = b[i] - 'a';
             cout << xa  <<  " " << xb << endl;
             
             kl=  ((xa + xb) % 26) + 97;
             ans  = ans  + kl;
         }
          cout << ans << endl;
    
    return 0;
}
