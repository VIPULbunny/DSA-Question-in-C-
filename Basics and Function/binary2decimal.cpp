#include<iostream>
using namespace std;

int binary2decimal(int n){
	int pow=1;
	int ans=0;
	while(n>=0){
			int num = n%10;
			n /= 10;
			ans += (num * pow);
			pow = pow *2;
			}
			cout<<ans;
			return ans;
}

int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	if(n<0){
		cout<<"Enter the positive number";
	}
	else{
		binary2decimal(n);
		}
	}
