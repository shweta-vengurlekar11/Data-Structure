//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	struct node *next;
//};
//class LL_implementation
//{
//public:
//	struct node *root;
//	void createList()
//	{
//		root=NULL;
//	}
//	void insertLeft(int e)
//	{
//		node *n;			//create node
//		n=new node;			 //memory allocation to node
//		n->data=e;
//		n->next=NULL;
//		if(root==NULL)		 //if only node available the make it root node
//			root=n;
//		else				//else connect to previous node
//		{
//			n->next=root;	//connect to root node
//			root=n;			//make new node as root node
//		}
//		
//	}
//	void insertRight(int e)
//	{
//		node *n,*t;
//		n=new node;
//		n->data=e;
//		n->next=NULL;
//		if(root==NULL)
//			root=n;
//		else
//		{
//			t=root;
//			while(t->next!=NULL)
//				t=t->next;
//			t->next=n;
//		}
//	}
//	void deleteLeft()
//	{
//		node *t;
//		if(root==NULL)
//			cout<<"empty list";
//		else
//		{	
//			t=root;
//			root=root->next;
//			cout<<"deleting "<<t->data;
//			delete t;
//		}
//	}
//	void deleteRight()
//	{
//		node *t2,*t;
//		if(root==NULL)
//			cout<<"empty list";
//		else
//		{
//			t=t2=root;
//			while(t->next!=NULL)
//			{
//				t2=t;
//				t=t->next;
//			}
//			t2->next=NULL;
//			cout<<"deleting "<<t->data;
//			delete t;
//		}
//	}
//	void printList()
//	{
//		node *t;
//		if(root==NULL)
//			cout<<"empty list";
//		else
//		{
//			t=root;
//			while(t!=NULL)
//			{
//				cout<<t->data<<" ";
//				t=t->next;
//			}
//		}
//		cout<<"\n";
//	}
//	bool search(int key)
//	{
//		node *t;
//		if(root==NULL)
//		{
//			cout<<"empty list";
//			return false;
//		}
//		else
//		{
//			t=root;
//			while(t!=NULL)
//			{
//				if(t->data==key)
//				{
//					
//					return true;
//				}
//				t=t->next;
//			}
//			return false;
//		}
//	}
//	void deletespecific(int key)
//	{
//		node *t,*t2;
//		if(root==NULL)
//			cout<<"empty list";
//		else
//		{
//			t=t2=root;
//			while(t!=NULL && t->data!=key)
//			{
//				t2=t;
//				t=t->next;
//			}
//			if(t!=NULL)
//			{
//				if(t==root)
//					root=root->next;
//				else if(t->next==NULL)
//					t2->next=NULL;
//				else
//					t2->next=t->next;
//			}
//			cout<<"deleting :"<<t->data;
//					delete t;
//		}		
//	}
//};
//int main()
//{
//	*LL_implementation ll;
//	int no,ch=0;
//	ll.createList();
//	do
//		{
//			
//			cout<<"choices are:\n1:Insert left\n2:Insert Right\n3:Delete left\n4.Delete Right\n5:delete Specific\n6:Print List\n7:Search in Queue\n0:Exit\nEnter Your choice:";
//	cin>>ch;
//			switch(ch)
//			{
//			case 1:
//				cout<<"enter data:";
//				cin>>no;
//				ll.insertLeft(no);
//				break;
//			case 2:
//				cout<<"enter data:";
//				cin>>no;
//				ll.insertRight(no);
//				break;
//			case 3:
//				ll.deleteLeft();
//				break;
//			case 4:
//				ll.deleteRight();
//				break;
//			case 5:
//				cout<<"enter data which you want to delete:";
//				cin>>no;
//				ll.deletespecific(no);
//				break;
//			case 6:
//				ll.printList();
//				break;
//			case 7:
//				cout<<"enter data which you want to Search:";
//				cin>>no;
//				if(ll.search(no))
//					cout<<"\nfound\n";
//				else
//					cout<<"\nnot found\n";
//				break;
//			case 0:
//				cout<<"exiting\n\n";
//				break;
//
//			default:cout<<"error\n\n";
//						break;
//			}
//		
//		}while(ch!=0);*/
//	return 0;
//}