#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    
    
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    
    if (arr[mid] == target) {
        return mid;
    }

    
    if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target);
    }

    
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the  numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<"Enter the target:"<<endl;
    int target;
    cin>>target;

    int index = binarySearch(arr, 0, n - 1, target);
    if(index<0){
        cout<<"Element not found"<<endl;
    }else{
    cout <<"THE index is:"<< index<<endl;
    }

    return 0;
}