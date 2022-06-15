#include<iostream>

using namespace std;

//1 --> Even 
//0 --> Odd
bool isEven(int n){
    if( n%2 == 0){
        return 1;

    }
    else return 0;

}

int main(){
    int num;
    cin >> num ;
    if(isEven(num)) {
        cout << "Number is Even!";
    }
    else{
        cout << "Number is Odd!";
    }
    
}