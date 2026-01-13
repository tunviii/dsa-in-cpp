#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp=1;
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<"Rotated array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}