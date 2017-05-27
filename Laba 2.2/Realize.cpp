#include "Car.h"

  // конструктор
car::car(string model, int id, int year, string mk, double wt, bool at){
	name = model; number = id; age = year; 
	body = mk; weight = wt; automatic = at;
}

// Конструктор
car::car(car* st, int size)
{
	string names, bodys;
	int numb; 
	double wt;
	for (int i = 0; i < size; i++) {
		cout << "Input name: "; cin >> names; st[i].toSetName(names);
		cout << "Input body: "; cin >> bodys; st[i].toSetBody(bodys);
		cout << "Input number: "; cin >> numb;  st[i].toSetNumber(numb);
		cout << "Input weight: "; cin >> wt;  st[i].toSetWeight(wt);
	}
}

   //конструктор
car::car(const car &obj) {
	site = obj.site;
	cout << "The copy constructor is called up." << endl;
}

// дружественная функция
void origin() {
	cout << " Please, select the input method: 1 - Fail" << endl;
	cout << "                                  2 - Console" << endl;
	cout << "                                  3 - Entereted information" << endl;
}

// дружественная функция 
void error() {
	cout << " We apologize for the disruption in the work of programm. " << endl;
}

  // вывод на консоль
void car::toPrint()
{
	cout << "Brand of machine - " << toGetName() << endl << "Body type - " << toGetBody();
	cout << endl << "State number - " << toGetNumber() << endl << endl;

}


  //дружественная функция
void toCompare(car *st, int size) {
      for ( int i = 0; i < size+1; i++) {
			if (st[i].toGetWeight() > st[i + 1].toGetWeight()) {
				st[i + 1].toSetWeight(st[i].toGetWeight());
			}
		}
	  cout <<"The heaviest car weighs: "<< st[size].toGetWeight() << endl;
}

//пузырьковая сортировка по именам
void toSortingName(car* st, car obj, int size) {

	for (int a = 0; a < size; a++)
		for (int b = size - 1; b >= 1; b--) {
			if (st[b].toGetName() < st[b - 1].toGetName()) {
				obj.toSetName(st[b].toGetName());
				st[b].toSetName(st[b - 1].toGetName());
				st[b - 1].toSetName(obj.toGetName());
			}
		}
	cout << "Sorting by machine names: ";
	for (int a = 0; a < size; a++) {
		cout << st[a].toGetName() << "   " ;
	}
	cout << endl;
}

//пузырьковая сортировка по номерам
void toSortingNumber(car* st, car obj, int size) {

	for (int a = 0; a < size; a++)
		for (int b = size - 1; b >= 1; b--) {
			if (st[b].toGetNumber() < st[b - 1].toGetNumber()) {
				obj.toSetNumber(st[b].toGetNumber());
				st[b].toSetNumber(st[b - 1].toGetNumber());
				st[b - 1].toSetNumber(obj.toGetNumber());
			}
		}
	cout << "Sorting by machine names: ";
	for (int a = 0; a < size; a++) {
		cout << st[a].toGetNumber() << "   ";
	}
	cout << endl;
}

void car::toInputFromFile(car &st, int size){      //пока её не подключать!!! Сбой в прграмме
	int tempInt = 0;   string tempString = "";
	ifstream in("in.txt");
		while (in >> tempString)
		{
			st.toSetName(tempString); 
			in >> tempInt;  
			st.toSetNumber(tempInt);
		}
	
	in.close();
}               

void toSortingNum(car st, int size) {
	cout << st.toGetNumber()<<" ";
}

/*
//пузырьковая сортировка
void toSorting(car* st, car obj, int size) {

	for (int a = 0; a < size; a++)
		for (int b = size - 1; b >= 1; b--) {
			if (st[b] < st[b - 1]){
				obj = st[b]; 
				st[b] = st[b - 1];
				st[b - 1] = obj; }
		}
}*/