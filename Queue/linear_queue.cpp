#include<iostream>
using namespace std;

int Q[100],MaxSize,rear,front;

//Addition of element from rear
void createQueue(int size)
{
	rear=-1;
	MaxSize=size;
	front=0;
}
void enqueue(int e)
{
	rear++;
	Q[rear]=e;
}

//Deletion from queue from front

void dequeue()
{
	cout<<Q[front];
	front++;
}

bool isFull()
{
	if(rear==MaxSize)
		return true;
	else
		return false;
}
bool isEmpty()
{
	if(front>rear)
		return true;
	else
		return false;
}
void printQueue()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<Q[i]<<"\n";
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