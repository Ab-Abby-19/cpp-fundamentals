
#include <iostream>
using namespace std;
class matrix
{
    int **a;
    int r, c;  
public:
    void getdata();
    void display();
    matrix add(matrix);
};

void matrix::getdata()
{
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    a = new int *[r];
    for (int i = 0; i < r; i++)
        a[i] = new int[c];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
}

void matrix::display()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

matrix matrix::add(matrix m)
{
    matrix temp;
    temp.r = r;
    temp.c = c;
    temp.a = new int *[temp.r];
    for (int i = 0; i < temp.r; i++)
        temp.a[i] = new int[temp.c];
    for (int i = 0; i < temp.r; i++)
        for (int j = 0; j < temp.c; j++)
            temp.a[i][j] = a[i][j] + m.a[i][j];
    return temp;
}


int main()
{
    matrix m1, m2, m3;
    m1.getdata();
    m2.getdata();
    m3 = m1.add(m2);
    cout << "First matrix is: 2" << endl;
    m1.display();
    cout << "Second matrix is: " << endl;
    m2.display();
    cout << "Sum of the two matrices is: " << endl;
    m3.display();
    return 0;
}
