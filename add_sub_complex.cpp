#include <iostream>
using namespace std;

struct complex
{
    float real;
    float imag;
};

int main()
{
    complex r1,r2,sum,sub; 
    cout << "enter real part of 1st number: ";
    cin >> r1.real;
    cout << "enter imag part of 1st number: ";
    cin >> r1.imag;
    cout << "enter real part of 2nd number: ";
    cin >> r2.real;
    cout << "enter imag part of 2nd number: ";
    cin >> r2.imag;
    cout << "\n 1st complex number is: " << r1.real << " + i" << r1.imag << endl;
    cout << "2nd complex number is: " << r2.real << " + i" << r2.imag << endl;
    
    sum.real = r1.real+r2.real;
    sum.imag = r1.imag+r2.imag;
    sub.real = r1.real-r2.real;
    sub.imag = r1.imag-r2.imag;
    
    cout << "sum: " << sum.real << "+i" << sum.imag << endl;
    cout << "sub: " << sub.real << "+i" << sub.imag <<endl;
     
}