#include <iostream>
using namespace std;

class Fraction
{
private:
    long numerator;
    long denominator;
public:
    Fraction(long num = 0, long den = 1) : numerator(num), denominator(den) {}
    void print() const
    {
        cout << numerator << "/" << denominator << endl;
    }
    Fraction operator++(int)
    {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }
    Fraction operator++()
    {
        numerator += denominator;
        return *this;
    }
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);
};

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.numerator * f2.denominator, f1.denominator * f2.numerator);
}

int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction f3 = f1 / f2;
    f3.print();
    Fraction f4 = ++f3;
    f4.print();
    Fraction f5 = f4++;
    f5.print();
    f4.print();
    return 0;
}
