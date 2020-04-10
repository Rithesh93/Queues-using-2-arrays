#include <iostream>
#define size 5
using namespace std;
int top_1=-1;
int top_2=-1;
int s1[30];
int s2[30];
int data;
class queues
{
public:
    void push_1();
    void pop_1();
    void transfer();
    void display();
};
void queues::push_1()
{
    if(top_1==size-1)
    {
        cout<<"\n stack is full";
    }
    else
    {
        cout<<"\n enter the element to be inserted:";
        cin>> data;
        top_1++;
        s1[top_1]=data;
    }
}
void queues::transfer()
{
    if(top_1==-1)
    {
        cout<<"\n Stack empty. Cannot transfer";
    }
    else
    {
        top_2++;
        s2[top_2]=s1[top_1];
        top_1--;
    }
}
void queues::pop_1()
{
    if(top_2==-1)
    {
        cout<<"\n stack_2 is empty";
    }
    else
    {
       data=s2[top_2];
       cout<<"\n the popped out element is: " << data;
       top_2--;
    }
}
void queues::display()
{
    if(top_2==-1)
    {
        cout<<"\n stack 2 is empty";
    }
    int i;
    for(i=top_2;i>=0;i--)
    {
        cout<< " "<< s2[top_2];
    }
}
int main()
{
   queues q;
   int choice, c;
   while(choice)
   {
cout<<"\n enter the choice: ";
   cout<<"\n 1. PUSH 2. TRANSFER TO ANOTHER STACK 3. POP 4. DISPLAY 5. EXIT";
   cin>> c;
       switch(c)
       {
           case 1: q.push_1();
           break;
           case 2: q.transfer();
           break;
           case 3: q.pop_1();
           break;
           case 4: q.display();
           break;
           case 5: exit(0);
       }
       cout<<"\n DO YOU WANT TO CONTINUE: 1 FOR YES, 0 FOR NO";
       cin>>choice;
   }
   return 0;
}
