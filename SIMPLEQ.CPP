#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#define n 5

int arr[5],size=0;

void Insert(int data)
{
   if(size==n)
   {
     cout<<"Queue is overflow"<<endl;

   }
   else
   {
    arr[size]=data;
    size++;
    cout<<"Enqueued"<<data<<endl;
   }

}
void pop()
{
   if(size==0)
   {
     cout<<"Queue is underflow"<<endl;

   }
   else
   {
     cout<<"Dequeued" <<arr[0]<<endl;
     for(int i=0;i<=size-1;i++)
      arr[i] = arr[i+1];
   }
     size--;
}
void display()
{
   if(size==0)
   {
     cout<<"Queue is underflow"<<endl;

   }
   else
   {
    cout<<"Queue element"<<endl;
    for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
   }
}



int main()
{
	int option,value;
	clrscr();
	while(1)

	{
		cout<<"\n\n-Queue Implementaion- \n\n";
		cout<<"1.Insert"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter an item to insert"<<endl;
				cin>>value;
				Insert(value);
				break;
			case 2:
				cout<<"Popped item: ";
				pop();
				break;
			case 3:
				cout<<"The elements are: ";
				display();
				break;
			case 4:
				exit(0);
				break;

			default:
				cout<<"Invalid option"<<endl;

		}
	}
	getch();
	return 0;
}