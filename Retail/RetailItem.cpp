#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "RetailItem.h"

RetailItem::RetailItem(string desc, int units, double p)
{
	description = desc;
	unitsOnHand = units;
	price = p;
}

string RetailItem::getDescription()
{
	return description;
}

int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}

double RetailItem::getPrice()
{
	return price;
}

float RetailItem::getStockValue()
{
	return unitsOnHand * price;
}
//
//void loadItems(vector<RetailItem> RetailVector)
//{
//	ifstream file;
//	RetailItem temp;
//	string tempPrice;
//	string tempUnits;
//
//	file.open("retailData.csv");
//	while (getline(file, temp.description))
//	{
//		getline(file, tempPrice);
//		getline(file, tempUnits);
//
//		temp.price = stof(tempPrice);
//		temp.unitsOnHand = stoi(tempUnits);
//
//		RetailVector.push_back(temp);
//	}
//	file.close();
//
//}