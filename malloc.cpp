#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int*ptr=(int*)malloc(sizeof(int));
    *ptr=100;
    cout<<*ptr;
    free(ptr);
    return 0;
}