#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cout << "Prime numbers between 1 to 300 are: ";
    for(i=1;i<=300;i++)
    {
        a=0;
        for(n=2;n<=i/2;n++)
        {
            if(i%n==0)
            {
                a=1;
                break;
                
            }
            
        }
        if(a==0 and i!=1)
        cout << i <<" ";
    
    }
}