#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
class dll
{
public:
	struct node *root;
	void createdll()
	{
		root=NULL;
	}
	void insertleft(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->left=n->right=NULL;
		if(root==NULL)
		{
			root=n;
		}
		else
		{
			n->right=root;
			root->left=n;
			root=n;
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
			if(root->right==NULL && root->left==NULL)
			{
				root=NULL;
				delete t;
			}
			else{
			root=root->right;
			root->left=NULL;
			cout<<"deleting :"<<t->data;
			delete t;
			}
		}
	}
	void insertright(int e)
	{
		node *n,*t;
		n=new node;
		n->data=e;
		n->right=n->left=NULL;
		if(root==NULL)
		{
			root=n;
		}
		else
		{
			t=root;
			while(t->right!=NULL)
			{
				t=t->right;
			}
			t->right=n;
			n->left=t;
		}
	}
	void deleteright()
	{
		node *t,*t2;
		if(root==NULL)
			cout<<"empty list\n";
		else
		{
			t=root;
			if(root->right==NULL && root->left==NULL)
			{
				root=NULL;
				delete t;
			}
			else{
			
			while(t->right!=NULL)
			{
				t=t->right;
			}
			t2=t->left;
			t2->right=NULL;
			cout<<"deleting :"<<t->data;
			delete t;
			}
		}
	}
	void reverseprint()
	{
		node *t;
		if(root==NULL)
			cout<<"empty list\n\n";
		else
		{
			t=root;
			while(t->right!=NULL)
			{
				t=t->right;
			}
			while(t!=NULL)
			{
				cout<<t->data<<" ";
				t=t->left;
			}
	}
	}
};
int main()
{
	int ch=0,no;
	dll cl;
	cl.createdll();
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
				cl.reverseprint();
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