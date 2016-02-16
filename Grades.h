#pragma once
#include <string>
#include <iostream>
class Grade
{
	std::string name="";
	double quiz1=0;
	double quiz2=0;
	double midterm=0;
	double fine=0;
	double totalGrade=0;


	
	void calculateTotal()
	{
		double qTotal;
		double midTotal;
		double finTotal;

		qTotal =quiz1+ quiz2;
		qTotal /= 20;
		qTotal *= 25;

		midTotal =midterm;
		midTotal /= 100;
		midTotal *= 25;

		finTotal = fine;
		finTotal /= 100;
		finTotal *= 50;

		totalGrade = finTotal + midTotal + qTotal;
	}

public:

	
	double getGradeTotal()
	{
		calculateTotal();
		return totalGrade;
	}
	void setName(std::string n)
	{
		name = n;
	}
	
	void fillGrade( double q1, double q2, double mid, double fin)
	{

		 
		 quiz1=q1;
		 quiz2=q2;
		 midterm=mid;
		 fine=fin;

	}
	void printGrades()
	{
		std::cout << name << " " << quiz1 << " " << quiz2 << " " << midterm << " " << fine;
	}
	std::string getLetterGrade()
	{
		calculateTotal();
		if (totalGrade >= 90.0)
		{
			
			return " A";
		}
		else if (totalGrade >= 80.0&&totalGrade<90)
		{
			return " B";
		}
		else if (totalGrade >= 70.0&&totalGrade<80)
		{
			return " C";
		}
		else if (totalGrade >= 60.0&&totalGrade<70)
		{
			return " D";
		}
		else
		{
			return " F";
		}
	}
};