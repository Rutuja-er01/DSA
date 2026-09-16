#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr,int N){
    for(int i=0;i<N-1;i++){
        bool isSwap=false;
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
                }
                if(!isSwap){
                    return;
                }
            }
        }
                void printArray(vector<int>&arr,int N){
                    for(int i=0;i<N;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
            
          int main(){
            int N=8;
            vector<int> arr={2,4,1,5,3,6,8,7};
            bubbleSort(arr,N);
            printArray(arr,N);
          return 0;
          }
        
