#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate(int arr[], int n, int k){
    if(k>n){
        k=k%n;
    }
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);
    cout<<"Rotated array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter k: ";
    int k;
    cin>>k;
    rotate(arr, n, k);
    return 0;
}