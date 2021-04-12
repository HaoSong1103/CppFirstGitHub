#pragma once
#include<string>
class Student
{
private:
	std::string name;
public:
	int stNum;
	std::string address;
	std::string getName();
	Student(int st, std::string,std::string);
	Student();
};

