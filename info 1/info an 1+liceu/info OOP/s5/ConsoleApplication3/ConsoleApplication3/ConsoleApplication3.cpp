#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	void getStudentInfo();
protected:
	double medie;
	char nume[100];
	char facultate[100];
};
class Absolvent : public Student {
public:
	void getAbsolventInfo();
	void printAbsolventInfo();
private:
	bool licenta;
};

void Student::getStudentInfo() {

	
	cin >> nume;
	cin >> facultate;
	cin >> medie;
}
void Absolvent::getAbsolventInfo() {
	try {
		if (medie >= 6 && strcmp(facultate,"ETTI")==0) {
			licenta = true;
			
		}
		else {
			licenta = false;
			
		}
	}
	catch (const char* err) {
		cerr << err << endl;
		exit(-1);
	}
}

void Absolvent::printAbsolventInfo() {
	if (licenta == 1) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}
int main() {
	Absolvent A;
	A.getStudentInfo();
	A.getAbsolventInfo();
	A.printAbsolventInfo();
	return 0;
}
