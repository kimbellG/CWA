#include "Functions.h"


// ������� ������ �� �������������
void search_by_manufacturer(List<Men_shoe>& list) {
    cout << "������� ������-�������������, ��� ���� ����� ������ �������: ";
    string search;
    int times = 0;
    search=set_string();
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_manufacturer()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_manufacturer(List<Women_shoe>& list) {
	cout << "������� ������-�������������, ��� ���� ����� ������ �������: ";
	string search;
    int times = 0;
	search=set_string();
    print_hat();
	for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_manufacturer()) {
            cout << list[i]; 
            times++;
        }
	}
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_manufacturer(List<Kids_shoe>& list) {
    cout << "������� ������-�������������, ��� ���� ����� ������ �������: ";
    string search;
    int times = 0;
    search=set_string();
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_manufacturer()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
// ����� �� ������
void search_by_model(List<Men_shoe>& list){
    string search;
    int times = 0;
    int choice;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �������" << endl << "3. �����" << endl << "4. �������" << endl << "5. ��������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "���������";
            break;
        case 2:
            search = "�������";
            break;
        case 3:
            search = "�����";
            break;
        case 4:
            search = "�������";
            break;
        case 5:
            search = "��������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_model()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_model(List<Women_shoe>& list)
{
    string search;
    int choice;
    int times = 0;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �����" << endl << "3. ������" << endl << "4. ���������" << endl << "5. ����������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "���������";
            break;
        case 2:
            search = "�����";
            break;
        case 3:
            search = "������";
            break;
        case 4:
            search = "���������";
            break;
        case 5:
            search = "����������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_model()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_model(List<Kids_shoe>& list)
{
    string search;
    int choice;
    int times = 0;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. ���������" << endl << "3. �������" << endl << "4. �����" << endl << "5. �������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "���������";
            break;
        case 2:
            search = "���������";
            break;
        case 3:
            search = "�������";
            break;
        case 4:
            search = "�����";
            break;
        case 5:
            search = "�������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_model()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
// ����� �� �������
void search_by_size(List<Men_shoe>& list)
{
    int times = 0;
    double search;
    search = set_size_men();
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_size()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_size(List<Women_shoe>& list)
{
    int times = 0;
    double search;
    search = set_size_women();
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_size()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_size(List<Kids_shoe>& list)
{
    int times = 0;
    double search;
    search = set_size_kids();
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_size()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� �� �������" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
// ����� � ��������� ����
void search_by_price(List<Men_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check=true;
    cout << "������� ������ ������� ��������� ����: ";
    low = set_price();
    cout << "������� ������� ������� ��������� ����: ";
    do {
        if (check == false) cout << "������� �������� ���� ������ ��� " << low << ": ";
        high = set_price();
        if (high <= low) check = false;
    } while (high <= low);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (low <= list[i].get_price() && list[i].get_price() <= high) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� � ��������� " << low << " - " << high << " �� �������!" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_price(List<Women_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check = true;
    cout << "������� ������ ������� ��������� ����: ";
    low = set_price();
    cout << "������� ������� ������� ��������� ����: ";
    do {
        if (check == false) cout << "������� �������� ���� ������ ��� " << low << ": ";
        high = set_price();
        if (high <= low) check = false;
    } while (high <= low);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (low <= list[i].get_price() && list[i].get_price() <= high) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� � ��������� " << low << " - " << high << " �� �������!" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_price(List<Kids_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check = true;
    cout << "������� ������ ������� ��������� ����: ";
    low = set_price();
    cout << "������� ������� ������� ��������� ����: ";
    do {
        if (check == false) cout << "������� �������� ���� ������ ��� " << low << ": ";
        high = set_price();
        if (high <= low) check = false;
    } while (high <= low);
    print_hat();
    for (int i = 0; i < list.GetSize(); i++) {
        if (low <= list[i].get_price() && list[i].get_price() <= high) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) { system("cls"); cout << "���������� � ��������� " << low << " - " << high << " �� �������!" << endl; }
    cout << "������� ����� ������ ����� ����������: ";
    string a;
    cin >> a;
    system("cls");
}
// ������ �� ������
void file_read(List<Men_shoe>& lm, List<Women_shoe>& lw, List<Kids_shoe>& lk, string path)
{
    ifstream in;
    in.open(path);
    in.seekg(0);
    int size_temp;
    in >> size_temp;
    for (int i = 0; i < size_temp; i++) {
        Men_shoe m1;
        in >> m1;
        lm.push_back(m1);
    }
    in >> size_temp;
    for (int i = 0; i < size_temp; i++) {
        Women_shoe w1;
        in >> w1;
        lw.push_back(w1);
    }
    in >> size_temp;
    for (int i = 0; i < size_temp; i++) {
        Kids_shoe k1;
        in >> k1;
        lk.push_back(k1);
    }
    in.close();
}

// ����� � ������
void search_in_city(List<Men_shoe>& list) {
    int times=0;
    string search;
    int choice;
    do {
        cout << "�������� ���� �� ���������, ���� ������� ���� ��������� � �������:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � �������� " << endl << "4. ������� � �������" << endl;
        choice=set_num(1,4);
        switch (choice) {
        case 1:
            search = "�����";
            break;
        case 2:
            search = "�����";
            break;
        case 3:
            search = "�������";
            break;
        case 4:
            search = "������";
            break;
        default: 
            break;
       }
    } while (choice <= 0 || choice > 4);
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_city()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) cout << "�� ������ ������ � ���� �������� ����������� ������� �����" << endl;
}
void search_in_city(List<Women_shoe>& list) {
    int times = 0;
    string search;
    int choice;
    do {
        cout << "�������� ���� �� ���������, ���� ������� ���� ��������� � �������:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � �������� " << endl << "4. ������� � �������" << endl;
        choice = set_num(1, 4);
        switch (choice) {
        case 1:
            search = "�����";
            break;
        case 2:
            search = "�����";
            break;
        case 3:
            search = "�������";
            break;
        case 4:
            search = "������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_city()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) cout << "�� ������ ������ � ���� �������� ����������� ������� �����" << endl;
}
void search_in_city(List<Kids_shoe>& list){
    int times = 0;
    string search;
    int choice;
    do {
        cout << "�������� ���� �� ���������, ���� ������� ���� ��������� � �������:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � �������� " << endl << "4. ������� � �������" << endl;
        choice = set_num(1, 4);
        switch (choice) {
        case 1:
            search = "�����";
            break;
        case 2:
            search = "�����";
            break;
        case 3:
            search = "�������";
            break;
        case 4:
            search = "������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    for (int i = 0; i < list.GetSize(); i++) {
        if (search == list[i].get_city()) {
            cout << list[i];
            times++;
        }
    }
    if (times == 0) cout << "�� ������ ������ � ���� �������� ����������� ������� �����" << endl;
}
//���� ������
void search(List<Men_shoe>& list) {
    cout << "1. ����� ����� �� �������������"<<endl
        <<"2. ����� ����� �� ������"<<endl
        <<"3. ����� ����� �� �������"<<endl
        <<"4. ����� ����� � ��������� ����"<<endl
        <<"5. ����� ����� � ������������ ������"<<endl
        <<"6. ������������� �� �������� ����"<<endl;
    int choice;
    choice = set_num(1, 6);
    switch (choice)
    {
    case 1:
        search_by_manufacturer(list);
        break;
    case 2:
        search_by_model(list);
        break;
    case 3:
        search_by_size(list);
        break;
    case 4:
        search_by_price(list);
        break;
    case 5: 
        search_in_city(list);
        break;
    case 6:
        list.sort();
        list.show_list();
        break;
    default:
        break;
    }
}
void search(List<Women_shoe>& list) {
    cout << "1. ����� ����� �� �������������" << endl
        << "2. ����� ����� �� ������" << endl
        << "3. ����� ����� �� �������" << endl
        << "4. ����� ����� � ��������� ����" << endl
        << "5. ����� ����� � ������������ ������" << endl
        << "6. ������������� �� �������� ����" << endl;
    int choice;
    choice = set_num(1, 6);
    switch (choice)
    {
    case 1:
        search_by_manufacturer(list);
        break;
    case 2:
        search_by_model(list);
        break;
    case 3:
        search_by_size(list);
        break;
    case 4:
        search_by_price(list);
        break;
    case 5:
        search_in_city(list);
        break;
    case 6:
        list.sort();
        list.show_list();
        break;
    default:
        break;
    }
}
void search(List<Kids_shoe>& list) {
    cout << "1. ����� ����� �� �������������" << endl
        << "2. ����� ����� �� ������" << endl
        << "3. ����� ����� �� �������" << endl
        << "4. ����� ����� � ��������� ����" << endl
        << "5. ����� ����� � ������������ ������" << endl
        << "6. ������������� �� �������� ����" << endl;
    int choice;
    choice = set_num(1, 6);
    switch (choice)
    {
    case 1:
        search_by_manufacturer(list);
        break;
    case 2:
        search_by_model(list);
        break;
    case 3:
        search_by_size(list);
        break;
    case 4:
        search_by_price(list);
        break;
    case 5:
        search_in_city(list);
        break;
    case 6:
        list.sort();
        list.show_list();
        break;
    default:
        break;
    }
}
// ����
void user_menu(List<Men_shoe>& lm, List<Men_shoe>& lmsold, List<Women_shoe>& lw, List<Women_shoe>& lwsold, List<Kids_shoe>& lk, List<Kids_shoe>& lksold)
{
    int choice;
    do {
        
        cout << "1. ������� � ������ ������� �����  " << endl
            << "2. ������� � ������ ������� ����� " << endl
            << "3. ������� � ������ ������� �����" << endl
            << "4. ������� ������������" << endl
            << "5. ���������� ������" << endl;
        choice = set_num(1, 5);
        switch (choice)
        {
        case 1:
            int choice1;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ������� � ���� ������ �����" << endl
                    << "3. ������� � ������� �����" << endl
                    << "4. ��������� � ���������� ����" << endl;
               choice1=set_num(1,4);
                switch (choice1)
                {
                case 1: {
                    if (lm.GetSize() != 0)
                        lm.show_list();
                    else
                        cout << "� ������ �������� ������ �����. �������� ���� ���������" << endl;
                    cout << "������� ����� ������ ����� �����������: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break;
                }
                case 2:
                    if(lm.GetSize()!=0)
                    search(lm);
                    else {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lm.GetSize() != 0) {
                        int num;
                        cout << "�������� ����� ���� �����, ������� �� ������ ��������" << endl;
                        lm.show_list();
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        cout << "���� ������� �� ������� ������� �� ����� ��� ������ � �������� � " << lm[num].get_city() << endl;
                        lmsold.push_back(lm[num]);
                        lm.removeAt(num);
                    }
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                default:
                    break;
                }
            } while (choice1 != 4);
            break;
        case 2:
            int choice2;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ������� � ���� ������ �����" << endl
                    << "3. ������� � ������� �����" << endl
                    << "4. ��������� � ���������� ����" << endl;
                choice2=set_num(1,4);
                switch (choice2)
                {
                case 1: {
                    if (lw.GetSize() != 0)
                        lw.show_list();
                    else
                        cout << "�� ������ ������ ����� � �������� �����������. �������� ���� ���������" << endl;
                    cout << "������� ����� ������ ����� �����������: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break;
                }
                case 2:
                    if(lw.GetSize()!=0)
                    search(lw);
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lw.GetSize() != 0) {
                        int num1;
                        cout << "�������� ����� ���� �����, ������� �� ������ ��������" << endl;
                        lw.show_list();
                        num1 = set_num(1, lw.GetSize());
                        num1 -= 1;
                        cout << "���� ������� �� ������� ������� �� ����� ��� ������ � �������� � " << lw[num1].get_city() << endl;
                        lwsold.push_back(lw[num1]);
                        lw.removeAt(num1);
                    }
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                default:
                    break;
                }
            } while (choice2 != 4);
            break;
        case 3:
            int choice3;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ������� � ���� ������ �����" << endl
                    << "3. ������� � ������� �����" << endl
                    << "4. ��������� � ���������� ����" << endl;
                choice3=set_num(1,4);
                switch (choice3)
                {
                case 1: {
                    if (lk.GetSize() != 0)
                        lk.show_list();
                    else
                        cout << "�� ������ ������ ����� � �������� �����������. �������� ���� ���������" << endl;
                    cout << "������� ����� ������ ����� �����������: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lk.GetSize()!=0)
                    search(lk);
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lk.GetSize() != 0) {
                        int num3;
                        cout << "�������� ����� ���� �����, ������� �� ������ ��������" << endl;
                        lk.show_list();
                        num3 = set_num(1, lk.GetSize());
                        num3 -= 1;
                        cout << "���� ������� �� ������� ������� �� ����� ��� ������ � �������� � " << lk[num3].get_city() << endl;
                        lksold.push_back(lk[num3]);
                        lk.removeAt(num3);
                    }
                    else {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                default:
                    break;
                }
            } while (choice3 != 4);
            break;
        case 5: 
            delete_file("ShoeInStock.txt");
            delete_file("SoldShoe.txt");
            lm.file_write("ShoeInStock.txt");
            lw.file_write("ShoeInStock.txt");
            lk.file_write("ShoeInStock.txt");
            lmsold.file_write("SoldShoe.txt");
            lwsold.file_write("SoldShoe.txt");
            lksold.file_write("SoldShoe.txt");
            exit(1);
            break;
        default:
            break;
        }
    } while (choice != 4);
    
}

void admin_menu(List<Men_shoe>& lm, List<Men_shoe>& lmsold, List<Women_shoe>& lw, List<Women_shoe>& lwsold, List<Kids_shoe>& lk, List<Kids_shoe>& lksold)
{
    double total = 0;
    int choice;
    do {
        cout << "1. ������ � ������� ���������" << endl
            << "2. ������ � ������� ��������� " << endl
            << "3. ������ � ������� ���������" << endl
            << "4. ������� ������������" << endl
            << "5. ������� ����� ������� ������" << endl
            << "6. ���������� ����� � ��������" << endl
            << "7. �����" << endl;
        choice =set_num(1,7); 
        switch (choice)
        {
        case 1:
            int choice1;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ���� ������ �����" << endl
                    << "3. ��������� ����� ���� �� �������" << endl
                    << "4. ���������� ������ �� ����" << endl
                    << "5. ������������� ���������� � ���� �����" << endl
                    << "6. ��������� � ���������� ����" << endl;
                choice1=set_num(1,6);
                switch (choice1)
                {
                case 1: {
                    if (lm.GetSize() != 0)
                        lm.show_list();
                    else
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl;
                    string a;
                    cout << "������� ����� ������ ���� ����������: ";
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lm.GetSize()!=0)
                    search(lm);
                    else {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                {
                    Men_shoe m1;
                    m1.set_pair();
                    lm.push_back(m1);
                }
                    break;
                case 4:
                {
                    if (lm.GetSize() != 0) {
                        lm.show_list();
                        cout << "������� ����� ����, ������� ��������� ��������� �� ������: ";
                        int num;
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        lm[num].set_sale();
                    }
                    else {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                    break;
                case 5: {
                    if (lm.GetSize() != 0) {
                        lm.show_list();
                        cout << "������� ����� ����, ��� ���������� ��������� ��������: ";
                        int num;
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        lm[num].change_pair();
                        cout << "���������� � ���� � " << num + 1 << " ������� ��������" << endl;
                        cout <<  "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }break;
                default:
                    break;
                }
            } while (choice1 != 6);
            break;
        case 2:
            int choice2;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ���� ������ �����" << endl
                    << "3. ��������� ����� ���� �� �������" << endl
                    << "4. ���������� ������ �� ����" << endl
                    << "5. ������������� ���������� � ���� �����" << endl
                    << "6. ��������� � ���������� ����" << endl;
                choice2=set_num(1,6);
               
                switch (choice2)
                {
                case 1: {
                    if (lw.GetSize() != 0)
                        lw.show_list();
                    else
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl;
                    cout << "������� ����� ������ ���� ����������: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lw.GetSize()!=0)
                    search(lw);
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                {
                    Women_shoe w1;
                    w1.set_pair();
                    lw.push_back(w1);
                }
                break;
                case 4:
                {
                    if (lw.GetSize() != 0) {
                        lw.show_list();
                        cout << "������� ����� ����, ������� ��������� ��������� �� ������: ";
                        int num;
                        num = set_num(1, lw.GetSize());
                        num -= 1;
                        lw[num].set_sale();
                    }
                    else
                    {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                break;
                case 5: {
                    if (lw.GetSize() != 0) {
                        lw.show_list();
                        cout << "������� ����� ����, ��� ���������� ��������� ��������: ";
                        int num;
                        num = set_num(1, lw.GetSize());
                        num -= 1;
                        lw[num].change_pair();
                        cout << "���������� � ���� � " << num + 1 << " ������� ��������" << endl;
                        cout  << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }break;
                default:
                    break;
                }
            } while (choice2 != 6);
            break;
        case 3:
            int choice3;
            do {
                cout << "1. ���������� ����� � �������" << endl
                    << "2. ���� ������ �����" << endl
                    << "3. ��������� ����� ���� �� �������" << endl
                    << "4. ���������� ������ �� ����" << endl
                    << "5. ������������� ���������� � ���� �����" << endl
                    << "6. ��������� � ���������� ����" << endl;
                choice3=set_num(1,6);
                
                switch (choice3)
                {
                case 1: {
                    if (lk.GetSize() != 0)
                        lk.show_list();
                    else
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl;
                    cout << "������� ����� ������ ���� ����������: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lk.GetSize()!=0)
                    search(lk);
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                {
                    Kids_shoe k1;
                    k1.set_pair();
                    lk.push_back(k1);
                }
                break;
                case 4:
                {
                    if (lk.GetSize() != 0) {
                        lk.show_list();
                        cout << "������� ����� ����, ������� ��������� ��������� �� ������: ";
                        int num;
                        num = set_num(1, lk.GetSize());
                        num -= 1;
                        lk[num].set_sale();
                    }
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                break;
                case 5: {
                    if (lk.GetSize() != 0) {
                        lk.show_list();
                        cout << "������� ����� ����, ��� ���������� ��������� ��������: ";
                        int num;
                        num = set_num(1, lk.GetSize());
                        num -= 1;
                        lk[num].change_pair();
                        cout << "���������� � ���� � " << num + 1 << " ������� ��������" << endl;
                        cout << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else{
                        cout << "�� ������ ������ ����� � ���� �������� �����������" << endl << "������� ����� ������ ���� ����������: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }break;
                default:
                    break;
                }
            } while (choice3 != 6);
            break;
        case 5:
            create_user();
            break;
        case 6:
            int ch;
            do {
                cout << "1. ���������� ��� ��������� ���� �����" << endl
                    << "2. ���������� ����� � ������ ��������" << endl
                    << "3. ��������� � ���������� ����" << endl;
                ch=set_num(1,3);
                switch (ch)
                {
                case 1: {
                    if (lmsold.GetSize() != 0) {
                        cout << "������� �����" << endl;
                        lmsold.show_list();
                    }
                    if (lwsold.GetSize() != 0) {
                        cout << "������� �����" << endl;
                        lwsold.show_list();
                    }
                    if (lksold.GetSize() != 0) {
                        cout << "������� �����" << endl;
                        lksold.show_list();
                    }
                    if (lmsold.GetSize() == 0 && lwsold.GetSize() == 0 && lksold.GetSize() == 0)
                        cout << "�� ���� ���� ����� ��� �� �������" << endl;
                    cout << "������� ����� ������ ���� ����������: ";
                    string a;
                    cin >> a;
                    system("cls"); }
                    break;
                case 2:
                    total = 0;
                    for (int i = 0; i < lmsold.GetSize(); i++)
                    {
                        total += lmsold[i].get_price();
                    }
                    for (int i = 0; i < lwsold.GetSize(); i++)
                    {
                        total += lwsold[i].get_price();
                    }
                    for (int i = 0; i < lksold.GetSize(); i++)
                    {
                        total += lksold[i].get_price();
                    }
                    cout <<"|"<< setw(28) << "� �������" << setw(17) <<"|"<< endl;
                    cout <<"|"<< setw(15) << "������� ��� |" << setw(15) << "������� ��� |" << setw(15) << "������� ��� |"<< endl;
                    cout <<"|"<< setw(8) << lm.GetSize()<<setw(7)<<"|"<<setw(8)<< lw.GetSize()<<setw(7)<<"|"<< setw(8) << lk.GetSize()<<setw(7)<<"|"<< endl;
                    cout <<"|"<< setw(30) << "����� �������"<<setw(15)<<"|"<<endl;
                    cout <<"|"<<setw(15)<< "������� ��� |" <<setw(15)<<"������� ��� |"<<setw(15)<<"������� ��� |"<<endl;
                    cout <<"|" << setw(8) << lmsold.GetSize() << setw(7) << "|" << setw(8) << lwsold.GetSize() << setw(7) << "|" << setw(8) << lksold.GetSize() << setw(7) << "|" << endl;
                    cout <<"|"<< setw(27) << "�������" << setw(18)<<"|"<< endl;
                    cout <<"|"<< setw(24) << total<<"BYN"<< setw(18)<<"|" << endl;
                    break;
                default:
                    break;
                }
            } while (ch != 3);
            break;
        case 7:
            delete_file("ShoeInStock.txt");
            delete_file("SoldShoe.txt");
            lm.file_write("ShoeInStock.txt");
            lw.file_write("ShoeInStock.txt");
            lk.file_write("ShoeInStock.txt");
            lmsold.file_write("SoldShoe.txt");
            lwsold.file_write("SoldShoe.txt");
            lksold.file_write("SoldShoe.txt");
            exit(1);
            break;
        default:
            break;
        }
    } while (choice != 4);
    
}



 

