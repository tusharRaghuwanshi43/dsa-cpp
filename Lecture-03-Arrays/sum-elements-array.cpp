#include <iostream>
using namespace std;

int sumarray(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum of the array is "<<sumarray(arr,size)<<endl;

    return 0;
}