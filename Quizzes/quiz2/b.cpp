#include <bits/stdc++.h>
using namespace std;     
int n;
int main () 
{
  cin >> n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
        cin >> a[i][j]; 
     }
  }
  for(int i = n-1; i >= 1-n; i--)
  {
    for(int j = 0; j < n; j++)
    {
      if(i+j<n && i+j>=0)
      {
        cout << a[j][i+j] << " "; 
      }
    }
    cout << endl;
  }
}
