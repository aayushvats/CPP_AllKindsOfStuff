#include<iostream.h> 
#include<conio.h> 
#include<stdio.h> 

class publication
{
	char title[20];
	float price;
    public:
	void getdata()
	{
		cout<<"Enter title: ";
		gets(title);
		cout<<"Enter price: ";
		cin>>price;
	}
	void putdata()
	{
		cout<<"Title: "<<title<<endl;
		cout<<"Price: "<<price<<endl;
	}
};

class book: public publication
{
	int page_count;
    public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter page count: ";
		cin>>page_count;
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Page count: "<<page_count<<endl;
	}
};

class tape:public publication
{
	float play_time;
    public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Play time: ";
		cin>>play_time;
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Play time: "<<play_time<<endl;
	}
};

void main()
{
	clrscr();
	book b;
	tape t;
	b.getdata();
	b.putdata();
	t.getdata();
	t.putdata();
	getch();
}