#include <iostream> 
#include <cassert>


using namespace std; 


class Stack {
public:
	Stack();
	~Stack();
	int size() const;
	bool empty() const;
	void push(int k);
	void pop();
	int & top();

private:
	void ensureCapacity(int c);

	int * data;
	int capacity;  // capacity of data array
	int n;         // number of elements in stack
};

Stack::Stack() {
    
}

Stack::~Stack(){
    
}
bool Stack::empty() const {
    if (n == 0) return true;  else return false; 
}
int main(int argc, char * args[]) {
    assert(s.empty());
/*	assert(s.size() == 0);
	s.push(1);
	assert(not s.empty());
	assert(s.size() == 1);
	assert(s.top() == 1);
	s.pop();	
	assert(s.empty());
	assert(s.size() == 0);

  */  
}