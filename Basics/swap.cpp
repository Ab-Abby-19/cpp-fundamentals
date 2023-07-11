#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cin >> x;
  cout << endl;
  cin >> y;
  cout << "Before swapping x: " << x << " and y: " << y << endl;
  
  x = x^y;
  y = x^y;
  x = x^y;
   
  cout << "After swapping x: " << x << " and y: " << y;
  
  return 0;
}
