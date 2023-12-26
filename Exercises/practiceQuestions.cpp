#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

void palindrome(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(str==rev) cout<<"It is a palindrome.";
    else cout<<"Not a palindrome.";
}

int main(){
    // Given an array of numbers, find the maximum value
    int arr[5] = {1,23,4,56,7};
    int a = INT_MIN;
    int b;
    for(int i=0;i<5;i++){
        if(arr[i]>a){
            b = a;
            a = arr[i];
        }
        else if(arr[i]<a){
            b = arr[i] ;
        }
    }
    cout<<a<<endl;

    //Given an array of numbers, find the minimum value
    int arr[5] = {1,23,4,56,7};
    int a = INT_MAX;
    int b;
    for(int i=0;i<5;i++){
        if(arr[i]<a){
            b = a;
            a = arr[i];
        }
        else if(arr[i]>a){
            b = arr[i] ;
        }
    }
    cout<<a<<endl;

    // //Program to check if string is palindrome
    palindrome("MADAM");

    //Create a program that takes a sentence as input and counts the number of words in it
    string str = "Hello World";
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ') count++;
    }
    if(count<=1){
        cout<<count;
    }
    else if(count>=2){
        cout<<++count;
    }

    return 0;
}