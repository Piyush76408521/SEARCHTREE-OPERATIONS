#include <bits/stdc++.h>
using namespace std;
int findelement(int arr[],int n,int x) {
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x) 
        return mid;
        if(arr[mid]<x)
        low=mid+1;
        else
        high=mid-1;
        }
        return -1;
}
int main() {
    int arr[]={1,2,4,6,9,12,23,54,67,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=9;
    cout << findelement(arr,n,x);
    return 0;
}
