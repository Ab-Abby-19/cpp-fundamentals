#include <iostream>
using namespace std;

int main()
{
  int a,i1,i2;
  float i3;
  cout << "first series: ";
  for (i1=10;i1>=1;i1--)
  {cout << i1 << "\t";}
  cout << endl << "second series: ";
  for (i2=2;i2<=20;i2++)
    {
        if(i2%2==0)
      cout << i2 << "\t";}
  cout << endl << "third series: ";
  i3 = 10;
  while(i3<=20.5)
  {
      cout << i3 << "\t";
      i3 += 3.5;
  }
  
}
