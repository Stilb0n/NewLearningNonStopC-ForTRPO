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
	
	PersonKeeper() {
	}
	static PersonKeeper* _instance;
public:
	int aaa = 1;
	static PersonKeeper *instance()
	{
		if (_instance == nullptr) {
			_instance = new PersonKeeper;
			return _instance;
	}
		else {
			return nullptr;
		}
	//	static PersonKeeper res;
		//return res;
	}
	//PersonKeeper* _instance = nullptr;
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




	void writePersons(Stack<Person>& stack) {
		ofstream fout;
		fout.open("C:\\101\\infile.txt", ofstream::app);
		Stack<Person> a(stack);
		for (int i = 0; a.getDimension(); i++) {
			cout << i;
			fout << a.Pop() << endl;
		}
		fout.close();


	}
};