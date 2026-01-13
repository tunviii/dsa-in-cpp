#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int dupele;
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            dupele=arr[i];
            break;
        }
    }
    cout<<"Duplicate element is: "<<dupele;
    return 0;
}