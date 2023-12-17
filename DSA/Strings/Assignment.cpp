#include<iostream>
using namespace std;

int main(){
    // Input string and update odd positions to #

    /*string s;
    cin>>s;
    cout<<s<<endl;
    for(int i=0;i<(int)s.size();i++){
        if(i%2!=0){
            s[i] = '#';
        }
    }*/
    
    // Input string of n length and count all consonants

    /*string s;
    int count = 0;
    cin>>s;
    cout<<s;
    cout<<endl<<s<<endl;
    for(int i=0;i<(int)s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    int n = s.length();
    cout<<n-count;*/

    //Input string and reverse half string

    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.size()%2 != 0) cout<<"Invalid input."<<endl;
    else{
        reverse(s.begin() + n / 2, s.end());
    cout << s;
    }


















    return 0;
}