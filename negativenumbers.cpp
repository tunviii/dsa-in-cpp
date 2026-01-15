/*#include <iostream>
#include <algorithm>
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
    sort(arr, arr+n);
    cout<<"Array after moving -ve elements to one side: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
Used sort() function, time complexity- O(nlogn), space complexity- O(logn).*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout<<"Array after moving all -ve elements to one side: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}