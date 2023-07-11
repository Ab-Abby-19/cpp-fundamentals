#include <iostream>
using namespace std;

int main()
{
    int i,j,rows,columns,sum=0;
    int arr[10][10];
    
    cout << "enter number of rows : ";
    cin >> rows;
    cout << "enter number of columns: ";
    cin >> columns;
    cout << endl;
    
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            cout << "enter elements of array row(" << i+1 << ") column(" << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    for (i=0;i<rows;i++)
    {
        sum = 0;
        for (j=0;j<columns;j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of row " << i+1 << " is: " << sum << endl;
    }
}
    
    