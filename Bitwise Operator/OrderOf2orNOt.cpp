#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//2,4,8,16,32,64,128.........
int main()
	{
		int n;
		int count =0;
		cout<<"Enter any number to check if its in power of 2 or not \n";
		cin>>n;
		// LOOPS 
//		int i;
//		for(int i=1;i<=n ;i++){
//			if(pow(2,i) == n){
//				count += 1;
//			}
//		}
//		if(count >0){
//			cout<<"it is.!";
//		}
//		else{
//			cout<<"it is Not.!";
//		}


		// BITWISE operator
		for(int i=0;i<=n/2;i++){
			if(n == (1<<i))
			{
				cout<<"True";
				return 0;
			}
			else{
				count +=1;
			}
		}
		if(count >0){
			cout<<"False";
		}
	}
