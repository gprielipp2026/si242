/* ex0.cpp
 * MIDN GEORGE PRIELIPP (265112)
 * sees if x has a multiplicitive inverse in Zn
 */
#include <iostream>
using namespace std;

bool isValid(int x, int n);

int main()
{
  //get n 
  int n;
  cin >> n;

  cout << n << " :";
  for(int i = 0; i < n; i++)
  {
    if (!isValid(i, n))
      cout << " " << i;
  }
  cout << endl;

  return 0;
}

bool isValid(int x, int n)
{
  // loop through 0 - (n-1)
  for(int i = 0; i <= n-1; i++)
  {
    if (x*i % n == 1)
      return true;
  }
  return false;
}
