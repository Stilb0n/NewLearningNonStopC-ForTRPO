#include<iostream>

#include"PersonKeeper.cpp"

using namespace std;
template<typename T>
class MyClass
{
public:
	void AddToStack()
	{

	}
private:
	T value;
};



void main()
{
	setlocale(0, "");





	/*fffaf
	fafafaf
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите размер горизонтальной стороны, затем вертикальной";
	int a, b,sum=0;
	cin >> a >>b;
	for (int i = 0; i < b; i++)
	{


	for (int j=0;j<a;j++){
		cout << "*";

	}
	cout << "\n";
	} */
	Stack<Person> firstStack(1);

    //Stack<int> thirdStack(1);
	//Stack<int> secondStack(1);
	//secondStack.Push(1);
	//Stack<int> thirdStack(secondStack);
	PersonKeeper::instance().readPersons(firstStack);
	
	PersonKeeper::instance().writePersons(firstStack);
	PersonKeeper a = PersonKeeper::instance();
	PersonKeeper b = PersonKeeper::instance();
	a.val = a.val * 8;
	cout << " ";
	cout << b.val << a.val;
	//firstStack.Output();
	
	/*try {
		firstStack.Pop();
		firstStack.Pop();
	}
	catch (EStackEmpty& O) { std::cout << "Oops :), поймали исключение. " << O.what() << std::endl; }
		firstStack.Output(); */
	}