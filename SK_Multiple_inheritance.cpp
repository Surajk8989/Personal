
#include<iostream>
using namespace std;

class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};


class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This is a 4 wheeler Vehicle\n";
	}
};


class Car : public Vehicle, public FourWheeler {

};


int main()
{
	
	Car obj;
	return 0;
}
