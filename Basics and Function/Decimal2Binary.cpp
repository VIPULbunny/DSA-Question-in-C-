#include<iostream>
using namespace std;

int decimal2binary(int n){
	int pow=1;
	int ans=0;
	while(n>0){
			int rem = n%2;
			n=n/2;
			ans += rem *pow;
			pow *=10;
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
		decimal2binary(n);
		}
	}
