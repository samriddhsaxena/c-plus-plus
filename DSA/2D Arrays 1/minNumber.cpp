#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int minimum = INT_MAX;

    for(int i=0;i<5;i++){
        minimum = min(minimum,arr[i]);
    }
    cout<<minimum;

    return 0;
}
