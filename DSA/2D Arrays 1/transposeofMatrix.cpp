#include<iostream>
using namespace std;

int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    int b[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            b[i][j] = a[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}