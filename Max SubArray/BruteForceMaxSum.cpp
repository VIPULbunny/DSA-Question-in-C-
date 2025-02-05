#include<iostream>
using namespace std;

int main(){
	int arr[]={3,-4,5,4,-1,7,-8};
	int sz= sizeof(arr)/sizeof(int);
	int MaxSum = INT_MIN;
	
	for(int st=0;st<=(sz-1);st++){
		int sum =0;
		for(int end=st; end<=(sz-1);end++){
			sum +=arr[end];
			MaxSum = max(sum,MaxSum);
			}
			
			}
			cout<<"Max SubArray sum = "<<MaxSum<<endl;
	return 0;
	}
