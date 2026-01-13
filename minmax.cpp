#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findMinMax(vector<int>&arr){
    sort(arr.begin(), arr.end());
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findMinMax(arr);
    int min=arr[0], max=arr[n-1];
    cout<<"Min element: "<<min<<endl;
    cout<<"Max element: "<<max<<endl;
    return 0;

}