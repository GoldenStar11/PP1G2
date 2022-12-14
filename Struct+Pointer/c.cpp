#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[4];
  int *p;
  p = a;
  *p = 1;
  //p = p + 1;
  *(p+1) = 2;

  //p = p + 1;
  *(p+2) = 10;

  //p = p + 1;
  *(p+3) = 3;

  for(int *ptr = a; ptr != (a + 4); ptr++)
    cout << *ptr << " "; // a[i] === *(a + i)

  return 0;
}