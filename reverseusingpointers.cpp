#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseArray(vector<int>&arr){
    int first=0;
    int last=arr.size()-1; //Size of array must be greater than 0.
    while(first<last){
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Array size must be greater than 0";
        return 0;
    }
    vector<int>arr(n);
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}