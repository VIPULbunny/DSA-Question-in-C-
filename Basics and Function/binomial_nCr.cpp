#include<iostream>
using namespace std;

int fact(int n){
	int fact= 1;
	for(int i=1;i<=n;i++){
		fact *= i;
	}
	return fact;
}

float nCr(int n, int r){
	float coeff;
	int d = n-r;
	coeff= ((fact(n))/(fact(d)*fact(r)));
	cout<<"nCr = "<< coeff;
	return coeff;
}

int main(){
	int n,r;
	cout<<"enter n : ";
	cin>>n;
	cout<<"enter r : ";
	cin>>r;
	nCr(8,2);
	return 0;
}
