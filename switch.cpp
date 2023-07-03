#include <iostream>
using namespace std;

int main()
{
  int n,a,b;
  cout << "enter 2 numbers: ";
  cin >> a;
  cout << "\t";
  cin >> b;
  cout << endl;
  cout << "choose(1:add,2:sub,3:multiply,4:divide,5:remainder): ";
  cin >> n;
  cout << endl;
  switch (n)
  {
      case 1:
      cout << a+b;
      break;
      
      case 2:
      cout << a-b;
      break;
      
      case 3:
      cout << a*b;
      break;
      
      case 4:
      cout << a/b;
      break;
      
      case 5:
      cout << a%b;
      break;
      
      default:
      cout << a << "\t" << b;
  }
  
  
}
