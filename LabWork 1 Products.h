#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	string name;
	int Amount;
	double Price;

public:
	Product(string name, double price, int amount);
	double SumProduct();
	void print();
};

