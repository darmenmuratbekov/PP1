#include <iostream>
using namespace std;
void Big_boy(string s, int pos){
   int length = s.length();
   cout <<  length <<" ";
   if (pos == length)
   {
      cout << -1;
      return;
   }
   if (s[pos] >= 'A' && s[pos] <= 'Z')
   {
      cout << s[pos];
      return;
   }
   Big_boy(s, pos+1);
}
int main()
{
   string s;
   cin >> s;
   Big_boy(s,0);
   return 0;
}
