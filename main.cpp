#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class A {
private:
	int value;
public:
	A(int v): value(v) {}

	void print() { cout << "My value is " << value << endl; }

	A operator + (const A& obj) {
		A temp(0);
		temp.value = value + obj.value;
		return temp;
	}

	A operator ++ (int) {
		return A(value + 1);
	}
};

int main() {
	A a1 = A(2);
	A a2 = A(3);

	a1.print();
	a2.print();

	A a3 = a1 + a2;
	a3.print();

	A a4 = A(0);
	a4.print();

	A a5 = a4++;
	a5.print();
}