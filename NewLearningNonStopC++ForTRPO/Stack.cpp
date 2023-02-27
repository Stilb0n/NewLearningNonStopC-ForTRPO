#include<iostream>
#include"EStackExeption.cpp"
using namespace std;
template<class T>
class Stack
{
private:
	int _maxSize = 0;
	T* arr;
	int _size = 0;
public:
	Stack(int aviableMemory = 10)
	{
		_maxSize = aviableMemory;
		arr = new T[_maxSize];
		_size = 0;
	}

public: void Output()
{
	for (int i = 0; i < _size; i++)
	{
		cout << arr[i] << "\t\n";
	}

}
	  void RandFilling()
	  {
		  for (int i = 0; i < _maxSize; i++)
		  {
			  arr[i] = rand() % 10;
		  }
	  }
	  void Push(T var)
	  {
		  _size++;
		  if (_size > _maxSize)
		  {
			  extensionOfArray(_maxSize);
		  }
		  arr[_size - 1] = var;
	  }
	  T Pop()
	  {
		  if (_size == 0)
		  {
			throw EStackEmpty("Стак пуст!");
		  }
		  _size--;
		  return (arr[_size]);

	  }
	  int getDimension()
	  {
		  return (_size);
	  }
	  void extensionOfArray(int extension)
	  {
		  T* arr2;
		  /* arr2 = new int[_maxSize];
		   for (int i = 0; i < _maxSize; i++)
		   {
			   arr2[i] = arr[i];
		   }*/
		  arr2 = new T[_maxSize + extension];
		  for (int i = 0; i < _maxSize; i++)
		  {
			  arr2[i] = arr[i];
		  }
		  delete[] arr;
		  _maxSize = _maxSize + extension;
		  // for (int i = 0; i < _maxSize; i++)
		  // {
		  arr = arr2;
		  // }
	  }
};
