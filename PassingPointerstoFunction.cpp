// PassingPointerstoFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Double_Data(int* ptr);
void swap(int* a, int* b);
void VectorFunc(vector<string>* v);

void ArrayFunction(int* array, int* sentinel);

void ArrayFunction(int* array, int* sentinel)
{
	while (*array != *sentinel)

		cout << *array++ << endl;

}

void VectorFunc(vector<string> *v)
{
	for (auto str : *v)
	{
		cout << str << endl;

	}
}

void Double_Data(int* ptr)
{
	*ptr *= 2;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	cout << "******************************************" << endl;
	int* ptr{ nullptr };
	int value{ 10 };

	cout << "Value : " << value << endl;
	Double_Data(&value);                     //passing address of 10
	cout << "Value : " << value << endl;

	ptr = &value;                            //assigning address of 20
	Double_Data(ptr);               
	cout << "Value : " << value << endl;
  
	cout << "******************************************" << endl;

	int x{ 100 };
	int y{ 200 };
	cout << "before x value :" << x << endl;
	cout << "before y value :" << y << endl;

	swap(&x, &y);                     //passing address of x and y 

	cout << "after x value:" << x << endl;
	cout << "after y value:" << y << endl;

	cout << "******************************************" << endl;

	vector<string> v{ "Smith" , "Rajor", "Ron" };
	VectorFunc(&v);

	cout << "******************************************" << endl;


	int array[]{ 54,87,69,75,3,-2 };
	int sentinel{ -2 };

	ArrayFunction(array, &sentinel);





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
