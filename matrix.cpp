#include<iostream>
using namespace std;
int main(){
int matrix[4][4];
int rows=4;
int coloumns=4;

for(int i=0;i<rows;i++){
    for(int j=0;j<coloumns;j++){
        cin>>matrix[i][j];
    }
}for(int i=0;i<rows;i++){
    for(int j=0;j<coloumns;j++){
        cout<<matrix[i][j]<<" ";
    }
cout<<endl;
}
return 0;
}
