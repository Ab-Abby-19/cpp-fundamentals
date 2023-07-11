#include <iostream>
using namespace std;

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout << "After Swapping \n first number: " << a << "\n second number: " << b <<endl; 
}
int main()
{
 int n,m;
 cout << "enter number 1: ";
 cin >> n;
 cout << "enter number 2: ";
 cin >> m;
 cout << endl;
 
 cout << "Before Swapping \n" << "first number: " << n << "\n" << "second number: " << m <<endl;
 swap(n,m);
 return 0;
}


