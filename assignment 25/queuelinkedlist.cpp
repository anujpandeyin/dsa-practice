#include<bits/stdc++.h>
using namespace std;
class Queue{
	private: 
	int data;
	Queue* next;
	Queue* start;
	Queue* end;
	int size;
	public:
	Queue(){
		start=end=NULL;
		size=0;
	}
	void insert(int val);
	void pop();
	int qsize(){
		return size;
	}
	int front(){
		return start->data;
	}
	bool isEmpty(){
		if(start==end)return true;
		return false;
	}
};
void Queue::insert(int val){
	if(isEmpty()){
		Queue* temp=new Queue();
		temp->data=val;
		temp->next=NULL;
		end=start=temp;
		size++;
	}else{
		Queue* temp=new Queue();
		temp->data=val;
		end->next=temp;
		end=temp;
		end->next=NULL;
		
		size++;
	}
}
void Queue::pop(){
	if(isEmpty()){
		return;
	}
	else{
		start=start->next;
		size--;
	}
}
int main(){
	Queue q; //constructor is called on this line
	q.insert(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.insert(5);
	q.insert(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
