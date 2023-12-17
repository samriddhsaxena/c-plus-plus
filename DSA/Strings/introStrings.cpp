#include<iostream>
using namespace std;

int main(){
    char str[] = {'a','b','c','d','e'};
    char str[5] = "abcd";
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<"I live in Bhopal."<<endl;

    char ch = '\0';
    cout<<ch;

    return 0;
}