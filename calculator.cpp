#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    char op;
    cout << "Enter the OPeration you want to perform: " <<endl;
    cin >> op;

    switch(op){
        case '+': cout << "ans: " << a+b <<endl;
                  break;

        case '-': cout << "ans: " << a-b <<endl;
                break;

        case '*': cout << "ans: " << a*b <<endl;
                break;

        case '/': cout << "ans: " << a/b <<endl;
        break;

        case '%': cout << "ans: " << a%b <<endl;
        break;
        
    }
}