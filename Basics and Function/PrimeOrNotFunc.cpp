#include<iostream>
using namespace std;

void prime(int n){
	bool vote;
	for(int i=2;i*i<=n;i++){
		if (n % i == 0){
			vote= false;
		}
		else{
			vote = true;
		}
	}
	if (vote == true){
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";}
}


int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	prime(n);
}
