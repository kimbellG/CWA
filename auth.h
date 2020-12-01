#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "SetCheck.h"

using namespace std;
struct Login {
	string password;
	string login;
	bool admin;
};
string crypt(string str);
bool create_admin();
void create_user();
bool check_user();
bool check_file();
