#include "Stack.cpp"
#include <string>
#include <iostream>
#include<fstream>
using namespace std;
class Person {
private:
	/*string name;
	string surname;
	string patronomic;*/
	string FullName;
public:
	Person()
	{
		FullName = "a";
	}
	Person(string fullname)
	{
		this->FullName = fullname;
	}
	friend ostream& operator<<(ostream& os, const Person& person)
	{
		os << person.FullName;
		return os;
	}
	friend ofstream& operator<<(ofstream& os, const Person& person)
	{
		os << person.FullName;
		return os;
	}
	/* Person()
	{
		name = "a";
		surname = "a";
		patronomic = "a"; 
	}
	Person(string name, string surname, string patronomic)
	{
		this->name = name;
		this->surname = surname;
		this->patronomic = patronomic;
	} 
	friend ostream& operator<<(ostream& os, const Person& person)
	{
		os << person.name << " " << person.surname << " " << person.surname;
		return os;
	} */
};

 
class PersonKeeper
{
private:
public:
	void readPersons(Stack<Person>& stack) {
		ifstream fin;
		fin.open("C:\\101\\myfile.txt", ifstream::app);
		string line;
		if (fin.is_open()) {
			while (getline(fin, line))
			{
				stack.Push(line);
			}
		} fin.close();
	};



		/*до пробела записываем имя в пёрсон нейм, потом после пробела фамилию до пробела
		 потом отчество помещаем готовый объект класса пёрсон в класс стек*/
	void writePersons(Stack<Person>& stack) {
		ofstream fout;
		fout.open("C:\\101\\infile.txt", ofstream::app);
		for (int i = 0; stack.getDimension(); i++) {
			cout << i;
			fout << stack.Pop() << endl;
		}
		fout.close();


	}
};