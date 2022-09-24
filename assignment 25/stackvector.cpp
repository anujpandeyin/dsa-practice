#include<bits/stdc++.h>
using namespace std;
class Stack{
	public:
	vector <int> a;
	bool isEmpty();
	void push(int val);
	bool Top(int &top);
	bool pop();
};
bool Stack::isEmpty(){
	if(a.size()==0){
		return true;
	}
	return false;
}
bool Stack::Top(int & top){
	if(isEmpty()){
		return false;
	}else{
		top=a[a.size()-1];
		return true;
	}
}
void Stack::push(int val){
	a.push_back(val);
}
bool Stack::pop(){
	if(isEmpty()){
        return false;
    }else{
        a.pop_back();
        return true;
    }
}
