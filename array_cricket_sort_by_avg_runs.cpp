#include <iostream>
using namespace std;

struct cricketer
{
    string cricketername;
    int age;
    int numofmatches;
    float avgruns;
};

void sort(cricketer *c, int n)
{
    cricketer temp;
    for(int i=0;i<20;i++)
    {
        for(int j=i+1;j<20;j++)
        {
               if(c[i].avgruns>c[j].avgruns)
               {
                   temp = c[i];
                   c[i] = c[j];
                   c[j] = temp;
               }
        }
    }
}

int main()
{
    cricketer c[20];
    for (int i=0;i<20;i++)
    {
        
        cout << "enter name of cricketer " << i+1 << " : ";
        cin >> c[i].cricketername;
        cout << "enter age of cricketer: ";
        cin >> c[i].age;
        cout << "enter number of maqtches: ";
        cin >> c[i].numofmatches;
        cout << "average runs: ";
        cin >> c[i].avgruns;
    }
    cout << "cricketers details:\n";
    for(int i=0;i<20;i++)
    {
        cout << c[i].cricketername << "\t" << c[i].age << "\t" << c[i].numofmatches 
        << "\t" << c[i].avgruns <<endl;
    }
    
    cout << endl;
    sort(c,20);
    cout << "cricketers in ascending order:\n";
    for(int i=0;i<20;i++)
    {
        cout << c[i].cricketername << "\t" << c[i].age << "\t" << c[i].numofmatches 
        << "\t" << c[i].avgruns <<endl;
    }
    
    
}








