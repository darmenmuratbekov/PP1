#include <iostream> 
#include <algorithm>
#include <map>
#include <vector>
#include <utility>
#include <cstdlib> 
#include <cmath>
#include <iomanip>
using namespace std; 


int main() {
    long x;
    cin >>  x; 

    string name,surname;

    long int sizegpa; //  changing this the sait accepted our solution

    string onegpa;

    long double onegpasum;  // changing this the sait accepted our solution 
   // vector<double> sum;

    double onegpacountF = 0;
    double onegpacountD = 1.000;
    double onegpacountDD = 1.500;
    double onegpacountC = 2.000;
    double onegpacountCC =  2.500;
    double onegpacountB = 3.000;
    double onegpacountBB = 3.500;
    double onegpacountA = 3.750;
    double onegpacountAA = 4.000;
    long double one; // also this
    long double sum = 0; //  also this
    long double sumgeneral = 0; //  also this
    long double sumgeneraldivide = 0; // also this
    map<string,pair<string, double >> result;

    vector<pair<string, pair <string, double >>> resultvector;
    vector<pair<double, pair <string, string >>> resultvectortwo;

    for(int i = 1;  i  <= x; i++) {
        cin >> name >> surname >> sizegpa;
        for(int j = 1; j <= sizegpa; j++) {
            cin >> onegpa >> onegpasum;
            if(onegpa == "F") {
                one = onegpasum * onegpacountF;
            }
            if(onegpa == "D") {

                one = onegpasum * onegpacountD;

            }
            if(onegpa == "D+") {

                one = onegpasum * onegpacountDD;

            }
            if(onegpa == "C") {

                one = onegpasum * onegpacountC;

            }
            if(onegpa == "C+") {

                one = onegpasum * onegpacountCC;

            }
            if(onegpa == "B") {

                one = onegpasum * onegpacountB;

            }
            if(onegpa == "B+") {

                one = onegpasum * onegpacountBB;

            }
            if(onegpa == "A") {

                one = onegpasum * onegpacountA;

            }
            if(onegpa == "A+") {

                one = onegpasum * onegpacountAA;

            }
            sumgeneral =  sumgeneral + one;
            sum = sum + onegpasum;
        }
      sumgeneraldivide = sumgeneral / sum;
      sum = 0;
      sumgeneral = 0;
      resultvector.push_back(make_pair(name, make_pair(surname, sumgeneraldivide)));
      resultvectortwo.push_back(make_pair(sumgeneraldivide,  make_pair(name, surname)));
    
    }

    sort(resultvector.begin(), resultvector.end());
    sort(resultvectortwo.begin(),  resultvectortwo.end());

   
    for(int i = 0; i  < resultvectortwo.size(); i++) {
    
      cout <<resultvectortwo[i].second.first <<" "<<resultvectortwo[i].second.second << " ";
      cout << fixed << setprecision(3) <<  resultvectortwo[i].first;
      if(i  < resultvectortwo.size() - 1)
      {
          cout << endl;
      } 
    }

  
 // cout << endl;
 // cout << endl;
 // cout << endl;
 // cout << endl; 
 // cout << endl; 
 // cout << endl; 
 // reverse(resultvector.begin(), resultvector.end());
 // string namestring;
 // for(int i = 0; i < resultvector.size(); i++) {
 //      cout << resultvector[i].first << " " << resultvector[i].second.first << " ";
 //      cout << resultvector[i].second.second << endl;
    

    
   
    return 0; 

}
