#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
}*head;
class linklist
{
	public:
	linklist(){
		head=NULL;
	}
	struct node *create_node(int data);
	void insertatbegin(int data);
	void insertatend(int data);
	void insertatpos(int data,int pos);
	int deletefrombegin();
	int deletefromend();
	int deletefrompos(int pos);
	void reverse();
	void display();
};
struct node *linklist :: create_node(int data){
	struct node *temp;
	temp=new(struct node); 
	if(data)
	{
		temp->data=data;
		temp->link=NULL;
		return temp;
	}
}
void linklist :: insertatbegin(int data){
	struct node* temp=create_node(data);
	if(head==NULL){
		head=temp;
	}
	else{
		struct node* temp2;
		temp2=head;
		head=temp;
		head->link=temp2;
	}
}
void linklist :: insertatend(int data){
	struct node* temp=create_node(data);
	if(head==NULL){
		head=temp;
	}
	else{
		struct node* temp2;
		temp2=head;
		while(temp2->link){
			temp2=temp2->link;	
		}
		temp2->link=temp;
	}
}
void linklist :: insertatpos(int data,int pos){	
	struct node* temp=create_node(data);
	if(pos<1){
		cout<<"Invalid position"<<endl; 
	}
	else
	{
		struct node* temp2;
		struct node* temp3;
		temp2=head;
		int i=1;
		while(temp2!=NULL)
		{
			if(i==pos)
			{
				temp2=temp3->link;
				temp3->link=temp;
				temp->link=temp2;
				break;	
			}
			temp3=temp2;
			temp2=temp2->link;
			i++;
		}
	}
}
int linklist :: deletefrombegin(){
	struct node* temp;
	int x;
	if(head==NULL){
		return 0;
	}
	else{
		temp=head;
		head=head->link;
		x=temp->data;
		delete temp;
		return x;
	}
}
int linklist :: deletefromend(){
	int x;
	if(head==NULL){
		return 0;
	}
	else{
		struct node* temp2;
		temp2=head;
		while(temp2->link->link){
			temp2=temp2->link;	
		}
		x=temp2->link->data;
		temp2->link=NULL;
	}
	return x;
}
int linklist :: deletefrompos(int pos){
	int x;
	if(pos<1){
		cout<<"Invalid position"<<endl; 
		return 0;
	}
	else
	{
		struct node* temp2;
		struct node* temp3;
		temp2=head;
		int i=1;
		while(temp2!=NULL)
		{
			if(i==pos)
			{
				x=temp3->link->data;
				temp3->link=temp2->link;
				return x;
			}
			temp3=temp2;
			temp2=temp2->link;
			i++;
		}
		cout<<"Invalid position"<<endl; 
		return 0;
	}
}
void linklist :: display(){
	if(head==NULL){
		cout<<"Linked-list is empty"<<endl;
	}																																																																																																																																																																																										
	else{
		struct node* temp;
		temp=head;
		while(temp){
			cout<<temp->data<<" ";
			temp=temp->link;	
		}
	}
	cout<<endl;
}
void linklist:: reverse() 
{ 
        node *current = head; 
        node *prev = NULL, *next = NULL; 
  
  
        while (current != NULL) 
        {  
            next = current->link; 
            current->link = prev;  
            prev = current; 
            current = next; 
        } 
        head = prev; 
} 
int main(){
	linklist l;
	int n,ch,pos;
	int z=1;
	while(z){
		cout<<"Enter 1 to insert node at beginning"<<endl;
		cout<<"Enter 2 to insert node at end"<<endl;
		cout<<"Enter 3 to insert node at particular position"<<endl;
		cout<<"Enter 4 to delete node from beginning"<<endl;
		cout<<"Enter 5 to delete node from end"<<endl;
		cout<<"Enter 6 to delete node from particular position"<<endl;
		cout<<"Enter 7 to display"<<endl;
		cout<<"Enter 8 to reverse"<<endl;
		cout<<"Enter 9 to exit"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter data you want to insert:";
				cin>>n;
				l.insertatbegin(n);
				break;
			case 2:	
				cout<<"Enter data you want to insert:";
				cin>>n;
				l.insertatend(n);
				break;
			case 3:
				cout<<"Enter data you want to insert:";
				cin>>n;
				cout<<"Enter the position where you want to insert a data:";
				cin>>pos;
				l.insertatpos(n,pos);
				break;
			case 4:
				cout<<"The deleted element is:"<<l.deletefrombegin()<<endl;
				break;
			case 5:
				cout<<"The deleted element is:"<<l.deletefromend()<<endl;
				break;
			case 6:
				cout<<"Enter the position from where you want to delete a data:";
				cin>>pos;
				cout<<"The deleted element is:"<<l.deletefrompos(pos)<<endl;
				break;
			case 7:
				l.display();
				break;
			case 8:
				l.reverse();
				break;
			case 9:
				z=0;
				break;
			default:
				cout<<"Invalid choice"<<endl;

		}
	}
	return 0;
}

