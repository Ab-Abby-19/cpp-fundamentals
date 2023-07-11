#include <iostream>
using namespace std;

int main()
{
  int a,i,i2,n=1,n2=1;
  cout << "enter number: ";
  cin >> a;
  
  for(i=1;i<=a;i++)
  {
      n *= i;
  }
  cout << "by for loop\n";
  cout << "factorial: " << n << endl;
  
  i2 = 1;
  while(i2 <= a)
  {
      n2 *= i2;
      i2++;
  }
  cout << "by while loop\n";
  cout << "factorial: " << n2 << endl;
  
}
