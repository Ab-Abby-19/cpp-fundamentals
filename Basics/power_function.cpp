#include <iostream>
using namespace std;

int powe(int a,int b){
    int p=1;
    for(int i=0;i<b;i++)
    {
        p *= a;
    }
    return p;
}
int main()
{
 int n,m,power;
 cout << "enter numbwer: ";
 cin >> n;
 cout << endl << "enter power: ";
 cin >> m;
 cout << endl;
 
 power=powe(n,m);
 cout << "result: " << power;
 return 0;
}

