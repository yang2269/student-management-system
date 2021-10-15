#pragma once
#include<iostream>
#include"Student.h"
using namespace std;
class StudentArray {
public:
	Student* ps;
	int n;
	StudentArray();
	void Inputstu();  //n个学生信息的录入
	void Showstu();   //n个学生信息的输出
	void paixushow(); //排序后输出
	void PingJun();   //计算并输出各门课程的平均成绩
	void SetBaocun(); //n个学生的信息保存
	void GetDuQu();   //从文件中读取n个学生的信息
	void Lookstu();   //根据姓名或学号从文件中查找相应信息并输出
	int exit();

};
