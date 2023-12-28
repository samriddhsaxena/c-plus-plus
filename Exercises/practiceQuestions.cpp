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
void revStr(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    cout<<rev;
}

int numOfVowels(){
    string str;
    cin>>str;
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
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

    // Create a function to reverse a given string
    revStr("Samriddh");

    // Write a Python program to check if a given string is a pangram (contains all letters of the alphabet)
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(int(s[i])>=97 && int(s[i])<=122){
            count++;
        }
        else if(s[i]=' '){
            count++;
        }
    }
    if(count>=26){
        cout<<"Yes it is pangram.";
    }
    else{
        cout<<"Not a pangram.";
    }

    // Create a function to count the number of vowels in a given string

    cout<<numOfVowels();

    // Write a program to check if a number is prime.

    int n;
    cin>>n;
    if(n==1){
        cout<<"Neither prime nor composite"<<endl;
    } 
    else{
        bool isPrime = true;
        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "It is a prime number." << endl;
        } else {
            cout << "Not a prime number" << endl;
        }
    }
    // Calculate the sum of digits of a given number.

    int n,rem,num;
    int sum = 0;
    cin>>num;
    cin>>n;
    if(n<10){
        cout<<n;
    }
    else{
    for(int i=0;i<num;i++){
        rem = n%10;
        sum += rem;
        n/=10;
    }
    cout<<sum;
    }

    return 0;
}