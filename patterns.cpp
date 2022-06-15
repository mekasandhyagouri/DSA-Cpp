#include <iostream>
using namespace std;

int main()
{

    for(int i = 1; i<=5; i++){
        for(int j=1;j<=5-i+1;j++){
           cout<<j<<"  "; 
        }
        for(int k=1; k<=i-1; k++){
           
            cout<<'*'<<"  ";
        }
        for(int l=1; l<=i-1;l++ ){
            cout<<'*'<<"  ";
        }
        for(int m=5-i+1; m>=1;m--){
            cout<<m<<"  ";
        }
        cout<<endl;
    }
}

