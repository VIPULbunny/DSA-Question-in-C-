#include<iostream>
using namespace std;

int main(){
	int arr[]={3,-4,5,4,-1,7,-8};
	int sz = sizeof(arr)/sizeof(int);
	int maxsum = INT_MIN;
	int curSum =0;
	
	for(int i=0;i<sz;i++){
		curSum += arr[i];
		maxsum = max(maxsum, curSum);
		
		if(curSum <0){
			curSum = 0;
		}
	}
	cout<<"Max Sum Of Arr = "<<maxsum;
	return 0;
}
