#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#define n 5

class Dqueue
{

   int arr[n];
   int front,rear;
   public:
   Dqueue()
   {
     front=-1;
     rear=-1;
   }

 void insertfront(int data)
 {
   if(front==0)
   {
    cout<<"No space at Front"<<endl;
   }
   else if(front==-1)
   {

    front = rear = 0;
    arr[front]=data;
   }
   else
   {
     front--;
     arr[front]=data;
   }
     cout<<"Inserted: "<<data<<endl;
 }
 void insertrear(int data)
 {
  if(rear==n-1)
  {
    cout<<"No space at rear"<<endl;
  }
  else if(rear==-1)
  {
    front = rear = 0;
    arr[rear]=data;
  }
  else
  {
    rear++;
    arr[rear]=data;
  }
  cout<<"Inserted "<<data<< " at rear"<<endl;
 }
 void delfront()
 {
   if(front==-1)
   {

    cout<<"Front is empty"<<endl;
   }
   else if(front == rear)
   {
     cout<<"Deleted "<<arr[front] <<" from front" <<endl;
     front = rear =-1;
   }
   else
   {
    cout<<"Deleted "<<arr[front]<<" from front"<<endl;
    front++;
   }
 }

 void delrear()
 {
   if(rear==-1)
   {
    cout<<"Queue is empty"<<endl;
   }
   else if(front==rear)
   {
    cout<<"Deleted "<<arr[rear]<<" from rear"<<endl;
    front = rear = -1;
   }
    else
    {
     cout<<"deleted"<<arr[rear]<<endl;
     rear--;
    }
 }

  void display()
  {
     if(front==-1)
     {
      cout<<"Queue is empty"<<endl;
     }
     else
     {
      cout<<"Queue elements"<<endl;
      for(int i=front;i<=rear;i++)
       {
	cout<<arr[i]<<" ";
       }
     } cout<< endl;
   }
};
int main()
{
  clrscr();
  Dqueue q;
  int choice,value;
  while(1)
  {
    cout<<"\nDqueue operation: "<<endl;
    cout<<"1. insert Front" <<endl;
    cout<<"2. insert Rear" <<endl;
    cout<<"3. Delete Front" <<endl;
    cout<<"4. Delete Rear" <<endl;
    cout<<"5. Display" <<endl;
    cout<<"6. Exit" <<endl;
    cout<<"Enter your choice" <<endl;
    cin>>choice;

    switch(choice)
    {
      case 1:
	   cout<<"Enter a front value:"<<endl;
	   cin>>value;
	   q.insertfront(value);
	   break;
      case 2:
	   cout<<"Enter a rear value:"<<endl;
	   cin>>value;
	   q.insertrear(value);
	   break;
      case 3:
	   q.delfront();
	   break;
      case 4:
	   q.delrear();
	   break;
      case 5:
	   q.display();
	   break;
      case 6:
	   exit(0);
	   break;

      default:
	  cout<<"Invalid Choice"<<endl;
    }
  }
    getch();
    return 0;
}