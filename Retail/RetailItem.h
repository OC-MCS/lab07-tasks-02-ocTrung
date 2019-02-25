#pragma once
#include <string>
using namespace std;

class RetailItem
{
private:


public:
	string description;
	int unitsOnHand;
	double price;
	RetailItem(string desc, int units, double p);
	string getDescription();
	int getUnitsOnHand();
	double getPrice();
	float getStockValue();
};