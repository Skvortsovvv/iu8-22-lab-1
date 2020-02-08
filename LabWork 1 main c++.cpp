
#include "Products.h"

int main() {
	int n;
	cout << "Enter N: ";
	cin >> n;
	double SumAll = 0.0;
	Product** pProd;
	pProd = new Product * [n];
	for (int i = 0; i < n; i++) {
		string Name;
		double Price;
		int Amount;
		cout << endl << "Enter name: ";
		cin >> Name;
		cout << endl << "Enter amount: ";
		cin >> Amount;
		cout << endl << "Enter price: ";
		cin >> Price;
		pProd[i] = new Product(Name, Price, Amount);
	}
	for (int i = 0; i < n; i++) {
		pProd[i]->print();
	}
	for (int i = 0; i < n; i++) {
		SumAll += pProd[i]->SumProduct();
	}
	cout << endl << "Sum All: " << SumAll;
	for (int i = 0; i < n; i++) {
		delete pProd[i];
	}
	delete[]pProd;
	return 0;
}
