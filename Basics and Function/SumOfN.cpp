#include<iostream>
using namespace std;

int SumofN(int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		sum +=i;
	}
	cout<<sum;
	return sum;
}

int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	SumofN(n);
}
