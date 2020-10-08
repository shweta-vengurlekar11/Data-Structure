#include<iostream>
using namespace std;

int Q[100],MaxSize,rear,front,count1;

//Addition of element from rear
void createQueue(int size)
{
	rear=-1;
	MaxSize=size;
	front=0;
	count1=0;
}
void enqueue(int e)
{
	rear=(rear+1) % MaxSize;
	count1++;
	Q[rear]=e;
}

//Deletion from queue from front

void dequeue()
{
	cout<<Q[front];
	count1--;
	front=(front+1) % MaxSize;
}

bool isFull()
{
	if(count1==MaxSize)
		return true;
	else
		return false;
}
bool isEmpty()
{
	if(count1==0)
		return true;
	else
		return false;
}
void printQueue()
{
	int i,c;
	for(i=front,c=0;c<count1;i=(i+1)%MaxSize,c++)
	{
		cout<<Q[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int size,no,ch=0;
	cout<<"enter size of the queue:";
	cin>>size;
	createQueue(size);
	do
		{
			
			cout<<"choices are:\n1:Enqueue\n2:Dequeue\n3:printqueue\n0:Exit\nEnter Your choice:";
	cin>>ch;
			switch(ch)
			{
			case 1:if(isFull())
					cout<<"Queue full\n\n";
				   else
				   {
					   cout<<"enter data:";
					   cin>>no;
					   enqueue(no);
				   }
				   break;
			case 2:
				if(isEmpty())
				
					cout<<"Queue empty\n\n";
				else					
					dequeue();
				    break;
			case 3:
				if(isEmpty()==1)
				   
					 cout<<"Queue empty\n\n";
				   
				   else

					printQueue();
				   
				   break;
				
			case 0: cout<<"exiting\n\n";
					break;
			default:cout<<"error\n\n";
						break;
			}
		
		}while(ch!=0);
	return 0;
}