#include<iostream>
using namespace std;
#include"Student.h"
#include"StudentArray.h"
int main(){
	int x = 1;
	while (x==1) {
		printf( "1 - ��������\n"
				"2 - �������\n"
				"3 - ��������\n"
				"4 - ��ȡ���ݲ���ʾ\n"
				"5 - ��������\n"
				"6 - �γ�ƽ���ɼ�\n"
				"7 - ����ѧ����Ϣ\n"
				"8 - ����ļ�\n"
				"0 - �˳�\n");
		int m;
		cout << "����������Ҫʹ�õĹ���:";
		cin >> m;
		StudentArray p;
		switch (m)
		{
		case 1:p.Inputstu();
			break;
		case 2:p.Showstu();
			break;
		case 3:p.SetBaocun();
			break;
		case 4:p.GetDuQu();
			break;
		case 5:p.paixushow();
			break;
		case 6:p.PingJun();
			break;
		case 7:p.Lookstu();
			break;
		case 8:p.ps->fun(); cout << "����ɹ�" << endl;
			system("pause");
			system("cls");
			break;
		case 0:x=p.exit();
			break;
		}
	}
}