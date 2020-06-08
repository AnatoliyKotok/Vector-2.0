#pragma once
class Vector
{
	int* arr;
	size_t size;
	size_t coption;
public:
	Vector() = default;
	Vector(size_t size) {

	}
	Vector(size_t size, int value = 0);
    void fill(int value);
	void SetVelue(int index,int value);
	void print();
	int GetIndex(int index);
	int getsize() {
		return size;
	}
	bool empty();
	void push_back(int element);

	~Vector(){
		if (arr != nullptr) {
			delete[]arr;
			arr = nullptr;
		}
	}
};

