#include"Student.h"
#include"StudentArray.h"
using namespace std;
#include<fstream>
Student::Student()
{
	pj = 0;
}

void Student::input()
{
	cin >> this->num >>this->name;
	for (int i = 0; i < 4; i++) {
		cin >> this->sc[i];
	}
}

void Student::show()
{
	cout << this->num << "  " << this->name << "  ";
	for (int i = 0; i < 4; i++) {
		cout << this->sc[i] << " ";
	}
	cout << this->pj << endl;
	cout << endl;
}

void Student::fun() {
	ofstream ofs;
	ofs.open("student.txt", ios::out);
	//ofs << " ";
	ofs.close();
}
void Student::Setstu()
{
	ofstream ofs;
	ofs.open("student.txt", ios::app);
	ofs << this->num << "  " << this->name << "  ";
	for (int i = 0; i < 4; i++) {
		ofs << this->sc[i] << " ";
	}
	
	ofs << pj << endl;
	ofs.close();
}
void Student::duqu() {
	ifstream ifs;
	ifs.open("student.txt", ios::in);
	ifs >> this->num >> this->name;
	for (int i = 0; i < 4; i++) {
		ifs >> this->sc[i];
	}

	ifs >> pj;
	ifs.close();
}
void Student::Getstu()
{
	string buf;
	ifstream ifs;
	ifs.open("student.txt", ios::in);
	while (getline(ifs,buf)) {
		cout << buf << endl;
	}
	ifs.close();
}
