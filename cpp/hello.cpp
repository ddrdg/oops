#include <iostream>
using namespace std;

namespace first
{
  int x = 110;
}

namespace second
{
  int x = 2;
}

int main()
{
  int x = 5;
  cout << first::x;
  return 0;
}
