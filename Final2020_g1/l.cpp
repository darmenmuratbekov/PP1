#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 
int booling[10000];
class Anyclass{
   
};
int main() {
    int x; 
    int sizearray;
    int number;
    cin >> x; 

    vector<long> array;
    vector<long> newarray;
    vector<long> general[1001];
    vector<int> newopion(1001);
    std:: vector<long> op;
    vector<int> ok(1001);
    long min;
    for(int i = 0; i < x; i++) 
    {
        cin >> sizearray;
        for(int j = 0; j < sizearray; j++) 
        {
            cin >> number;
           general[i].push_back(number);
        }
    }
    for(int i = 0; i < x; i++) {

        for(int j = 0;  j < general[i].size();  j++)
        {
            array.push_back(general[i][j]);
        }
        for(int k = 0;  k < array.size();  k++) 
        {
             booling[array[k]]++;
        }
        for(int l = 0;  l < array.size();  l++)
        {
            if(booling[array[l]] == 1) 
            {
                newarray.push_back(array[l]);
            }
        }
      // cout <<"array " << endl;
      //for(int j = 0;  j < array.size();  j++)
      //{
      //     cout << array[j] << " ";
      //}
      //cout << endl;
      //cout << "booling " << endl;
      //for(int i = 0;  i < array.size();  i++)
      //{
      //     cout << booling[array[i]] << " ";
      //}
      //cout << endl;
      //booling.clear();
        std:: fill(booling,  booling + general[i].size() + 2, 0);

        if(newarray.size() == 0) 
        {

                ok[i] = 0;
                newarray.clear();
           //     booling.clear();
                array.clear();

        }
        if(newarray.size() > 0) 
        {
          ok[i] = i + 1;

          sort(newarray.begin(), newarray.end());
          
          min = newarray[0];

          for(int opions = 0;  opions < array.size();  opions++) 
          {
              

                   if(min == array[opions])
                   {

                      newopion[i] = opions + 1;

                   }
          }
          newarray.clear();
          array.clear();
        //  booling.clear();

        }
    
      
    }
   // cout << endl;
   // cout << endl;
   // cout << newopion[0] << endl<< endl<< endl;
   // cout << ok[0] << endl;
   // bool  can store 
   // cout << booling.size()  << endl;
    for(int i = 0;  i < x; i++) 
    {
        if(ok[i] > 0 ) {
            cout << newopion[i];
        }
        if(ok[i] == 0) {
            cout <<"ZA WARUDO";
        }
        if(i + 1 < x) {
            cout << endl;
        }
    }
    
        
    return 0;
}
