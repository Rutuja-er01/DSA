#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
      int curr=arr[i];
      int prev=i-1;
      while(prev>=0 && arr[prev]>curr){
          arr[prev+1]=arr[prev];
          prev--;
      }
       arr[prev+1]=curr;
    }

}
int main(){
    int n=6;
    int arr[]={5,4,3,2,1,0};
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}