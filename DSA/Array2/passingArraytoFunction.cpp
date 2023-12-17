#include<iostream>
using namespace std;

void display(int a[]){
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    return;
}
void change(int b[]){
    b[0]=32;
}
int main(){
    int arr[4]={1,3,4,5};
    display(arr);
    cout<<endl;
    change(arr);
    display(arr);
    return 0;
}