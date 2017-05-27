#include "Car.h"

int main()
{
	int choice;
	const int size = 5;
	origin();   // функция выбора 
	car obj;
 
        cout<<"zhiooa";
	cin >> choice;
	switch (choice) {

	case 1:
	{ //error();
	obj.toInputFromFile(obj, size);
	cout << obj.toGetName()<<", "<<obj.toGetNumber()<<endl;
	break; }


	case 2:  
	{   car array2[size];
		car(array2, size);
		cout << endl;

		for (int i = 0; i < size; i++) {
			array2[i].toPrint();
		}
		toCompare(array2, size);
	break;
	}
	
	case 3:
	{cout << endl;
	car array3[size] = { car("Audi", 2222356, 2010, "sedan", 1656.1, 1),
						car("BMW", 2154567, 2015, "phaeton", 1754.5, 0),
						car("Porshe", 3214569, 2016, "cabriolet", 1811.5, 1),
						car("Hummer", 4744567, 2013, "crossover", 2377.1, 0),
						car("Tesla", 1236547, 2016, "convertible", 1695.9, 1) };

	array3[0].toPrint();
	array3[1].toPrint();
	array3[2].toPrint();
	array3[3].toPrint();
	array3[4].toPrint();

	toCompare(array3, size);
	toSortingName(array3, obj, size);
	toSortingNumber(array3, obj, size);
	array3[2] = array3[3];
	
	break; }
	
	default: break;
	}
	//toSortingNumber(array3, obj, size);
	toSortingNum(obj, size);
	
	system("pause");
	return 0;
}