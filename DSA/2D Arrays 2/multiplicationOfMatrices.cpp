#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter rows and columns of first matrix: "<<endl;
    cin>>m>>n;
    int p,q;
    cout<<"Enter rows and columns of second matrix: "<<endl;
    cin>>p>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the elements of first matrix: ";
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the elements of second matrix: ";
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=q-1;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<=q-1;j++){
                res[i][j] = 0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices cannot be multiplied.";
    }
    return 0;
}