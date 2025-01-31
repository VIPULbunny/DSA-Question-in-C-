#include<iostream>
#include<math.h>
using namespace std;

int main()
	{
		int n;
		cout<<"Enter number get reverse:\n";
		cin>>n;
		int new_num = 0;
//		for(int i=((sizeof(n))-1);i>0;i--){
//			int rem = n%10;
//			n/= 10;
//			new_num += (rem * pow(10,i));	
//		}

	while (n > 0) {
        int rem = n % 10;  // Get the last digit
        new_num = new_num * 10 + rem;  // Append it to the reversed number
        n /= 10;  // Remove the last digit from n
    }
		cout<<new_num;
		return 0;
	}
