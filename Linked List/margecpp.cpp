#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class marge_list
{
public:
	struct node *r1,*r2,*r3;
	void createList()
	{
		r1=r2=r3=NULL;
	}
	node* insert(int e)
	{
		node *t,*n;			
		n=new node;			 
		n->data=e;
		n->next=NULL;
		if(r1==NULL)		 
			r1=n;
		else				
		{
			t=r1;
			while(t->next!=NULL)
		    {
			t=t->next;
			}
			t->next=n;
	}
		return r1;
	}
	node* insert2(int e)
	{
		node *n,*t;			
		n=new node;			 
		n->data=e;
		n->next=NULL;
		if(r2==NULL)		 
			r2=n;
		else				
		{
			t=r2;
			while(t->next!=0)
		    {
			t=t->next;
			}
			t->next=n;
	}
		return r2;
	}
	node* merger(node *r1,node *r2)
	{
		node *n,*last;
		r3=NULL;
		while(r1!=NULL && r2!=NULL)
		{
			n=new node;
			if(r1->data<r2->data)
			{
				n->data=r1->data;
				r1=r1->next;
			}
			else
			{
				n->data=r2->data;
				r2=r2->next;
			}
			n->next=NULL;
			if(r3==NULL)
				r3=last=n;
			else
			{
				last->next=n;
				last=n;
			}
		}
		while(r1!=NULL)
		{
			n=new node;
			n->data=r1->data;
			n->next=NULL;
			r1=r1->next;
			last->next=n;
			last=n;
		}
		while(r2!=NULL)
		{
			n=new node;
			n->data=r2->data;
			n->next=NULL;
			r2=r2->next;
			last->next=n;
			last=n;
		}
		cout<<r3;
		return r3;
	}
	void printList(node* r5)
	{
		node *t;
		if(r5==NULL)
			cout<<"empty list";
		else
		{
			t=r5;
			while(t!=NULL)
			{
				cout<<t->data<<" ";
				t=t->next;
			}
		}
		cout<<"\n";
	}
};
int main()
{
	marge_list ll;
	node* r3,*r5;
	node* r4;
	int no,ch=0;
	ll.createList();
	do
		{
			
			cout<<"choices are:\n1:Insert in first list\n2:Insert in second list\n3:merge list\n4.display merged list\n0:Exit\nEnter Your choice:";
	cin>>ch;
			switch(ch)
			{
			case 1:
				cout<<"enter data:";
				cin>>no;
				r3=ll.insert(no);
				break;
			case 2:
				cout<<"enter data:";
				cin>>no;
				r4=ll.insert2(no);
				break;
			case 3:
				r5=ll.merger(r3,r4);
				break;
			case 4:
				ll.printList(r5);
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