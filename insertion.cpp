#include<iostream>
using namespace std;
int insert(int arr[],int size,int capacity,int index,int element )
{
    if(size>=capacity){
        cout<<"insertion not possible array is full\n";
        return size;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
arr[index]=element;
return size+1;
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
int main()
{
    int arr[100]={10,20,30,40};
    int size=5;
    int capacity=100;
    cout<<"before insertion:\n";
    display(arr,size);
    return 0;
}