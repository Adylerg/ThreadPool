#include<iostream>

int addOne(int& A) {
	return A++;
}

void main(void) {
	int a = 1;
	int b = addOne(a);
std::cout << addOne(a)<< "  "<< a;
}