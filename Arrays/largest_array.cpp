#include <iostream>
using namespace std;

int main()
{
    int i,n;
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
        if(arr[0]<arr[i])
        arr[0]=arr[i];
    }
    
    cout << "largest element: " << arr[0];
}