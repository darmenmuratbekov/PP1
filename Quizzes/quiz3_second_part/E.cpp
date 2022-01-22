#include <iostream>
#include <vector>
using namespace std;
// void io(bool on = 1);

long long rec(long long n)
{
   if (n == 1) return 1;
   long long great_divisor, counter = 0;

   for(int i = 1; i < n; ++i)
   {
      if (n % i == 0)
      {
         great_divisor = i;
         counter++; //5
      }
   } 
   void f() {
   vector <int> a;
   n =  great_divisor;
   a.push_back(n);
   }
   return counter + rec(n);
}
int main()
{
   // io(1);
   long long n;
   cin >> n;
   for (int i =0 ; i < a.size();  i++) {
      cout << a[i];
   }
   cout << rec(n);
   return 0;
}
