#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int x;
  cin >> x;

  if (x % 2 == 0)
  {
    cout << x / 2;
  }

  if (x % 2 == 1)
  {
    cout << x / 2 + 1;
  }

  return 0;
}