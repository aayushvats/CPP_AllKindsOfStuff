#include<iostream.h>
#include<conio.h>
int T,N,f=0;
void main()
{
	clrscr();
	cin>>T;
	for(int k=0;k<T;++k)
	{
		cout<<endl;
		cin>>N;
		long int M[100][100],K[100];
		for(int i=0;i<N;++i)
		{
			cout<<endl;
			for(int j=0;j<N;++j)
			{
				cin>>M[i][j];
			}
		}
		int temp;
		for(int l=0;l<N;++l)
		{
			for(int m=0;m<N;++m)
			{
				for(int n=m+1;n<N;++n)
				{
					if(M[l][m]<M[l][n])
					{
						temp=M[l][m];
						M[l][m]=M[l][n];
						M[l][n]=temp;
					}
				}
			}
			int l=(N+1)/2;
			K[f]=M[i][l];
			++f;
		}
		for(int o=0;o<N;++o)
		{
			for(int p=i+1;p<N;++p)
			{
				if(K[o]<K[p])
				{
					temp=K[o];
					K[o]=K[p];
					K[p]=temp;
				}
			}

		}
		clrscr();
		l=(N+1)/2;
		cout<<K[l]<<endl;
	}
	getch();
}