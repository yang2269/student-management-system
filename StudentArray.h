#pragma once
#include<iostream>
#include"Student.h"
using namespace std;
class StudentArray {
public:
	Student* ps;
	int n;
	StudentArray();
	void Inputstu();  //n��ѧ����Ϣ��¼��
	void Showstu();   //n��ѧ����Ϣ�����
	void paixushow(); //��������
	void PingJun();   //���㲢������ſγ̵�ƽ���ɼ�
	void SetBaocun(); //n��ѧ������Ϣ����
	void GetDuQu();   //���ļ��ж�ȡn��ѧ������Ϣ
	void Lookstu();   //����������ѧ�Ŵ��ļ��в�����Ӧ��Ϣ�����
	int exit();

};
