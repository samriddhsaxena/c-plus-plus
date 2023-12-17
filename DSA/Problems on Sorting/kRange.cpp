#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {5,3,10};
    int n = 3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}