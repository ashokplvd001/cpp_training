#include <iostream>
#include <string>
using namespace std;
class Parcel
{
	string p_parcelID;
	int p_weight;
	int p_distance;
	int p_cost;
	int calculateCost();
public:
	Parcel(string pname, int weight, int kms);
	void printCost();
};

Parcel::Parcel(string pname, int weight, int kms)
{
	p_parcelID = pname;
	p_weight = weight;
	p_distance = kms;
	p_cost = calculateCost();
}

int Parcel::calculateCost()
{
	if (p_weight <= 5)	 return p_distance * 5;
	else	return p_distance * 8;
}

void Parcel::printCost()
{
	cout << "Parcel " << p_parcelID << " | Cost: ?" << p_cost << endl;
}


int main()
{
	Parcel	p1("PX001", 3, 50);
	p1.printCost();

	Parcel	p2("PX002", 8, 50);
	p2.printCost();
}

