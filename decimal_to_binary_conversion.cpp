// #include<iostream>
// #include<math.h>

// using namespace std;


// int main() {
// 	int n;
// 	cin>>n;

// 	int ans = 0;
// 	int i = 0;
// 	while(n != 0){
// 		int bit = n & 1;
// 		// the bit will be in reverse order so we need to reverse inorder to get correct answer
// 		 //formula for reverse order
// 		ans = (bit * pow(10,i ) ) + ans;
// 		// formula for same order ---> ans=(ans *10) + digit
// 		n= n >> 1;
// 		i++;
// 	}
// 	cout<<"The answer is:" << ans << endl;
// }

//2nd approach --> time complexity is O(1)
// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

// driver code
int main()
{
	int n ;
	cin >> n;
	decToBinary(n);
}
