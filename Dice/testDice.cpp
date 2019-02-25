#include<iostream>
#include<iomanip>
using namespace std;

#include "Die.h" // client code to use the Die class goes here

void displayPct(int array[], int size);

int main()
{
	const int SIX_SIZE = 6;
	const int TWELVE_SIZE = 12;

	Die sixSide(SIX_SIZE);
	Die twelveSide(TWELVE_SIZE);
	int sixCounter[SIX_SIZE + 1] = { 0 };
	int twelveCounter[TWELVE_SIZE + 1] = { 0 };
	int sixRollVal, twelveRollVal;

	for (int i = 0; i < 1000000; i++)
	{
		sixSide.roll();
		twelveSide.roll();

		sixRollVal = sixSide.getValue();
		twelveRollVal = twelveSide.getValue();

		for (int j = 1; j <= 6; j++)
		{
			if (sixRollVal == j)
			{
				sixCounter[j]++;
			}
		}
		for (int k = 1; k <= 12; k++)
		{
			if (twelveRollVal == k)
			{
				twelveCounter[k]++;
			}
		}

	}
	displayPct(sixCounter, SIX_SIZE);
	cout << endl;
	displayPct(twelveCounter, TWELVE_SIZE);

	return 0;
}

void displayPct(int array[], int size)
{
	float pctVal;
	cout << "Stats for " << size << " sided die:" << endl;
	for (int i = 1; i <= size; i++)
	{
		pctVal = (array[i] / 1000000.0) * 100.0;
		cout << fixed << setprecision(2);
		cout << "Side " << i << ": " << pctVal << "%" << endl;
	}

}