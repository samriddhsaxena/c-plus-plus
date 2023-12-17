#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {1,23,-101,56,7};
    int a = INT_MIN;
    int b;
    for(int i=0;i<5;i++){
        if(a<arr[i]){
            b = a;
            a = arr[i];
        }
        else if(a>arr[i]){
            b = arr[i];
        }
        else if(b<arr[i]){
            a = b;
            b = arr[i];
        }
    }
    cout<<a;
    return 0;
    
}