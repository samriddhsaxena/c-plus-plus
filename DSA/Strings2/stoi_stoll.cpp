#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x+1<<endl;

    int a = 1234567;
    string s = to_string(a);
    cout<<s;
    return 0;
}