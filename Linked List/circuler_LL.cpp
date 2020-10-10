#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class cll
{
public:
	struct node *root,*last;
	void createcll()
	{
		root=last=NULL;
	}
	void insertleft(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->next=NULL;
		if(root==NULL)
		{
			root=last=n;
			last->next=root;
		}
		else
		{
			n->next=root;
			root=n;
			last->next=root;
		}
	}
	void deleteleft()
	{
		node *t;
		if(root==NULL)
			cout<<"empty list\n";
		else
		{
			t=root;
			root=root->next;
			last->next=root;
			cout<<"deleting :"<<t->data;
			delete t;
		}
	}
	void insertright(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->next=NULL;
		if(root==NULL)
		{
			root=n;
			last->next=root;
		}
		else
		{
			last->next=n;
			last=n;
			last->next=root;
		}
	}
	void deleteright()
	{
		node *t,*t2;
		if(root==NULL)
			cout<<"empty list\n";
		else
		{
			t=t2=root;
			while(t!=last)
			{
				t2=t;
				t=t->next;
			}
			last=t2;
			last->next=root;
			cout<<"deleting :"<<t->data;
			delete t;
		}
	}
	void printcll()
	{
		node *t;
		if(root==NULL)
			cout<<"empty list\n\n";
		else
		{
			t=root;
			do{
				cout<<t->data<<" ";
				t=t->next;
			}while(t!=root);
	}
	}
};
int main()
{
	int ch=0,no;
	cll cl;
	cl.createcll();
	do{
		cout<<"choices are:\n1:Insert left\n2:Insert Right\n3:Delete left\n4.Delete Right\n5:Print List\n0:Exit\nEnter Your choice:";
		cin>>ch;
			switch(ch)
			{
			case 1:
				cout<<"enter data:";
				cin>>no;
				cl.insertleft(no);
				break;
			case 2:
				cout<<"enter data:";
				cin>>no;
				cl.insertright(no);
				break;
			case 3:
				cl.deleteleft();
				break;
			case 4:
				cl.deleteright();
				break;
			case 5:
				cl.printcll();
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