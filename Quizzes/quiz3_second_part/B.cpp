#include <iostream>
using namespace std;
int  chesstable[8][8];
void place_pieces(string pos)
{
   int y = pos[0] - 'A';
   int x = pos[1] - '0'; 
   chesstable[y][x] = 100;

}
int main()
{
   int n;
   cin >> n;
   string pos;
   for(int i = 0; i < n; ++i)
   {
      cin >> pos;
      place_pieces(pos);
   }
   for(int i = 0; i < 8; ++i)
   {
      for(int j = 0; j < 8; ++j)
      {
        if(chesstable[i][j] ==  100) {
           cout << "*";
        }
        else {
           cout << 0;
        }
      }
      cout << endl;
   }
   
   return 0;
}
