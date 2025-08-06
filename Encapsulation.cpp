//Problem 1: Encapsulation
//Create a Student class with private attributes : name, rollNumber, and marks.Include methods to :
//1. Set student details.
//2. Display student details.
//3. Calculate and return the grade based on marks(A, B, C, etc.).




#include<iostream>
#include<string>
using namespace std;

class Student {

private:
	string name;
	int rollNo;
	int marks;

public:

	Student(string n, int rn, int m) {
		name = n;
		rollNo = rn;
		marks = m;
	}

	void setName(string n) {
		name = n;
	}

	string getName() {
		return name;
    }

	void setRollNo(int rn) {
		rollNo = rn;
	}

	int getRollNo() {
		return rollNo;
	}
	void setMarks(int m) {
		marks = m;
	}

	int getMarks() {
		return marks;
	}

	void gradeFunction() {
		if (marks > 90) {
			cout << "A grade" << endl;
		}

		else if (marks > 80 && marks < 90) {
			cout << "B grade" << endl;
		}

		else if (marks > 65 && marks < 80) {
			cout << "C grade" << endl;
		}

		else if (marks > 50 && marks < 65) {
			cout << "D grade" << endl;
		}
	
		else {
			cout << "Fail" << endl;
		}
	}

	void display() {
		cout << "Name:" << name << endl;
		cout << "Roll no:" << rollNo << endl;
		cout << "Marks:" << marks << endl;
	}

};

int main() {

	Student s1("Strange", 27, 85);
	s1.display();
	s1.gradeFunction();


	return 0;
}




//Corrected and optimized code

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int rollNo;
	int marks;

public:
	Student(string n, int rn, int m) : name(n), rollNo(rn), marks(m) {}

	void setName(string n) { name = n; }
	string getName() const { return name; }

	void setRollNo(int rn) { rollNo = rn; }
	int getRollNo() const { return rollNo; }

	void setMarks(int m) { marks = m; }
	int getMarks() const { return marks; }

	string getGrade() const {
		if (marks >= 90) return "A";
		else if (marks >= 80) return "B";
		else if (marks >= 65) return "C";
		else if (marks >= 50) return "D";
		else return "Fail";
	}

	void display() const {
		cout << "Name: " << name << endl;
		cout << "Roll no: " << rollNo << endl;
		cout << "Marks: " << marks << endl;
		cout << "Grade: " << getGrade() << endl;
	}
};

int main() {
	Student s1("Strange", 27, 85);
	s1.display();
	return 0;
}