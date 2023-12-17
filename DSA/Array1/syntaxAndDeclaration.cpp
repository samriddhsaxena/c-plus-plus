#include<iostream>
using namespace std;

int main(){
    // int arr[4];
    // arr[0]=7;
    // arr[1]=3;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;

    // int arr[4] = {1,2,3,4};
    // cout<<arr[1];

    // int arr[4] = {1,2,3,4};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;


    int arr[4] = {1,2,3,4};
    for(int i=0;i<=3;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<=3;i++){
        cout<<arr[i]<<endl;
    }
    



    return 0;
}