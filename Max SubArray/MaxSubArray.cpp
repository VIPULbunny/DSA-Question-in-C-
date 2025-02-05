#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int sz=5;
	for(int i=0;i<=(sz-1);i++){
		for(int j=i; j<=(sz-1);j++){
			for(int p=i;p<= j ;p++){
			cout<<arr[p];
			}
			cout<<" ";
		}
		cout<<endl;
	}
} 
