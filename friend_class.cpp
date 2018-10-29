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
	cout << "이름 : " << a.name << endl;
	cout << "학과 : " << a.major << endl;
	cout << "학번 : " << a.student_number << endl;
	cout << "성적 : " << g.gradeAverage << endl;
}

int main() {
	studentInfo si("홍성하", "공통과정", 1120);
	grade gra(100);

	printGrade(si, gra);
}
