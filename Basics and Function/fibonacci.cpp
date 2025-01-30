#include<iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 21 ..........
// 1 2 3 4 5 6 7  8  9 ..........
int fabonica(int n){
	int i=0;
	int j=1;
	cout<<i<<" ";
	cout<<j<<" ";
	
	for(int ith=3;ith<=n;ith++){
		int next= i+j;
		cout <<next <<" ";
		i=j;
		j =next;
		
	}
	return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0){
    	cout<<"Enter a positive number";
	}
	else{
		fabonica(n);
	}
    
    return 0;
}

