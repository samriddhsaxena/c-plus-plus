#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5,12);
    vector< vector<int> > v(3,vector<int> (4,2));
    cout<<v[2][2];

    return 0;
}