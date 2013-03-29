#include <iostream>
#include <string>
using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(float& a, float& b) {
	float tmp = a;
	a = b;
	b = tmp;
}

void swap(string& a, string& b) {
	string tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int int_a = 1, int_b = 2;
	cout << "整数：\n交换前: a = " << int_a << ", b = " << int_b << endl;
	swap(int_a, int_b);
	cout << "交换后: a = " << int_a << ", b = " << int_b << endl;
	
	float float_a = 1.1, float_b = 2.2;
	cout << "\n\n浮点数：\n交换前: a = " << float_a << ", b = " << float_b << endl;
	swap(float_a, float_b);
	cout << "交换后: a = " << float_a << ", b = " << float_b << endl;
	
	string string_a = "abc", string_b = "efg";
	cout << "\n\n字符串：\n交换前: a = " << string_a << ", b = " << string_b << endl;
	swap(string_a, string_b);
	cout << "交换后: a = " << string_a << ", b = " << string_b << endl;
	
	return 0;
}