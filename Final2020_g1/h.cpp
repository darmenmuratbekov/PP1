#include <iostream>
#include <vector> 


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
    int xa,xb;
    int xab;
    char newxb;
    char newxa;
    char newab;
    int newabint = 'a';
    int changeint;
    int newabintresult;
    for(int i = 0; i < a.size(); i++) {
         xa = a[i] - 'a'; // 'b', 1 = 'b' - 'a' 
         xb = b[i] - 'a'; // 'c', 2 = 'c' - 'a' 
                          // xa = a[i] 'e', 4  = 'e' - 'a'
                          // xb = b[i]  'b', 1 = 'b' - 'a'
         xab = xa + xb;
         newab = 'a' + xab;
         if('z' >= newab) {

            cout << newab;
       //     changeint = newab;
        //    cout << changeint << endl;

         }
         if(newab  > 'z') {

            newabintresult = newabint + xab;
            cout << newabintresult << endl; 
          //  cout << newabintresult;
            newabintresult = newabintresult - 'z' - 1;
          //  cout << newabintresult <<" ";
            newab = newabintresult + 'a';
            cout << newab;

         }

    }
    return 0;
}
