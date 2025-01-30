#include<iostream>
using namespace std;

//int last_digit(int& num){
//	int last = (num %10);
//	num = num/10;
//	return last;
//}
//
//int sum_of_digit(int& num){
//	int sum =0;
//	for(int i=0;i<=sizeof(num);i++){
//		sum +=last_digit(num);	
//	}
//	cout<<sum;
//	return sum;
//}

int sum_of_digit(int num){
	int sum =0;
	
	while(num>0){
		int lastdigit= num%10;
		num = num/10;
		
		sum += lastdigit;
	}
	cout<<sum;
	return sum;
}

int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	sum_of_digit(n);
	return 0;
}
