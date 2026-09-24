#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string str;
     cout<<"enter string"<<endl;
    cin>>str;
   
    for(int i=0;i<str.length();i++){

        if(isalpha(str[i])){
            cout<<str[i]<<" ";
        }
    }
    return 0;

}