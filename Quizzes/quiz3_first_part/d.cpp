#include <iostream> 
#include <vector> 
#include <stdio.h>
#include <wctype.h>
#include <algorithm>

using namespace std; 
vector<string> checkword(string name,string surname) { 
    
    vector<char> checkcharfirst;
    vector<char> checkcharsecond;
    char usename;
    char usesurname;
    vector<string> yes;
    vector<string> no;
    yes.push_back("Yes");
    no.push_back("No");
    int cnt = 0;
    for(int i = 0; i  < name.size();  i++) {
       usename = name[i];
       usesurname =  surname[i];
       
        if((usename == 'P'  || usename == 'B') && (usesurname == 'P'  ||  usesurname == 'B') || (usename == 'I' || usename == 'E') && (usesurname == 'I' || usesurname == 'E'))
        {
           if((usename == 'P'  || usename == 'B') && (usesurname == 'P'  ||  usesurname == 'B')) 
           {
              checkcharfirst.push_back('P');
              checkcharsecond.push_back('P');
           }

           if((usename == 'I' || usename == 'E') && (usesurname == 'I' || usesurname == 'E')) 
           {
               checkcharfirst.push_back('I');
               checkcharsecond.push_back('I'); 
             //  cout <<  'I' << " ";
           }
        }
       else 
       {
         //  cout <<  usename  << " ";
           checkcharfirst.push_back(usename);
           checkcharsecond.push_back(usesurname);
       }

    }
    if(equal(checkcharfirst.begin() , checkcharfirst.end(), checkcharsecond.begin(), checkcharsecond.end()) == 1) 
    {
        checkcharsecond.clear();
        checkcharfirst.clear();
        fill(checkcharsecond.begin(), checkcharsecond.end(), '0');
        fill(checkcharfirst.begin(), checkcharfirst.end() , '0');
        return yes;
    }
    else
    {

        checkcharfirst.clear();
        checkcharsecond.clear();
        fill(checkcharsecond.begin() ,  checkcharsecond.end(), '0');
        fill(checkcharfirst.begin(),  checkcharfirst.end(), '0');

        return no;

    }
    

}
int main() {
    int x; 
    cin >>  x; 

    string firstname, secondname;
    vector<pair<string ,string>> nameset;
    vector<pair<string  ,string>> namesettowupper;
    vector<string> result;
    for (int i = 1;  i <= x;  i++) {
        cin >>  firstname >>  secondname;
        nameset.push_back(make_pair(firstname,  secondname));
    }
    string changenamefirst,  changenamesecond;
    string changetoupperkeptfirst = "", changetoupperkeptsecond = "";
    string changetouppernamefirst,  changetouppernamesecond;
    char changenamefirstonchartype,  changenamesecondonchartype;
    for(int i = 0;  i < nameset.size();  i++) {

        changenamefirst  = nameset[i].first;
        changenamesecond =  nameset[i].second;
        if(changenamefirst.size()  != changenamesecond.size())
        {
            cout << "No"  << endl;
        }

        
    //   cout <<    "general  result " << endl;
    //   cout <<    changetoupperkeptfirst << " " << changetoupperkeptsecond << endl;
       else {
          
          for(int j = 0;  j  < changenamefirst.size();  j++) {

             changenamefirstonchartype =  changenamefirst[j];
             changenamesecondonchartype =  changenamesecond[j];
             changetouppernamefirst = toupper(changenamefirstonchartype);
             changetouppernamesecond =  toupper(changenamesecondonchartype); 
          //  cout << changetouppernamefirst << " " << changetouppernamesecond << endl;
             changetoupperkeptfirst = changetoupperkeptfirst + changetouppernamefirst;
             changetoupperkeptsecond = changetoupperkeptsecond +  changetouppernamesecond; 
          }
          vector<string> generalname =  checkword(changetoupperkeptfirst,  changetoupperkeptsecond);
          changetoupperkeptfirst = "";
          changetoupperkeptsecond = "";
          cout << generalname[0] << endl;

       }
    }

  return  0;
}
