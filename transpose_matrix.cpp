#include <iostream>
using namespace std;

int main()
{
    int i,j,rows,columns;
    int arr[10][10],transpose[10][10];
    
    cout << "enter number of rows : ";
    cin >> rows;
    cout << "enter number of columns: ";
    cin >> columns;
    cout << endl;
    
    // input elements
      for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            cout << "enter elements of array row(" << i+1 << ") column(" << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    
    // print matrix
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    //transpose
      for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            transpose[j][i]=arr[i][j];
        }
        
    }
    
    cout << "\n\n transpose of matrix: " << endl;
    // print transpose
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
    
    
}
    
    