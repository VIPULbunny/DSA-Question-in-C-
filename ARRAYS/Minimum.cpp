#include<iostream>
using namespace std;

int main()
	{
		int smallest = INT_MAX;
		int largest = INT_MIN;
		int num[6]={5,7,-9,1,2,6};
		int size =6 ;
		
		for(int i=0;i<size;i++){
				if(num[i]<smallest){
					smallest=num[i];
				}
		}
		
		for(int i=0;i<size;i++){
			largest = max(num[i],largest);
		}
		cout<<smallest<<endl;
		cout<<largest;
		return 0;
	}
