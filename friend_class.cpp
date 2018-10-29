#include <iostream>
#include <string>

using namespace std;

class grade; // prototype;

class studentInfo {
private:
	string name;
	string major;
	int student_number;
public:
	studentInfo(string a, string b, int c);
	friend void printGrade(studentInfo, grade);	// friend function
};

class grade {
private:
	double gradeAverage;
public:
	grade(double aver);
	friend void printGrade(studentInfo sI, grade g);
};

studentInfo::studentInfo(string a, string b, int c) : name(a), major(b), student_number(c) { }
grade::grade(double a) : gradeAverage(a){ }

void printGrade(studentInfo a, grade g) {
	cout << "�̸� : " << a.name << endl;
	cout << "�а� : " << a.major << endl;
	cout << "�й� : " << a.student_number << endl;
	cout << "���� : " << g.gradeAverage << endl;
}

int main() {
	studentInfo si("ȫ����", "�������", 1120);
	grade gra(100);

	printGrade(si, gra);
}
