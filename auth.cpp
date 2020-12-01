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
	cout << "Здравствуйте, это первый запуск приложения!" << endl << "Давайте создадим учётную запись администратора" << endl;
	cout << "Введите логин: ";
	adm.login = set_path();
	cout << "Введите пароль: ";
	adm.password = set_path();
	adm.admin = true;
	ofstream out;
	out.open("password.txt", ios::app);
	out << adm.login << " " << crypt(adm.password) << " " << adm.admin << endl;
	out.close();
	cout << "Учётная запись создана, данные успешно записаны в файл!" << endl<<"Приятной работы!"<<endl;
	system("cls");
	return true;
}

void create_user()
{
	Login user;
	int rools;
	cout << "Давайте создадим новую учётную запись!" << endl;
	cout << "Введите логин: ";
	user.login = set_path();
	cout << "Введите пароль: ";
	user.password = set_path();
	cout << "Предоставить этому пользователю права администратора?"<<endl<<"1.Да\n2.Нет"<<endl;
	cin >> rools;
	(rools == 1) ? user.admin = true : user.admin = false;
	ofstream out;
	out.open("password.txt", ios::app);
	out << user.login << " " << crypt(user.password) << " " << user.admin << endl;
	out.close();
	cout << "Учётная запись создана, данные успешно записаны в файл!" << endl << "Приятной работы!" << endl;
	system("cls");
}

bool check_user()
{
	bool check, tmp=false, tmp1=false;
	Login user, file;
	cout << "Здравствуйте, сейчас начнётся процедура авторизации.\nСледуйте инструкциям на экране." << endl;
	do {
		cout << "Введите логин: ";
		user.login = set_path();
		cout << "Введите пароль: ";
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
		(tmp == true) ? cout << "Авторизация успешно завершена\n" : cout << "Неверный логин или пароль\n";
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

