#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#define n 5

int arr[n], front=-1, rear=-1;

void Insert(int data)
{
    if((front==0 && rear==n-1) || (rear+1==front))
    {
        cout<<"Queue is overflow"<<endl;
    }
    else
    {
        if(front==-1) 
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%n;
        }
        arr[rear]=data;
        cout<<"Enqueued "<<data<<endl;
    }
}

void pop()
{
    if(front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        cout<<"Dequeued "<<arr[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
    }
}

void peep()
{
    if(front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        cout<<"Peeped "<<arr[front]<<endl;
    }
}

void display()
{
    if(front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        cout<<"Queue elements: ";
        int i=front;
        while(1)
        {
            cout<<arr[i]<<" ";
            if(i==rear) break;
            i=(i+1)%n;
        }
    }
}

int main()
{
    int option,value;
    clrscr();
    while(1)
    {
        cout<<"\n\n-Circular Queue Implementation- \n\n";
        cout<<"1.Insert"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Peep"<<endl;
        cout<<"5.Exit"<<endl;
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
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid option"<<endl;
        }
    }
    getch();
    return 0;
}
