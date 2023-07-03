#include <iostream>
using namespace std;

int main()
{
  int n,t1=0,t2=1,nextterm,i,i2;
  cout << "enter number: ";
  cin >> n;
  nextterm = t1+t2;
  cout << "by for loop\n";
  cout << "fibonacci: " << t1 << "\t" << t2 << "\t" << nextterm << "\t"; 
  for(i=1;i<=n-3;i++)
  {
      t1 = t2;
      t2 = nextterm;
      nextterm = t1+t2;
      cout << nextterm << "\t";
  }
  cout << endl;
    
  t1=0;
  t2=1;
  nextterm=t1+t2;
  cout << "by while loop\n";
  cout << "fibonacci: " << t1 << "\t" << t2 << "\t" << nextterm << "\t";
  i2 = 1;
  while(i2 <= n-3)
  {
      t1 = t2;
      t2 = nextterm;
      nextterm = t1+t2;
      i2++;
      cout << nextterm << "\t";
  }

 
}
