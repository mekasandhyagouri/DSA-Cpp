#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m =n;
    int mask = 0;
    
    //edge case
    if(n==0){
        cout <<1;
        
    }
    
    while( m !=0){
        //do left shift and or with 1
        mask= (mask << 1) | 1 ; 
        m = m >>1; // loop will be active and right shift done until the given no is zero 
    }
    int ans = (~n)& mask;
    cout << ans;
    
}
    
    




