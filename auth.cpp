#include "auth.h"

string crypt(string str) {
	const int key = 6;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + key;
			if (str[i] > 'Z')
				str[i] = 'A' + str[i] - 'Z' - 1;
		}
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] + key;
			if (str[i] > 'z')
				str[i] = 'a' + str[i] - 'z' -  1;
		}
	}
	return str;
}
bool create_admin() {
	Login adm;
	cout << "������������, ��� ������ ������ ����������!" << endl << "������� �������� ������� ������ ��������������" << endl;
	cout << "������� �����: ";
	adm.login = set_path();
	cout << "������� ������: ";
	adm.password = set_path();
	adm.admin = true;
	ofstream out;
	out.open("password.txt", ios::app);
	out << adm.login << " " << crypt(adm.password) << " " << adm.admin << endl;
	out.close();
	cout << "������� ������ �������, ������ ������� �������� � ����!" << endl<<"�������� ������!"<<endl;
	system("cls");
	return true;
}

void create_user()
{
	Login user;
	int rools;
	cout << "������� �������� ����� ������� ������!" << endl;
	cout << "������� �����: ";
	user.login = set_path();
	cout << "������� ������: ";
	user.password = set_path();
	cout << "������������ ����� ������������ ����� ��������������?"<<endl<<"1.��\n2.���"<<endl;
	cin >> rools;
	(rools == 1) ? user.admin = true : user.admin = false;
	ofstream out;
	out.open("password.txt", ios::app);
	out << user.login << " " << crypt(user.password) << " " << user.admin << endl;
	out.close();
	cout << "������� ������ �������, ������ ������� �������� � ����!" << endl << "�������� ������!" << endl;
	system("cls");
}

bool check_user()
{
	bool check, tmp=false, tmp1=false;
	Login user, file;
	cout << "������������, ������ ������� ��������� �����������.\n�������� ����������� �� ������." << endl;
	do {
		cout << "������� �����: ";
		user.login = set_path();
		cout << "������� ������: ";
		user.password = set_path();
		ifstream in;
		in.open("password.txt");
		in.seekg(0);
		while (!in.eof() && tmp == false) {
			in >> file.login >> file.password >> file.admin;
			if (user.login == file.login && crypt(user.password) == file.password) {
				check = file.admin;
				tmp = true;
			}
		}
		system("cls");
		(tmp == true) ? cout << "����������� ������� ���������\n" : cout << "�������� ����� ��� ������\n";
		(tmp == true) ? tmp1 = true : tmp1 = false;
	} while (tmp1!=true);
	
	return check;
}

bool check_file()
{
	ifstream in;
	in.open("password.txt");
	in.seekg(0, ios::end);
	if (in.tellg() == -1) return true;
	else return false;
}

