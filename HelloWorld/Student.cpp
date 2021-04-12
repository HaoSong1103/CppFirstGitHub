#include "Student.h"
#include <iostream>
#include<string>

std::string Student::getName()
{
	std::cout << "getName" << std::endl;
	return name;
}

Student::Student(int st, std::string mName, std::string mAddress)
{
	name = mName;
	stNum = st;
	address = mAddress;
}

Student::Student()
{
	stNum = 0;
	address = "beijing";
	name = "zhangshan";

}
