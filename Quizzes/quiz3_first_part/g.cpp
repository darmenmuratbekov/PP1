#include <iostream>
#include <vector>
using namespace std;
vector<int>a;
void print_fact(int n)
{
    if (n==1)
        return;
    int num=2;
    while (n%num != 0) {
        num++;
}
     // printf("*%d",num); // remove from here
     a.push_back(num);
     print_fact (n/num);

    

}

int main ()
{
    int n;
    cin >>n;
    print_fact(n);
    for (int i =0;  i <  a.size(); i++) {
        cout <<  a[i] <<" ";
    }
    return 0;
}
