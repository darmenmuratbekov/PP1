#include <iostream> 

#include <string> 
#include <vector> 

using namespace std; 

int main() {
    int coins[] = {1,2,5,10,20,50,100};
    
    int x;
    
    vector<pair<int,int>> money;


    for(int i = 0; i < 7; i++)
    {
        cin >> x;
        money.push_back(make_pair(x, coins[i])); // coins set and size each of them
        // 1,2,5,10,20,50,100
    }
    int sizeofmoney;

    int eachmoney;

    cin >> sizeofmoney;

    vector<long> moneyvector; // use customer set
    for(int i = 0; i < sizeofmoney; i++) 
    {
       cin >> eachmoney;
       moneyvector.push_back(eachmoney);
    }
    long moneykeysize;
    long moneykeycoins;
    long moneyvectorcustomercoins;
    long endlcycle = 0;
    vector<pair<int,int> > moneykey = money;
    for(int i = 0; i < moneyvector.size(); i++) 
    { 
       moneyvectorcustomercoins = moneyvector[i];
       moneykey = money; // money moneykey value give
       for(int k  = 6;  k >= 0; k--) 
       {  
          moneykeysize = moneykey[k].first; // 10,10,10,10,10,10,10
          moneykeycoins = moneykey[k].second;// 100,50,20,10,5,3,2,1
          while(moneyvectorcustomercoins >= moneykeycoins && moneykeysize > 0) {

              moneyvectorcustomercoins = moneyvectorcustomercoins - moneykeycoins;
              moneykeysize = moneykeysize - 1;

          }

        moneykey[k].first = moneykeysize;

       }
       if(moneyvectorcustomercoins == 0)
        {  
           money = moneykey; // moneykey money give
           // 
           cout << "Transaction accepted!";
           if(endlcycle < moneyvector.size() - 1) // 0,2;1,2;
           {
               cout << endl;
               endlcycle = endlcycle + 1;
           }
       }
       if(moneyvectorcustomercoins != 0) 
       {
        moneykey = moneykey;
        // if transacition not will then moneykey no change that
        //   moneykey system no change soins size
        cout <<"Transaction stopped!";
        if(endlcycle < moneyvector.size() - 1) 
        {
             cout << endl;
             endlcycle = endlcycle + 1;
        }

       }
    }


    return 0;
}
