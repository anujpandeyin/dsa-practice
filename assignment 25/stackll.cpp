#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class stack{
	node* top;
	public:
	stack(){
		top=NULL;
		int size;
	}
	void push();
	void pop();
	int topstack(){
		return top->data;
	}
	bool isempty(){
		if(top==NULL){
			return true;
		}
		return false;
	}
	int sizestack(){
		return size;
	}
	
};
void stack::push(){
	if(isempty()){
		Node* temp=new Node();
		int val;
		cin>>val;
		temp->data=val;
		temp->next=NULL;
		temp=top;
		size++;
	}else{
		temp->next=top;
		top=temp;
		size++;
		
	}
}
void stack::pop(){
	if (isempty()){
		return;
	}else{
		Node* temp=top;
		top=top->next;
		delete temp;
	}
}
