#include<iostream>

#include"PersonKeeper.cpp"

using namespace std;



PersonKeeper* PersonKeeper::p_instance = 0;
void main()
{
	setlocale(0, "");

	Stack<Person> firstStack(1);

    //Stack<int> thirdStack(1);
	//Stack<int> secondStack(1);
	//secondStack.Push(1);
	//Stack<int> thirdStack(secondStack);


	//PersonKeeper::instance().readPersons(firstStack);	
	//PersonKeeper::instance().writePersons(firstStack);
	PersonKeeper* a = PersonKeeper::instance();
	PersonKeeper* b = PersonKeeper::instance();

	a->val = a->val * 9;
	cout << b->val;

	//firstStack.Output();
	
	/*try {
		firstStack.Pop();
		firstStack.Pop();
	}
	catch (EStackEmpty& O) { std::cout << "Oops :), поймали исключение. " << O.what() << std::endl; }
		firstStack.Output(); */
	}