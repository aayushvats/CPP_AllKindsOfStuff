#include<conio.h>
#include<iostream.h>
#include<math.h>
int factorial(int i)
{
	int output = 1;
	for(int j =1; j<=i; ++j)
	{
		output*=j;
	}
	return output;
}
double sumfun(int n, int x)
{
	double result = 0;
	for(int i=0; i<n; ++i)
	{
		result = result + (pow(x,i+1) / (factorial(i+1)));
	}
	return(result);
}
void main()
{
	clrscr();

	int x,n;
	cout <<"Enter a Number"<<endl;
	cin>>x;
	cout<<"Enter another number"<<endl;
	cin>>n;
	double result=sumfun(n,x);
	cout<<endl<<"The result is  "<<result;
	getch();
}