#include <iostream>
#include <fstream>
#include "Grades.h";


using namespace std;

int main()
{
	string name;
	double q1;
	double q2;
	double mid;
	double fin;
	
	
	string names[6];
	

	ifstream infile;
	infile.open("studentrecords.txt");
	Grade classGrades[7];


	Grade student1;
	Grade student2;
	Grade student3;
	Grade student4;
	Grade student5;
	Grade student6;
	Grade student7;

	classGrades[0] = student1;
	classGrades[1] = student2;
	classGrades[2] = student3;
	classGrades[3] = student4;
	classGrades[4] = student5;
	classGrades[5] = student6;
	classGrades[6] = student7;

	
	int i=0;
	while (i<7)
	{
		infile >> name;
		infile >> q1;
		infile >> q2;
		infile >> mid;
		infile >> fin;
		classGrades[i].setName(name);
		classGrades[i].fillGrade (q1, q2, mid, fin);
		i++;
	}
	
	for (int i = 0; i < 6; i++)
	{
		classGrades[i].printGrades();
		cout << " Total grade: "<< classGrades[i].getGradeTotal() <<classGrades[i].getLetterGrade() << endl;
	}

	cin.get();
	cin.get();


	return 0;
}