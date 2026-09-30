#include<iostream>

using namespace std;

int main(){
    int rows,cols;
    cout<<"enter no of rows"<<endl;
    cin>>rows;
    cout<<"enter no of cols"<<endl;
    cin>>cols;
    int a[5][5];
    cout<<"enter matrix element";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    cout<<"max of each coloumn"<<endl;
    for(int j=0;j<cols;j++){
        int max=a[0][j];
        for(int i=0;i<rows;i++){
        if(a[i][j]>max){
            max=a[i][j];
          
        }
        
    }
      cout<< max <<" ";
}
cout<<"minimum of each row"<<" ";
for(int i=0;i<rows;i++){
    int min=a[i][0];
    for(int j=1;j<cols;j++){
        if(a[i][j]<min){
            min=a[i][j];
        }
    }
    cout<<min<<" ";
}
return 0;
}
