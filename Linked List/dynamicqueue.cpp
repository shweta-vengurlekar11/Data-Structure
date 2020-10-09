//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	struct node *next;
//};
//class DynamicQueue
//{
//public:
//	node *rear,*front;
//	void createQueue()
//	{
//		rear=front=NULL;
//	}
//	void Enqueue(int e)
//	{
//		node *n;			
//		n=new node;			 
//		n->data=e;
//		n->next=NULL;
//		if(rear==NULL)		 
//			rear=front=n;
//		else				
//		{
//			rear->next=n;	
//			rear=n;			
//		}
//		
//	}
//	void dequeue()
//	{
//		node *t;
//		if(front==NULL)
//			cout<<"empty queue";
//		else
//		{	
//			t=front;
//			front=front->next;
//			cout<<"poped "<<t->data<<"\n\n";
//			delete t;
//		}
//	}
//	
//	void printstack()
//	{
//		node *t;
//		if(front==NULL)
//		{
//			cout<<"empty queue\n\n";
//		}
//		else
//		{
//		t=front;
//		while(t!=NULL)
//		{
//			cout<<t->data<<" ";
//			t=t->next;
//		}
//		cout<<"\n\n";
//	}
//	}
//};
//int main()
//{
//	DynamicQueue ds;
//	int no,ch=0;
//	ds.createQueue();
//	do
//		{
//			
//			cout<<"choices are:\n1:push\n2:pop\n3:print queue\n0:Exit\nEnter Your choice:";
//	cin>>ch;
//			switch(ch)
//			{
//			case 1:
//				cout<<"enter data:";
//				cin>>no;
//				ds.Enqueue(no);
//				break;
//			case 2:
//				ds.dequeue();
//				break;
//			case 3:
//				ds.printstack();
//				break;
//			case 0:
//				cout<<"exiting\n\n";
//				break;
//
//			default:cout<<"error\n\n";
//						break;
//			}
//		
//		}while(ch!=0);
//	return 0;
//}