#include <iostream> 
#include <map> 
#include <vector> 
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // already solved this is problem
    int x;
    cin >> x; 
    string a,b;
    vector<pair<string, string> > add;
    string dd;
    
    
    vector<pair<string, string> > addnew;
    for(int i = 0; i <  x; i++) {
        cin >> a >> b;
        add.push_back(make_pair(a, b));
    }
    string oldfirst;
    string oldsecond;
    int valueint;
    for(int i = 0; i < add.size(); i++ ) {
        oldfirst = add[i].first;
        oldsecond = add[i].second;
        reverse(oldfirst.begin(), oldfirst.end());
        reverse(oldsecond.begin(), oldsecond.end());
        addnew.push_back(make_pair(oldfirst, oldsecond));
    }
    string addnewvalue;
    string addnewvaluetwo;
    int cnt = 0;
    int sum = 0;
    int old = 0;
    vector<int> sumvector;
    int count = 10;
    int counttype = 10;
    long sumvectorcountsum = 0;
    long sumnew = 0;
    long device = 10;
    long devicestay = 10;
    long generalgeneralvectorsetcount = 0;
    vector<long> generalvectorsetone;
    vector<long> generalvectorsettwo;
    vector<long> sumvectorcount;
    vector<long> generalgeneralvectorset;
    vector<char> generalcharset;
    vector<string> generalstring;
    for(int i = 0; i < addnew.size(); i++) {
        addnewvalue = addnew[i].first;
        for(int j = 0; j < addnewvalue.size(); j++) {
            sum = addnewvalue[j] - '0';
            sumvector.push_back(sum);

        }
        reverse(sumvector.begin(), sumvector.end());
        sumvectorcount.push_back(sumvector[0]);
        for(int k = 1; k < sumvector.size(); k++) {
            for(int start = 1; start < k; start++) {
                device = device * devicestay;
            }
        
           sumnew = sumvector[k] * device;
           device = 10;
           sumvectorcount.push_back(sumnew);
        }
        sumvector.clear();
        for(int kk = 0; kk < sumvectorcount.size();  kk++) {
            sumvectorcountsum = sumvectorcountsum + sumvectorcount[kk];
        }
        generalvectorsetone.push_back(sumvectorcountsum);
        sumvectorcount.clear();
        sumvectorcountsum = 0;
    } 
    sumvector.clear();
    sumvectorcount.clear();
    for(int ii = 0; ii < addnew.size(); ii++) {
        addnewvalue = addnew[ii].second;
        for(int j = 0; j < addnewvalue.size(); j++) {
            sum = addnewvalue[j] - '0';
            sumvector.push_back(sum);

        }
        reverse(sumvector.begin(), sumvector.end());
        sumvectorcount.push_back(sumvector[0]);
        for(int k = 1; k < sumvector.size(); k++) {
            for(int start = 1; start < k; start++) {
                device = device * devicestay;
            }
        
           sumnew = sumvector[k] * device;
           device = 10;
           sumvectorcount.push_back(sumnew);
        }
        sumvector.clear(); // delete all  element for adding new things 
        for(int kk = 0; kk < sumvectorcount.size();  kk++) {
            sumvectorcountsum = sumvectorcountsum + sumvectorcount[kk];
        }
        generalvectorsettwo.push_back(sumvectorcountsum);
        sumvectorcount.clear();
        sumvectorcountsum = 0;
    } 

    for(int rick = 0; rick < generalvectorsettwo.size();  rick++) {
       generalgeneralvectorsetcount  = generalvectorsetone[rick] + generalvectorsettwo[rick];
       generalgeneralvectorset.push_back(generalgeneralvectorsetcount);
    }
    
    long output;
    long outputchar;
    char ops;
    string opsstring = ""; //  empty  string 
    string o = ""; // empty string
    int k = 1;
    bool ok = false;
    for(int rickstart = 0;  rickstart < generalgeneralvectorset.size();    rickstart++) {
          output =  generalgeneralvectorset[rickstart];
          while(output > 0) {
            
              outputchar = output % 10;
              output = output / 10;
              ops = outputchar + '0'; // converting to char 
              if(ops != '0' || ok == true) {
                  o = o + ops; // assembling string from char
                  ok = true; // 909 
              }
          }
          generalstring.push_back(o);
          ok = false;
          o = "";
    }
    
    for(int i = 0;  i < generalstring.size();  i++) { 
        opsstring = generalstring[i];
        cout << opsstring;
        if(k < generalstring.size()) {
            cout << endl;
            k = k + 1;
        }
    }

   return 0;

}
