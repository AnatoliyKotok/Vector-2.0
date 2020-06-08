#include "Vector.h"
#include<iostream>
using namespace std;

int main() {
	Vector arr(2,45);
	arr.print();
	cout << arr.empty() << endl;
	arr.SetVelue(1, 15);
	arr.print();
	cout<<arr.GetIndex(0)<<endl;
	arr.push_back(23);
	arr.print();
}