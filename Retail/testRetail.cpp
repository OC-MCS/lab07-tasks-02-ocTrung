#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

#include "RetailItem.h"
// code to test your RetailItem class goes here
void loadItems(vector<RetailItem> RetailVector);

int main()
{
	vector<RetailItem> vec;
	loadItems(vec);

	cout << vec[0].getDescription() << endl;
	cout << vec[0].getPrice() << endl;
	cout << vec[0].getUnitsOnHand() << endl;

	return 0;
}

void loadItems(vector<RetailItem> RetailVector)
{
	ifstream file;
	RetailItem temp(0,0,0);
	string tempPrice;
	string tempUnits;

	file.open("retailData.csv");
	while (getline(file, temp.description, ','))
	{
		getline(file, tempPrice, ',');
		getline(file, tempUnits);

		temp.price = stof(tempPrice);
		temp.unitsOnHand = stoi(tempUnits);

		RetailVector.push_back(temp);
	}
	file.close();

}