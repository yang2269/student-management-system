#include "StudentArray.h"
#include<fstream>
StudentArray::StudentArray()
{
	ps = new Student[20];
	
}

void StudentArray::Inputstu()
{
	cout << "请输入要添加的学生数量:";
	int n;
	cin >> n;
	//cout << endl;
	ofstream ofs;
	//ofs.open("student.txt", ios::out);
	cout << "请输入学生学号姓名和四门课成绩:";
	cout << endl;
	for (int i = 0; i < n; i++) {
		ps[i].input();
		//ps->Setstu();
		ps[i].Setstu();
	}

	cout << "输入成功!" << endl;
	system("pause");
	system("cls");
}

void StudentArray::Showstu()
{
	
	ps->Getstu();
	system("pause");
	system("cls");
}

void StudentArray::paixushow()
{
	//数据读出

	//改变顺序
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (ps[j].pj > ps[j + 1].pj) {
				Student temp = ps[j];
				ps[j] = ps[j + 1];
				ps[j + 1] = temp;
			}
		}
	}
	//重新写入
	for (int i = 0; i < n; i++) {
		ps->Getstu();
	}
	system("pause");
	system("cls");
}


void StudentArray::PingJun()
{
	//读取数据备份
	for (int i = 0; i < n; i++) {
		ps[i].duqu();
	}
	//改变平均成绩
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			sum+=ps[i].sc[j];
		}
		ps[i].pj = sum * 1.0 / n;
	}
	//清空文件
	ps->fun();
	//重新写入
	 
	ps->Setstu();
	this->Showstu();
	system("pause");
	system("cls");
}

void StudentArray::SetBaocun()
{
	for (int i = 0; i < n; i++) {
		ps[i].Setstu();
	}
	cout << "保存成功" << endl;
	system("pause");
	system("cls");
}

void StudentArray::GetDuQu()
{
	ps->Getstu();
	system("pause");
	system("cls");
}

void StudentArray::Lookstu()
{
	//读出数据 name num

	cout << "请输入查询类型："<<endl;
	cout << "1 - 姓名" << endl;
	cout << "2 - 学号" << endl;
	int m;
	cin >> m;
	if (m == 1) {
		string naa;
		cout << "请输入学生姓名：";
		cin >> naa;
		for (int i = 0; i < n; i++) {
			if (naa == ps[i].name) {
				this->Showstu();
				cout << endl;
			}
			else {
				cout << "没找到。" << endl;;
			}
		}
	}
	if (m == 2) {
		int k;
		cout << "请输入学生学号：";
		cin >> k;
		for (int i = 0; i < n; i++) {
			if (k == ps[i].num) {
				this->Showstu();
				cout << endl;
			}
			else {
				cout << "没找到。" << endl;;
			}
		}
	}
	system("pause");
	system("cls");
}

int StudentArray::exit()
{
	cout << "欢迎下次继续使用！" << endl;
	delete[]ps;
	return 0;
}
