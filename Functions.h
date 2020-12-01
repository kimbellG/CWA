#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "List.h"
#include "Shoe.h"
#include "SetCheck.h"
#include "auth.h"
using namespace std;
using namespace ListNS;

void search_by_manufacturer(List<Men_shoe>& list);
void search_by_manufacturer(List<Women_shoe>& list);
void search_by_manufacturer(List<Kids_shoe>& list);
void search_by_model(List<Men_shoe>& list);
void search_by_model(List<Women_shoe>& list);
void search_by_model(List<Kids_shoe>& list);
void search_by_size(List<Men_shoe>& list);
void search_by_size(List<Women_shoe>& list);
void search_by_size(List<Kids_shoe>& list);
void search_by_price(List<Men_shoe>& list);
void search_by_price(List<Women_shoe>& list);
void search_by_price(List<Kids_shoe>& list);
void search_in_city(List<Men_shoe>& list);
void search_in_city(List<Women_shoe>& list);
void search_in_city(List<Kids_shoe>& list);
void file_read(List<Men_shoe>& lm, List<Women_shoe>& lw, List<Kids_shoe>& lk,string path);
void user_menu(List<Men_shoe>& lm, List<Men_shoe>& lmsold, List<Women_shoe>& lw, List<Women_shoe>& lwsold, List<Kids_shoe>& lk, List<Kids_shoe>& lksold);
void admin_menu(List<Men_shoe>& lm, List<Men_shoe>& lmsold, List<Women_shoe>& lw, List<Women_shoe>& lwsold, List<Kids_shoe>& lk, List<Kids_shoe>& lksold);
void search(List<Men_shoe>& list);
void search(List<Women_shoe>& list);
void search(List<Kids_shoe>& list);

