#include<iostream>
using namespace std;

int main()
	{
//		int marks[6]={90,86,54,54,88,52};
//		int size = (sizeof(marks)/sizeof(int));
//		int classroom[]={0,1,2,3,4,5,7,8,6};
//		cout<<marks[0]<<endl;
//		marks[0]=87;
//		cout<<marks[0]<<endl;
//		cout<<marks[-1];


//		cout<<classroom[0]<<endl<<classroom[3];
	//loop
//		for(int i=0; i<=(size-1);i++){
//			cout<<marks[i]<<endl;
//		}

		int size = 5;
		int marks[size];
		
		for(int i=0;i<size;i++){
			cin>>marks[i];
		}
		
		for(int i=0;i<size;i++)
		{
			cout<<marks[i];
		}
		
		return 0;
	}
