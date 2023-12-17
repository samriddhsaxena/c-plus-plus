#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5,7); //initial size is 5 and each element is 7
    cout<<v.size()<<endl;
    cout<<v[2];

    return 0;
}