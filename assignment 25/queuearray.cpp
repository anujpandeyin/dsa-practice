#include <iostream>
using namespace std;
 
class Queue{
	int A[100000];
	int start;
	int end;
	
 
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
	//	cout<<"constructor is Called\n";
		start=0;
		end=0;
		
	}
 
	//push the value at the back
	void push(int val){
		//cout<<"pushing the val: "<<val<<" at the back of queue\n";
	
			A[end]=val;
			end++;
		
		
		
	}
 
	int front(){
	//	cout<<"returning the value at front\n";
		if(isEmpty()){
			return 0;
		}
		return A[start];
	}
 
	void pop(){
	//	cout<<"removing the first element\n";
		if(isEmpty()){
			return;
		}else{
			for(int i=0;i<end-1;i++){
				
				A[i]=A[i+1];
			}
			end--;
		}
	
		return;
	}
 
	int size(){
	//	cout<<"return the size of the queue\n";
		
		return (end-start);
	}
 
	bool isEmpty(){
	//	cout<<"returning if the queue is empty\n";
		if(end==start){
			return true;
		}
		return false;
	}
};
 
int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
