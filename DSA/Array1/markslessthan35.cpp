#include<iostream>
using namespace std;

int main(){
    int marks[6];
    for(int i=0;i<6;i++){
        cin>>marks[i];
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }

    return 0;
}