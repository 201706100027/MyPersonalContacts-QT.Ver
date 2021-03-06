// 个人通信录管理系统.cpp: 定义控制台应用程序的入口点。
//

#include"Myhead.h"
#include<iostream>
using namespace std;

int main()
{
	//test
	int i, j;
	string x; char *p = NULL, c;
	cout << "欢迎使用个人通讯录管理系统" << endl;
	cout << "(Operated By DiaosSama)" << endl;
	cout << endl;
	cout << "主菜单" << endl;
	cout << "1. 添加一个通讯录成员" << endl;
	cout << "2. 显示通讯录中所有项目" << endl;
	cout << "3. 搜索通讯录成员" << endl;
	cout << "4. 删除通讯录成员" << endl;
	cout << "5. 编辑通讯录" << endl;
	cout << "6. 显示通讯录中所有项目(按姓名顺序)" << endl;
	cout << "7. 统计各月份出生人数" << endl;
	cout << "8. 显示五天内生日的人的信息" << endl;
	cout << "0. 退出程序" << endl;
	cout << endl;
	while (cin >> i)
	{
		if (i == 0) { break; }
		if (i == 1)
		{
			cout << "0. Back" << endl;
			cout << "1. Add a classmate" << endl;
			cout << "2. Add a teammate" << endl;
			cout << "3. Add a friend" << endl;
			cout << "4. Add a relative" << endl;
			cin >> j;
			Input(j);
		}
		if (i == 2)
		{
			cout << "0. Back" << endl;
			cout << "1. Print all items" << endl;
			cout << "2. Print all classmates" << endl;
			cout << "3. Print all teammates" << endl;
			cout << "4. Print all friends" << endl;
			cout << "5. Print all relatives" << endl;
			cin >> j;
			PrintIt(j);
		}
		if (i == 3)
		{
		Am:		cout << "Please input the name: ";
			cin >> x;
			if (!Judge(x))
			{
				if (ReInput())  goto Am;
			}
			else
			{
				p = Copy(p, x);
				SearchName(p);
			}
		}
		if (i == 4)
		{
			PrintIt(1);
		Bm:		cout << "Please input the name which you want to delete: "; cin >> x;
			p = Copy(p, x);
			if (SearchName(p))
			{
				cout << "Do you want to delete this item? (Y or N)"; cin >> c;
				if (c == 'Y') Delete(p);
			}
			else if (ReInput()) goto Bm;
		}
		if (i == 5)
		{
			PrintIt(1);
		Cm:		cout << "Please input the name which you want to edit: "; cin >> x;
			p = Copy(p, x);
			if (SearchName(p))
			{
				cout << "Do you want to edit this item? (Y or N)"; cin >> c;
				if (c == 'Y') Edit(p);
			}
			else if (ReInput()) goto Cm;
		}
		if (i == 6)
		{
			PrintName(1);
		}
		if (i == 7)
		{
			Birthmonth();
		}
		if (i == 8)
		{
			HappyBirth();
		}
		cin.clear();
		cout << endl;
		cout << "*******************主菜单********************" << endl;
		cout << "*                    1. 添加一个通讯录成员                      *" << endl;
		cout << "*                  2. 显示通讯录中所有项目                    *" << endl;
		cout << "*                       3. 搜索通讯录成员                         *" << endl;
		cout << "*                       4. 删除通讯录成员                         *" << endl;
		cout << "*                           5. 编辑通讯录                            *" << endl;
		cout << "*          6. 显示通讯录中所有项目(按姓名顺序)         *" << endl;
		cout << "*                    7. 统计各月份出生人数                      *" << endl;
		cout << "*               8. 显示五天内生日的人的信息                 *" << endl;
		cout << "*                             0. 退出程序                              *" << endl;
		cout << "*********************************************" << endl;
	}
    return 0;
}

