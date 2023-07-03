#include <iostream>
using namespace std;

class complex
{
    private:
    
    float x;
    float y;
    
    public:
    
    void set(float, float);
    void disp();
    complex sum(complex);
};

void complex :: set(float real,float imag)
{
    x=real;
    y=imag;
    cout<<"enter real part : ";
    cin>> x;
    cout << "enter imag part : ";
    cin >> y;
   
}

void complex :: disp()
{
    cout << "complex number: " << x << "+i" << y << endl;
}

complex complex :: sum(complex c)
{
    complex n;
    n.x = x + c.x;
    n.y = y + c.y;
    return n;
}

 int main()
 {
     float x,y;
     complex com1,com2,com;
     
    com1.set(x,y);
    com1.disp();
    com2.set(x,y);
    com2.disp();
    com = com1.sum(com2);
    cout << "sum: " << endl;
    com.disp();
    
 }