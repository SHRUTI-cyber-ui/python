#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node  *next;
	Node(int data){
		this->data=data;
		
		next=NULL;
	}
	void display(Node *head){
		Node  *temp=head;
    while(temp!=NULL){
    	cout<<"==>"<<temp->data;
    	temp=temp->next;
	}
  }
   Node  *addstart(Node *head, int data){ //time complexity :0(1)
  	Node *newNode=new Node(data);
  	newNode->next=head;
  	head=newNode;
  	return head;
  }
  Node *addAtpos(Node *head,int pos,int data){
  	Node *newNODE=new Node(data);
  	Node *temp=head;
  	Node  *temp1=head->next;
  	
  	pos--;              //2
  	
  	while(pos!=1){
  		temp=temp->next;
  		temp1=temp1->next;
  		pos--;             
	  }
	  temp->next=newnode;
	  newNode->next=temp1;
	  return head;
  }
 
};
int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
    Node *fourth=new Node(40);
      Node  *head=first;
    head->next=second;
    head->next->next=third;
    head->next->next->next=fourth;
    
    cout<<"\nPrint data of singly  /n";
   
   head->display(head);
     head=head->addAtpos(head,5);
   cout<<"\nPrint data of insert new node  /n";
   
   head->display(head);
    
    head=head->addstart(head,5);
   cout<<"\nPrint data of insert new node  /n";
   
   head->display(head);
    
  
	return 0;
}

 
