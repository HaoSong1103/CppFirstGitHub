#pragma once
#include "Student.h"
class TopStudent :
	public Student
{
public: 
	TopStudent(double mReward):Student(1,"zhangshan","beijing") {
		reward = mReward;
	};
private:
	double reward;
};

