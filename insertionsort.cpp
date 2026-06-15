//approach-1
#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
  for(int i=0;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}
int main() {
  int arr[]={56,34,9,75,12,64,85,23,1,76,23};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}



//approach-2
#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[]={56,34,9,75,12,64,85,23,1,76,23};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
