//program modified by poncho4all
//Postfix Calculator using Stack for positive and negative integers
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
struct Node{
    float number;
    Node *next;
};

Node* push(Node *stack, float data){
  Node *utility;
  utility = new Node;
  utility -> number = data;
  utility -> next = stack;
  return utility;
}

Node* pop(Node *stack, float &data){
  Node *temp;
  if (stack != NULL){
    temp = stack;
    data = stack -> number;
    stack = stack -> next;
    delete temp;
  }
  else cout << "\nERROR: Empty stack.\n";
  return stack;
}

int main()
{
  float answer=0.f, operand1=0.f, operand2=0.f;
  char ch = ' ';
  int neg=0,cont=0,copy;
  Node *utility, *top;
  utility = new Node;
  utility -> number = 0.f;
  utility -> next = NULL;
  top = new Node;
  top -> number = 0.f;
  top -> next = utility;
  cout << "Enter the postfix operation: ";
  while(ch != '\n')
    {
	cin >> ch;
	cont++;
	if(cont<4&&ch=='-'){
		neg=-1;
		ch=' ';
	}
	int operand = 0;

	while(ch == ' '){

	  cin >> ch;

	}

	if((ch >= '0')&&(ch <= '9')){

	  while(ch != ' '){

	    operand = operand*10 + (ch-48);

	    cin >> ch;

	    if(neg==-1 && operand1>=0 ){

		operand=operand * neg;

	    }

	  }

	  neg=0;

	  top = push(top, operand);

	}else{

	  copy=operand1;

	  top=pop(top, operand1);

	  top=pop(top, operand2);

	  if(operand2<0&&copy>0){

	      operand2*=-1;

	      if(cont>4)

		  operand2*=-1;

	  }

	  switch(ch){

	    case '+': answer = operand2 + operand1;break;

	    case '-': answer = operand2 - operand1;break;

	    case '*': answer = operand2 * operand1;break;

	    case '/': answer = operand2 / operand1;break;

	  }

	  top=push(top, answer);

	}

    }

  pop(top, answer);

  cout << "Answer: " << answer << endl;
  getch();
  return 0;

}

