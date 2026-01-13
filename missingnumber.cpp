#include <iostream>
#include <algorithm>
using namespace std;
void missingNumber(int arr[], int n){
    int sum=(n*(n+1)/2);
    cout<<"Expected sum of elements: "<<sum<<endl;
    int arrsum=0;
    for(int i=0; i<n; i++){
        arrsum=arrsum+arr[i];
    }
    int missingnum=sum-arrsum;
    cout<<"Sum of array elements: "<<arrsum<<endl;
    cout<<"Missing number in array is: "<<missingnum<<endl;
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
    missingNumber(arr, n);
    return 0;

}