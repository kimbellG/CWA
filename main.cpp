// курсовой.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <cstdio>
#include "List.h"
#include "Shoe.h"
#include "Functions.h"
#include "auth.h"
using namespace std;
using namespace ListNS;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	List<Men_shoe> lm,lmsold;
	List<Women_shoe> lw,lwsold;
	List<Kids_shoe> lk,lksold;
	file_read(lm,lw,lk,"ShoeInStock.txt");
	file_read(lmsold,lwsold,lksold,"SoldShoe.txt");
	bool login;
	while(1){
	(check_file()) ? login=create_admin() : login=check_user();
		if (login) admin_menu(lm, lmsold, lw, lwsold, lk, lksold);
		else user_menu(lm, lmsold, lw, lwsold, lk, lksold);
	}
}


