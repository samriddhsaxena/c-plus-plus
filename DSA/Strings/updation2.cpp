#include<iostream>
using namespace std;

int main(){
    string str = "jnascsncs";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]%2==0){
            cout<<"a";
        }
    }
    cout<<str;
    return 0;
}