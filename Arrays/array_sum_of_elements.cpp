#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    int *ptr;
    
    cout << " Enter number of elements of array(1 to 100): ";
    cin >> n;
    cout<<endl;
    
    // elemnts of array
    for(int i=0;i<n;i++)
    {
        cout << "enter element " << i+1 << " of array: ";
        cin >> arr[i];
    }
    
    cout << endl;
    
    //displaying array
    cout << "elements of array:\t ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    //sum of elements in array
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += *(arr + i);
    }
    cout << "sum of elements: " << sum << endl;
    
    // base address and address of other elementsfor(int i=0;i<n;i++)
    ptr = &arr[0];
    cout << "base address: " << ptr << endl;
    for(int i=0;i<n;i++)
    {
        ptr = &arr[i];
        cout << "address of element " << i+1 << " is " << ptr <<endl;
    }
    
}













