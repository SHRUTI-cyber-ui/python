//stack impl.using array

#include <iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;

void push(int data){
	if(top==N-1){
		cout<<"this is overflow condition";
	}
	//  step1: check overflow condition
	else{
		//step2: increase top by1
		
		top++;
		
		//store data
		stack[top]=data;
		cout<<"\ndata insert sucess";
	}
}
int pop(){
	//step1: check under flow
	int value=0;
	if(top==-1){
		cout<<endl<<"under flow condition";
	}else{
		//step2: store top element value
		value=stack[top];
		// step3 : decrease  by top by1
		top--;
	}
	//step4: return deleted value
	
	return value;
}
int peek(){
	if(top==-1){
		cout<<"\nUnder flow";
	}else{
		return stack[top];
	}
}
bool isempty(){
	if(top==-1){
		return true;
		
	}
	else{
		return false;
	}
}

bool isFull(){
	if(top==N-1){
		return true;
		
	}
	else{
		return false;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	cout<<endl<<"check stack is full:"<< boolalpha<<isFull();

	
	cout<<endl<<"check stack is empty:"<< boolalpha<<isempty();
	cout<<"\n top element of the stack:"<<peek();
	cout<<"\n deleted data:"<<pop();
	cout<<"\n deleted data:"<<pop();
	cout<<"\n top element of the stack:"<<peek();

	
	
	cout<<"\n deleted data:"<<pop();
	cout<<"\n deleted data:"<<pop();
    cout<<"\n deleted data:"<<pop();
    cout<<"\n deleted data:"<<pop();
    cout<<"\n deleted data:"<<pop();
    
    cout<<"\n deleted data:"<<pop();



	
//	push(60);
	
	return 0;
}

