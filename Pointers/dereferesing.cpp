#include<iostream>
using namespace std;

int main(){
	int a =10;
	int *ptr= &a;
	int** ptr2 = &ptr;
	
	cout<<*(&a)<<endl;
//	cout<<*(ptr)<<endl; // value of a

//	cout<<(ptr)<<endl;
	cout<<**(ptr2)<<endl; // address of a
	return 0;
}

