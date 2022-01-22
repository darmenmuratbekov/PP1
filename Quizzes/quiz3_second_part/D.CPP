#include<iostream>

using namespace std;
int n,k;
long long int rec(int n,int k){
if(n<=1){
    return n;
}
 else {
 return (k*rec(n-1,k))%10 +(rec(n-2,k))%10;
}
}
int main(){
 cin>>k>>n;
 cout<<rec(n-1,k) % 10;
}
