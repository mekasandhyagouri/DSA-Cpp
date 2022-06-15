#include<iostream>

using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <=end){
        swap(arr[start], arr[end]);
        start++;
        end -- ;

    }
}

void PrintArray( int arr[], int n){
    for( int i =0 ; i<n ; i++){
        cout << arr[i] << " ";

    }
    cout<< endl;
}

int main(){
    int n;
    cout << "Enter the size of an array: "<< endl;
    cin >> n;
    int arr[n];
    for( int i =0; i<n; i++){
        cin >> arr[i];

    }
    reverse(arr,n);
    PrintArray(arr,n);
}