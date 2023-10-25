/* ex0.cpp
 * MIDN GEORGE PRIELIPP (265112)
 * sees if x has a multiplicitive inverse in Zn
 */
#include <iostream>
using namespace std;

int main()
{
  //get x and n
  int x, n;
  cin >> x >> n;

  // llop through 0 - (n-1)
  for(int i = 0; i <= n-1; i++)
  {
    if ((x*i % n) == 1)
    {
      cout << "true" << endl;
      return 0;
    }
  }
  cout << "false" << endl;

  return 0;
}
