#include<iostream>
using namespace std;
int main(){
int x=20;
int*ptr=&x;
int**parPtr=&ptr;
cout<<**(parPtr)<<endl;
return 0;
}