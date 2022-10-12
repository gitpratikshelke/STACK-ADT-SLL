//title: stack as an ADT using sll
//Roll no:07
//Name-Pratik Shelke
// date-12/10/22



#include<iostream>
using namespace std;
  class stack
  {
  	struct node
  	{
  		int data;
  		struct node*next;
  	};
  
  node*top;
  public:
  stack()
  {
  	top=NULL;
  }
  
  void push(int x);
  int pop();
  int isEmpty();
  int isFull();
  int showTop();
  void display();
  };
  
  int stack::isEmpty()
  {
  	if(top==NULL)
  	{
  		return 1;
  	}
  	return 0;
  }
  void stack::push(int x)
  {
  	node*p;
  	p=new node;
  	p->next=NULL;
  	p->data=x;
  	if(top==NULL)
  	{
  		top=p;
  	}
  	else
  	{
  		p->next=top;
  		top=p;
  	}
  }
  int stack::pop()
  {
  	node*temp;
  	int x;
  	x=top->data;
  	temp=top;
  	top=top->next;
  	free(temp);
  	return x;
  }
  int stack::showTop()
  {
  	return top->data;
  }
  
  void stack::display()
  {
  	node*temp=top;
  	while(temp!=NULL)
  	{
  		cout<<"\n"<<temp->data<<endl;
  		temp=temp->next;
  
  	}
  }
  int main()
  {
  	stack s;
  	int ch;
  	int x;
  	
  	while(1)
  	{
  		cout<<"\n....Menu....";
  		cout<<"n1.push\n2.pop\n3.display\n4.showtop\n5.empty";
  		cout<<"\nenter your choice:";
  		cin>>ch;
  		switch(ch)
  		{
  			case 1:
  			cout<<"enter the value of x:";
  			cin>>x;
  			s.push(x);
  			s.display();
  			break;
  			
  			case 2:
  			if(!s.isEmpty())
  			{
  				x=s.pop();
  				cout<<x;
  			}
  			else
  			{
  				cout<<"stack is empty:";
  			}
  			break;
  			
  			case 3:
  			s.display();
  			break;
  			
  			case 4:
  			cout<<s.showTop();
  			break;
  			
  			
  			case 5:
  			if(!s.isEmpty())
  			{
  				s.display();
  				
  			}
  			else
  			{
  				cout<<"stack is full";
  			}
  			
  			break;

  		}
  	}
  	return 0;
  }
  
  
