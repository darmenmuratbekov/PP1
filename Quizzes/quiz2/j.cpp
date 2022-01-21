#include <iostream>

#include <algorithm>


#include <vector>

using namespace std;


int main() {

    string toward; 
    cin >> toward; //  D = down, U = up, 
                   // L = left,  R = right
    int a,b; 
    cin >> a  >> b;
    char show[a][b];
   // show[0][0] = '#';
   // cout << show[0][0] << endl;
    for(int i = 0; i < a;  i++) {
        for(int j = 0; j < b;  j++) {
             show[i][j] = '#';
        }
    }
    show[0][0] = '*'; //  coordinate of starting
  /* for(int i = 0;  i < a;  i++)
    {
        for(int j = 0 ; j < b;  j++)
         {
            cout << show[i][j];
        }
        cout << endl;

    } */
   // char show[0][0] = '*';
    char onetoward;
    int converting_j_zero = 0;
    int j = 0;
    int NEW_J = 0;
    int NEW_I = 0;
    for(int i = 0; i < toward.size();  i++) 
    {  
         onetoward =  toward[i];
     
          if('D' == onetoward)  //  DOWN
          {   NEW_J = NEW_J; 
              NEW_I = NEW_I + 1;
              
              show[NEW_I][NEW_J] = '*';
          }
          if('R' == onetoward) // RIGHT
          { 
            NEW_I = NEW_I;
            NEW_J = NEW_J + 1;
            show[NEW_I][NEW_J] = '*';
          }
          if('U' == onetoward)  //  UP
          {  
              NEW_I = NEW_I - 1;
              NEW_J = NEW_J;
              show[NEW_I][NEW_J] = '*';
          }
          if('L' == onetoward) // LEFT
          {
             NEW_I = NEW_I;
             NEW_J = NEW_J - 1;
             show[NEW_I][NEW_J] = '*';
          }
    }
    for(int i = 0;  i < a;  i++)
    {
      for(int j = 0;  j < b;  j++)
       {
          cout << show[i][j];
      }
      cout << endl;
    }
    return 0;
}
