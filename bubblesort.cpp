//approach-1
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1])
  swap(arr[j],arr[j+1]);
       }
    }
}
int main(){
  int arr[]={2,19,3,76,43,25,12,57,53,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  bubblesort(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}



//approach-2
#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,19,3,76,43,25,12,57,53,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}
