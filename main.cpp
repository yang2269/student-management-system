#include<iostream>
using namespace std;
#include"Student.h"
#include"StudentArray.h"
int main(){
	int x = 1;
	while (x==1) {
		printf( "1 - 输入数据\n"
				"2 - 输出数据\n"
				"3 - 保存数据\n"
				"4 - 读取数据并显示\n"
				"5 - 排序后输出\n"
				"6 - 课程平均成绩\n"
				"7 - 查找学生信息\n"
				"8 - 清空文件\n"
				"0 - 退出\n");
		int m;
		cout << "请输入您想要使用的功能:";
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
		case 8:p.ps->fun(); cout << "清除成功" << endl;
			system("pause");
			system("cls");
			break;
		case 0:x=p.exit();
			break;
		}
	}
}