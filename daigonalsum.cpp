#include<iostream>
#include<vector>
using namespace std;
int diagonalSum(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }return sum;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{6,7,8}};
    int n=3;
    cout<<diagonalSum(matrix,n)<<endl;
    vector<vector<int>>mat = {{1,2,3},{4,5,6},{6,7,8}};
    cout<<mat[0][0];
    return 0;
}