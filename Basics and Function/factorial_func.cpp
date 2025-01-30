#include<iostream>
using namespace std;

int fact(int n){
	int fact= 1;
	for(int i=1;i<=n;i++){
		fact *= i;
	}
	cout<<fact;
	return fact;
}

int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	fact(n);
	return 0;
}
