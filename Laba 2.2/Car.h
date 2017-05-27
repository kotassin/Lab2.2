#define _CRT_SECURE_NO_WARNINGS
_CRT_SECURE_NO_WARNINGS

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

class car {
	string name;
	string brand;
	int number;
	int age;
	string body;
	double weight;
	double value;
	bool automatic;
	int site;
	int i;
public:
	
	car() {};
	car(car* st, int size);
	car(string model, int id, int year, string mk, double wt, bool at);
	car(const car &obj);
	~car() {};

	string toGetName() { return name; }
	void toSetName(string names) { name = names; }
	string toGetBody() { return body; }
	void toSetBody( string bodys) { body = bodys; }
	int toGetNumber() { return number; }
	void toSetNumber(int numb) { number = numb; }
	double toGetWeight() { return weight; }
	void toSetWeight(double wt) {  weight = wt; }

	void toInputFromFile(car &st, int size);
//	void toInputFromConsole(car* st, int size);
	void toPrint();           
	
	friend void origin();
	friend void error();
	friend void toCompare(car* st, int size);
	friend void toSortingName(car* st, car obj, int size);
	friend void toSortingNumber(car* st, car obj, int size);
};

void toSortingNum(car st, int size);

#endif CAR_H