#pragma once
#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
bool check_kr(double a);
double set_price();
double set_size_men();
double set_size_women();
double set_size_kids();
string set_string();
string set_path();
int set_user_menu();
int set_admin_menu();
int sale_set();
int set_num(int from, int to);
void delete_file(string a);
void print_hat();