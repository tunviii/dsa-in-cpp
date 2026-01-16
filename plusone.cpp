#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<int>arr={1,2,3};
    int num=0;
    for(int i=0; i<arr.size(); i++){
        num=num*10+arr[i];
    }
    num=num+1;
    cout<<num<<endl;
    while(!arr.empty()){
        arr.pop_back();
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    while(num>0){
        arr.push_back(num%10);
        num/=10;
    }
    for(int i=arr.size()-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}