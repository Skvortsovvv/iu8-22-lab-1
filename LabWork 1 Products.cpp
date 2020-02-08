#include "Products.h"

Product::Product(string name, double price, int amount) {
	this->name = name;
	Price = price;
	Amount = amount;
}

double Product::SumProduct() {
	return Price * Amount;
}

void Product::print() {
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Amount: " << Amount << endl;
	cout << "Price: " << Price << endl;
	cout << "Sum products: " << SumProduct();
}