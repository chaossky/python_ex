#include<iostream>
#include<cstring>

using namespace std;

int main() 
{

	struct Person
	{
		float height;
		float weight;
		char name[10];
		short grade;
	};

	Person person;
	person.height = 174.5;
	person.weight = 67.8;
	person.grade = 1;
	strcpy_s(person.name, 10, "David");

	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.grade << endl;
	cout << person.name << endl;

}