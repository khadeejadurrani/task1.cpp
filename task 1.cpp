#include<iostream>
using namespace std;

int main(){

// Display each value of the array on the console without using any loops. All values should be
// printed on the same line with a single space between each value.

    const int size = 15;
    int arr [size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55, 50, 51};

    cout <<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" "<<arr[6]<<" "<<arr[7]<<" ";
    cout <<arr[8]<<" "<<arr[9]<<" "<<arr[10]<<" "<<arr[11]<<" "<<arr[12]<<" "<<arr[13]<<" "<<arr[14];

    return 0;
}