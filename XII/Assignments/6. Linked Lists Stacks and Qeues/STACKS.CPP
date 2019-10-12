#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define max_size 5
int stack[max_size],top=-1;
/*------ Function Prototype------------*/
void push();
void pop();
void peep();
void display();
/*-------------------------------------*/
void main()
{
	clrscr();
	int choice;
	do{
		//printf("\n");
		printf("\n\n--------STACK OPERATIONS-----------\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peep\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		printf("-----------------------");
		printf("\nEnter your choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
                                        push();
                                        break;
                        case 2:
                                        pop();
                                        break;
                        case 3:
                                        peep();
					break;
                        case 4:
                                        display();
					break;
                        case 5:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
	}while(choice!=5);
	getch();
}
void push() //Inserting element in to the stack
{
	int item;
        if(top==(max_size-1))
        {
                printf("\nStack Overflow:");
        }
        else
        {
                printf("Enter the element to be inserted:\t");
                scanf("%d",&item);
                top=top+1;
                stack[top]=item;
        }
}
void pop()      //deleting an element from the stack
{
        int item;
        if(top==-1)
        {
                printf("Stack Underflow:");
        }
        else
        {
                item=stack[top];
                top=top-1;
                printf("\nThe poped element: %d\t",item);
        }
}
void peep()
{
        if(top==-1)
        {
                printf("\nStack is empty:");
        }
        else
        {
                printf("The topmost element of the stack is %d",stack[top]);
        }
}
void display()
{
        int i;
        if(top==-1)
        {
                printf("\nStack is Empty:");
        }
        else
        {
        printf("\nThe stack elements are:\n" );
        for(i=top;i>=0;i--)
        {
                printf("%d\n",stack[i]);
        }
        }
}