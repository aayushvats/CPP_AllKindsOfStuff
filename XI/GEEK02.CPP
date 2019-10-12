#include<iostream>
#include<curses.h>
#include<math.h>
int sumdig(long int a)
{
	int s=0,n=0;
	for(;a>0;a=a/10)
	{
		n=a%10;
		s=s+n;
	}
	return(s);
}
int main()
{
	int T;
	std::cin>>T;
	std::cout<<"\n";
	for(int i=0;i<T;++i)
	{
		int z;
		std::cin>>z;
		for(long int k=1;k<10000000;++k)
		{
			int j=sumdig(k);
			int n=pow(10,z);
			if(j==z && k%n==0)
			{
				std::cout<<"\n"<<k;
				break;
			}
		}
	}
	return(0);
}