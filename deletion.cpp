#include<iostream>
using namespace std;
int main()
{
    int arr[100]={1,2,3,4,5};
    int size=5;
    int index=3;
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    void display(int arr,int size);
    {
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
}