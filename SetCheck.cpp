#include "SetCheck.h"
bool check_kr(double a) {
    int b = a * 10;
    bool c;
    (b % 5 != 0) ? c = false : c = true;
    return c;
}
double set_price() {
    double a;
    bool check=true;
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) {
            check = false;
            continue;
        }
        if (a <= 0 || a>1000) { 
            check = false; 
        continue; 
        }
        
        break;
    }
    system("cls");
    return a;
}
double set_size_men() {
    double a;
    bool check=true;
    cout << "Введите размер(от 40 до 47): ";
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) { check = false; continue; }
        if (a <= 0) { check = false; continue; }
        if (a < 40 || a>47) {check = false; continue;}
        if (!check_kr(a)) { check = false; continue; }
        break;
    }
    system("cls");
    return a;
}
double set_size_women() {
    double a;
    bool check=true;
    cout << "Введите размер(от 32 до 40): ";
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) { check = false; continue; }
        if (a <= 0) { check = false; continue; }
        if (a < 32 || a>40) {check = false; continue;}
        if (!check_kr(a)) { check = false; continue; }
        break;
    }
    system("cls");
    return a;
}
double set_size_kids() {
    double a;
    bool check = true;
    cout << "Введите размер(от 20 до 34): ";
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: "; 
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) { check = false; continue; }
        if (a <= 0) {check = false; continue;}
        if (a < 20 || a>34) { check = false; continue; }
        if (!check_kr(a)) { check = false; continue; }
        break;
    }
    system("cls");
    return a;
}
string set_string()
{
    int times = 0;
    string a;
    bool check = false;
    do {
        check = false;
        if (times>0) cout << "Попробуйте еще раз: ";
        times++;
        cin>>a;
        for (unsigned int nIndex = 0; nIndex < a.length() && !check; ++nIndex) {
            if (a[nIndex]>='а' && a[nIndex]<='я') continue;
            if (a[nIndex] >= 'А' && a[nIndex] <= 'Я') continue;
            check = true;
        }
    } while (check);
    if (a[0] <= 'я' && a[0] >= 'а') a[0] = a[0] - 'а' + 'А';
    for (int i = 1; i < a.length(); i++) {
        if (a[i] <= 'Я' && a[i] >= 'А') a[i] = a[i] + 'а' - 'А';
    }
    system("cls");
    return a;
}
string set_path() {
    string a;
    int times = 0;
    while (1) {
        if (times > 0) cout << "Попробуйте еще раз: ";
        times++;
        cin >> a;
        bool check = false;
        for (int i = 0; i < a.length() && !check; i++) {
            if (a[i] >= 'a' && a[i] <= 'z') continue;
            if (a[i] >= 'A' && a[i] <= 'Z') continue;
            check = true;
        }
        if (!check) break;
    }
    return a;
}
int set_user_menu()
{
    int a;
    bool check = true;
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) {
            check = false;
            continue;
        }
        if (a <= 0 && a>5) {
            check = false;
            continue;
        }

        break;
    }
    return a;
}
int set_admin_menu()
{
    int a;
    bool check = true;
    while (1)
    {
        if (check == false) cout << "Попробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) {
            check = false;
            continue;
        }
        if (a <= 0 && a > 7) {
            check = false;
            continue;
        }

        break;
    }
    return a;
}
int sale_set() {

    int a;
    bool check = true;
    while (1)
    {
        if (check == false) cout << "Скидка не может превышать 90% и быть меньше 10%: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) {
            check = false;
            continue;
        }
        if (a <= 9 && a >90) {
            check = false;
            continue;
        }

        break;
    }
    system("cls");
    return a;
}

int set_num(int from, int to)
{
    int a;
    bool check = true;
    while (1)
    {
        if (check == false) cout << "Ошибка ввода! \n Число должно находиться в диапазоне " <<from<<"-"<<to<<"\nПопробуйте еще раз: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            check = false;
            continue;
        }
        cin.ignore(32767, '\n');
        if (cin.gcount() > 1) {
            check = false;
            continue;
        }
        if (a < from || a > to) {
            check = false;
            continue;
        }

        break;
    }
    system("cls");
    return a;
}

void delete_file(string a)
{
    ofstream out;
    out.open(a);
    out.close();
}
void print_hat() {
    for (int i = 0; i < 110; i++) cout << "_";
    cout << endl;
    cout << "|" << setw(12) << "Модель" << " |" << setw(19) << "Страна-производства" << " |" << setw(9) << "Материал" << " |" << setw(12) << "Цвет" << " |" << setw(12) << "Сезон" << " |" << setw(9) << "Размер" << " |" << setw(23) << "Цена            Скидка" << "     |" << endl;

}