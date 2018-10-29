# learnCpp

C++ 언어를 이용한 프로젝트, 학교 내 공부 파일 정리.

1. useClass.cpp : C++ 언어에서의 클래스 사용법 학습

```C++
> useClass.cpp

class person {
	int man, woman, sum;

public:
	void itset(int a, int b);
	int itsum();
};
```

useClass.cpp 파일의 클래스



2. friend_class.cpp : C++ Class에서의 friend 키워드, 객체의 캡슐화를 무시함으로써 정보 은닉의 중요성 무시

```C++
class studentInfo {
private:
	string name;
	string major;
	int student_number;
public:
	studentInfo(string a, string b, int c);
	friend void printGrade(studentInfo, grade);	// friend function
};
```

friend 함수로 private에 접근 가능