#include <iostream>
using namespace std;

int main()
{
    int i,n,j,a;
    int arr[20];
    
    cout << "Enter number(1 to 20): ";
    cin >> n;
    
    for(i=0;i<n;i++)
    {
        cout << "enter number " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
               a = arr[i];
               arr[i] = arr[j];
               arr[j] = a;
           }
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
}