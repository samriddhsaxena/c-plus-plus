#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(6);
    // cout<<v.capacity()<<endl;
    // v[1] = 3;
    v.push_back(1);
    // cout<<v.capacity()<<endl;
    v.push_back(9);
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(11);
    // cout<<v.capacity()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    return 0;
}