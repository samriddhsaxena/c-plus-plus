#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,23,4,56,7};
    int x = 2;
    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;

    return 0;
}
