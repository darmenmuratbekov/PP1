#include <iostream>
#include <set>
#include <vector>
using namespace std;
bool messi(long long ggg)
{
   for(int i = 2; i < ggg; ++i)
   {
      if (ggg % i == 0)
      {
         return 0;
      } 
   }
   return 1;
}
int main()
{

   int n;

   cin >> n;

   int could = 0;

   long long ggg = 1;

   while(could < n) {

      ggg++;

      if (messi(ggg) == 1)
      {
         could++;
      }
   }
   long long xxx =1;
   for (int k =0;  k <n; ) {
      xxx++;
      if (messi(xxx) == 1) {
         k++;
      }
   }
   cout << ggg<<endl;
   cout << xxx;



   return 0;
}
