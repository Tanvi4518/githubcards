#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter Your age :";
	cin>>age;
	
	
	while(age>=18)
	{
		cout<<"\nYou are eligible for voting"<<endl;
		break;
		
	}
	
	
		cout<<"\nYou are not eligible for voting";
	
	
	return 0;
	
	
}
