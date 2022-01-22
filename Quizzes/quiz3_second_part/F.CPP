#include <iostream>
#include <set>
#include <map>
using namespace std;
// void io(bool on = 1);

int main()
{
   // io(1);
   int n;
   cin >> n;
   string before;
   map<string, int> students;
   for(int i = 0; i < n; ++i)
   {
      cin >> before;
      students[before]++;
   }

   int m;
   cin >> m;
   string after;
   for(int i = 0; i < m; ++i)
   {
      cin >> after;
      students[after]--;
   }

   set <string> missed_s, lost_s;
   for (map<string, int>::iterator i = students.begin(); i != students.end(); ++i)
   {
      string temp = (i->first);
      if (i->second > 0)
      {
         missed_s.insert( temp );
      }
      if (i->second < 0)
      {
         lost_s.insert( temp );
      }
   }
   cout << "Missed students:\n";
   for (set <string>::iterator i = missed_s.begin(); i != missed_s.end(); ++i)
   {
      cout << "- " << *i << endl;
   }
   cout << "Not in the group:\n";
   for (set <string>::iterator i = lost_s.begin(); i != lost_s.end(); ++i)
   {
      cout << "- " << *i << endl;
   }
   return 0;
}
