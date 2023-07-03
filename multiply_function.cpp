#include <iostream>
using namespace std;

int mul(int a,int b){
    return a*b;
}


int main()
{
 int n,m,product;
 cout << "enter two numbwers: ";
 cin >> n;
 cout << endl;
 cin >> m;
 cout << endl;
 
 product=mul(n,m);
 cout << "product: " << product;
 return 0;
}

