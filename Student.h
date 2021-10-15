#pragma once
#pragma once
#include<iostream>
using namespace std;
#include<string>
class Student {
public:
	int num;
	string name;
	int sc[10];
	int pj;
	Student();
	void input();
	void show();
	void Setstu();
	void Getstu();
	void fun();
	void duqu();
};
