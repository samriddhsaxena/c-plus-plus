#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s,t;
    int m,n;
    cin>>s;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"It is an anagram.";
    }
    else{
        cout<<"It is not an anagram.";
    }


    return 0;
}