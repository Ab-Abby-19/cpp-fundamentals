#include <iostream>
using namespace std;

class student
{
    private:
    
    string name;
    int age;
    int marks;
    float per;
    
    public:
    
    void readdata();
    void printdata();
};

void student :: readdata()
{
    cout<<"enter student name: ";
    cin>> name;
    cout << "enter age: ";
    cin >> age;
    cout << "enter marks(out of 500): ";
    cin >> marks;
    per = (marks*100)/500;
    cout << "percentage: " << per << endl;
}

void student :: printdata()
{
    cout << name << "\t" << age << "\t" << marks << "\t" << per << endl;
}
 int main()
 {
     student std1,std2;
     
     std1.readdata();
     std1.printdata();
     std2.readdata();
     std2.printdata();
 }



