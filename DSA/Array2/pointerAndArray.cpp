#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,3,3,6543,345};
    int *ptr = &arr[1];
    cout<<ptr;
    return 0;
}