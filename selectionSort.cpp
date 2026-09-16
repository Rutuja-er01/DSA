#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
  void selectionSort(int arr[],int n){
      for(int i=0;i<n-1;i++){
          int minIndex=i;
          for(int j=i+1;j<n;j++){
              if(arr[j]<arr[minIndex]){
                  minIndex=j;
              }
          }
          swap(arr[i],arr[minIndex]);
      }}
    
      int main(){
        int n=7;
          int arr[]={1,3,2,5,4,6,7};
          selectionSort(arr,n);
          printArray(arr,n);
          return 0;
      
    }
  