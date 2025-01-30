#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a number: \n";
	int x;
	cin>>x;
	int count =0; 
	for(int i=2;i<=x/2;i++){
		if (x%i == 0){
			count +=1 ;
		}
	}
	if (count == 0 ){
			cout<<x<< " is a prime number";
		}
		else{
			cout<<x <<" is not a prime number";
		}
	
	
}
