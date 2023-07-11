#include <iostream>
using namespace std;

class Vehicle
{
protected:
int mileage;
int price;
public:
Vehicle(int m,int p)
{
mileage=m;
price=p;
}
friend class Car;
friend class Bike;
};
class Car:public Vehicle
{
int ownership_cost;
int warranty;
int seating_capacity;
char fuel_type[10];
public:
Car(int m,int p,int o,int w,int s,char f[10]):Vehicle(m,p)
{
ownership_cost=o;
warranty=w;
seating_capacity=s;
fuel_type[10]=f[10];
}

friend class Audi;
friend class Ford;
};
class Bike:public Vehicle
{
int no_of_cylinders;
int no_of_gears;
char cooling_type[10];
char wheel_type[10];
int fuel_tank_size;
public:
Bike(int m,int p,int n1,int n2,char c[10],char w[10],int f):Vehicle(m,p)
{
no_of_cylinders=n1;
no_of_gears=n2;

cooling_type[10]=c[10];
wheel_type[10]=w[10];

fuel_tank_size=f;
}
friend class Bajaj;
friend class TVS;
};
class Audi:public Car
{
char model_type[10];
public:
Audi(int m,int p,int o,int w,int s,char f[10],char mt[10]):Car(m,p,o,w,s,f)
{
model_type[10]=mt[10];

}
void display()
{
cout<<"Mileage of Audi is "<<mileage<<endl;
cout<<"Price of Audi is "<<price<<endl;
cout<<"Ownership cost of Audi is "<<ownership_cost<<endl;
cout<<"Warranty of Audi is "<<warranty<<endl;
cout<<"Seating capacity of Audi is "<<seating_capacity<<endl;
cout<<"Fuel type of Audi is "<<fuel_type<<endl;
cout<<"Model type of Audi is "<<model_type<<endl;
}
};
class Ford:public Car
{
char model_type[10];
public:
Ford(int m,int p,int o,int w,int s,char f[10],char mt[10]):Car(m,p,o,w,s,f)
{
model_type[10]=mt[10];

}
void display()
{
cout<<"Mileage of Ford is "<<mileage<<endl;
cout<<"Price of Ford is "<<price<<endl;
cout<<"Ownership cost of Ford is "<<ownership_cost<<endl;
cout<<"Warranty of Ford is "<<warranty<<endl;
cout<<"Seating capacity of Ford is "<<seating_capacity<<endl;
cout<<"Fuel type of Ford is "<<fuel_type<<endl;
cout<<"Model type of Ford is "<<model_type<<endl;
}
};
class Bajaj:public Bike
{
char make_type[10];
public:
Bajaj(int m,int p,int n1,int n2,char c[10],char w[10],int f,char mt[10]):Bike(m,p,n1,n2,c,w,f)
{
make_type[10]=mt[10];
}
void display()
{
cout<<"Mileage of Bajaj is "<<mileage<<endl;
cout<<"Price of Bajaj is "<<price<<endl;
cout<<"No of cylinders of Bajaj is "<<no_of_cylinders<<endl;
cout<<"No of gears of Bajaj is "<<no_of_gears<<endl;
cout<<"Cooling type of Bajaj is "<<cooling_type<<endl;
cout<<"Wheel type of Bajaj is "<<wheel_type<<endl;
cout<<"Fuel tank size of Bajaj is "<<fuel_tank_size<<endl;
cout<<"Make type of Bajaj is "<<make_type<<endl;
}
};
class TVS:public Bike
{
char make_type[10];
public:
TVS(int m,int p,int n1,int n2,char c[10],char w[10],int f,char mt[10]):Bike(m,p,n1,n2,c,w,f)
{
make_type[10]=mt[10];
}
void display()
{
cout<<"Mileage of TVS is "<<mileage<<endl;
cout<<"Price of TVS is "<<price<<endl;
cout<<"No of cylinders of TVS is "<<no_of_cylinders<<endl;
cout<<"No of gears of TVS is "<<no_of_gears<<endl;
cout<<"Cooling type of TVS is "<<cooling_type<<endl;
cout<<"Wheel type of TVS is "<<wheel_type<<endl;
cout<<"Fuel tank size of TVS is "<<fuel_tank_size<<endl;
cout<<"Make type of TVS is "<<make_type<<endl;
}
};
int main()
{
Audi a(20,1000000,500000,5,5,"Petrol","Audi A4");
Ford f(25,2000000,600000,6,6,"Diesel","Ford Figo");
Bajaj b(30,500000,4,5,"Air","Alloy",10,"Bajaj Pulsar");
TVS t(35,600000,4,6,"Water","Alloy",12,"TVS Apache");
a.display();
f.display();
b.display();
t.display();
return 0;
}
