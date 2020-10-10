#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
class DynamicStack
{
public:
	node *tos;
	void createStack()
	{
		tos=NULL;
	}
	void push(int e)
	{
		node *n;			
		n=new node;			 
		n->data=e;
		n->next=NULL;
		if(tos==NULL)		 
			tos=n;
		else				
		{
			n->next=tos;	
			tos=n;			
		}
		
	}
	void pop()
	{
		node *t;
		if(tos==NULL)
			cout<<"empty stack";
		else
		{	
			t=tos;
			tos=tos->next;
			cout<<"poped "<<t->data<<"\n\n";
			delete t;
		}
	}
	
	void printstack()
	{
		node *t;
		if(tos==NULL)
		{
			cout<<"empty stack\n\n";
		}
		else
		{
		t=tos;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<"\n\n";
	}
	}
};
int main()
{
	DynamicStack ds;
	int no,ch=0;
	ds.createStack();
	do
		{
			
			cout<<"choices are:\n1:push\n2:pop\n3:print stack\n0:Exit\nEnter Your choice:";
	cin>>ch;
			switch(ch)
			{
			case 1:
				cout<<"enter data:";
				cin>>no;
				ds.push(no);
				break;
			case 2:
				ds.pop();
				break;
			case 3:
				ds.printstack();
				break;
			case 0:
				cout<<"exiting\n\n";
				break;

			default:cout<<"error\n\n";
						break;
			}
		
		}while(ch!=0);
	return 0;
}
