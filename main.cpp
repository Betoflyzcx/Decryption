#include <iostream>
#include <stdio.h>
#include <gmpxx.h>
#define ask std::cout<<"Enter your: \t" 
#define s 57
#define skipline std::cout<<std::endl;

 //other libraries
#include "BigIntegerLibrary.hh"
// f declarations
int pow(int x,int y);
int main()
{
	int Decrypt[s] = {10, 7, 58, 30, 23, 62,
	7, 64, 62, 23, 62, 61,
	7, 41, 62, 21, 7, 49,
	75, 7, 69, 53, 58, 37,
	37, 41, 10, 64, 50, 7,
	10, 64, 21, 62, 61, 35,
	62, 61, 62, 7, 52, 10,
	21, 58, 7, 49, 75, 7,
	62, 26, 22, 53, 30, 21};
	/*std::cout<<Decrypt[0];
	std::cout<< pow(Decrypt[0],33)<<"\n\n";
	int d,c,n;
	int m[s];
	ask;
	std::cout<< "d-value\n";
	scanf("%d", &d);
	ask;
	std::cout<<"n-value \n";
	scanf("%d", &n); 
	skipline;
	for(int i =0; i<s ;i++)
	{
		m[i]= pow(Decrypt[i],37)%77;

		std::cout << " " << m[i];
		if(i%4==0&& i!=0) skipline;
	}
	skipline*/
	return 0;
}

int pow(int x,int y)
{
	int ans=1;
	for(int i=0; i<y; i++)
	{
		ans=ans*x;
	}
	return ans;
}
