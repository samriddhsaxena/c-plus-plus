#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    vector<int> v2;
    for(int i=0;i<v1.size();i++){
        int j=v1.size()-1-i;
        v2[i] = v1[j];
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}