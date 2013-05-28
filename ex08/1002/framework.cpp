#include<iostream>
#include"source.cpp"
using namespace std;

int main()
{
	Base* bp;
	bp = new Rectangle(0.0, 3.14159/2.0, 100);
	bp-> integrate();
	bp->print();

	bp = new Ladder(0.0, 3.14159/2.0, 100);
	bp-> integrate();
	bp->print();

	bp = new Simpson(0.0, 3.14159/2.0, 100);
	bp-> integrate();
	bp->print();

	bp = new Rectangle(0.0, 3.14159/2.0, 10000);
	bp-> integrate();
	bp->print();

	bp = new Ladder(0.0, 3.14159/2.0, 10000);
	bp-> integrate();
	bp->print();

	bp = new Ladder(0.0, 3.14159/2.0, 10000);
	bp-> integrate();
	bp->print();
	return 0;
}