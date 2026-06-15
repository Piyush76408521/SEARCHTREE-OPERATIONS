//approach-1
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minindex]){
        minindex=j;
      }
    }
    swap(arr[i],arr[minindex]);
  }
}
int main() {
    int arr[]={2,43,54,12,22,45,12,53,1,23,56,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
