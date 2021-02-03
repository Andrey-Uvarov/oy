#include<iostream>

using namespace std;

class myClass {
	private:
		int *_ptr;
	public:
		myClass();
		myClass(int val);
		myClass(const myClass& obj);
		~myClass();
		int getVal() { return *_ptr; }
		void print() { cout << "Ptr value = " << *_ptr << endl; }
};


myClass::myClass() {
	cout << "This is constructor myClass call" << endl;
	_ptr = new int;
	*_ptr = 1;
}


myClass::myClass(int val) {
	cout << "This is constructor myClass(int val) call" << endl;
	_ptr = new int;
	*_ptr = val;
}

myClass::myClass(const myClass& obj)
{
	_ptr = new int;
	*_ptr = *obj._ptr;
	cout << "This is copy cunstructor call" << endl;
}

myClass::~myClass() {
	cout << "this is destructor call " << endl;
	delete(_ptr);
}
	
void display(myClass obj) {
	cout << "Display " << obj.getVal() << endl;
}

myClass func() {
	myClass tmp(100);
	return tmp;
}

int main() {
	myClass b(20);
	b.print();
	display(b);
	cout << endl;

	myClass c = func();
	c.print();
	cout << endl;

	//int x = 10;
	//int y = x
	myClass d = c;
	b.print();
	cout << endl;

	return 0;
}








