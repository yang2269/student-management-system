#include "StudentArray.h"
#include<fstream>
StudentArray::StudentArray()
{
	ps = new Student[20];
	
}

void StudentArray::Inputstu()
{
	cout << "������Ҫ��ӵ�ѧ������:";
	int n;
	cin >> n;
	//cout << endl;
	ofstream ofs;
	//ofs.open("student.txt", ios::out);
	cout << "������ѧ��ѧ�����������ſγɼ�:";
	cout << endl;
	for (int i = 0; i < n; i++) {
		ps[i].input();
		//ps->Setstu();
		ps[i].Setstu();
	}

	cout << "����ɹ�!" << endl;
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
	//���ݶ���

	//�ı�˳��
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (ps[j].pj > ps[j + 1].pj) {
				Student temp = ps[j];
				ps[j] = ps[j + 1];
				ps[j + 1] = temp;
			}
		}
	}
	//����д��
	for (int i = 0; i < n; i++) {
		ps->Getstu();
	}
	system("pause");
	system("cls");
}


void StudentArray::PingJun()
{
	//��ȡ���ݱ���
	for (int i = 0; i < n; i++) {
		ps[i].duqu();
	}
	//�ı�ƽ���ɼ�
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			sum+=ps[i].sc[j];
		}
		ps[i].pj = sum * 1.0 / n;
	}
	//����ļ�
	ps->fun();
	//����д��
	 
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
	cout << "����ɹ�" << endl;
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
	//�������� name num

	cout << "�������ѯ���ͣ�"<<endl;
	cout << "1 - ����" << endl;
	cout << "2 - ѧ��" << endl;
	int m;
	cin >> m;
	if (m == 1) {
		string naa;
		cout << "������ѧ��������";
		cin >> naa;
		for (int i = 0; i < n; i++) {
			if (naa == ps[i].name) {
				this->Showstu();
				cout << endl;
			}
			else {
				cout << "û�ҵ���" << endl;;
			}
		}
	}
	if (m == 2) {
		int k;
		cout << "������ѧ��ѧ�ţ�";
		cin >> k;
		for (int i = 0; i < n; i++) {
			if (k == ps[i].num) {
				this->Showstu();
				cout << endl;
			}
			else {
				cout << "û�ҵ���" << endl;;
			}
		}
	}
	system("pause");
	system("cls");
}

int StudentArray::exit()
{
	cout << "��ӭ�´μ���ʹ�ã�" << endl;
	delete[]ps;
	return 0;
}
