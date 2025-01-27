#include<iostream>
using namespace std;

int search(int t,int size,int arr[]){
	
		for(int i=0;i<size;i++){
		if(arr[i]== t){
				cout<<"Target is at"<<i<<"th position";
				return i;
				}
			}
			return -1;
}

int main()
	{
		int t;
		cout<<"Enter target: ";
		cin>>t;
		int arr[]={4,2,1,6,9,8,5};
		
		int size = (sizeof(arr)/sizeof(int));
		
		if(search(t,size,arr) == -1){
			cout<<"element is not present";
		}
		return 0;
	}
