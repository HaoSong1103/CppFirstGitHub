#pragma once
#include "TopStudent.h"
#include<string>
class TopOneStudent :
	public TopStudent
{
public:
	std::string teacher;
	TopOneStudent(std::string teacher) :TopStudent(100){
		this->teacher = teacher;
	}
};

