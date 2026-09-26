#include<iostream>
using namespace std;
bool linearSearch(int mat[][3],int rows,int col,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }return false;
}
int main(){
    int mat[4][3]={{1,2,3},{3,4,5},{5,6,7},{7,8,9}};
    int rows=4;
    int col=3;
    cout<<linearSearch(mat,rows,col,8)<<endl;
    return 0;
}