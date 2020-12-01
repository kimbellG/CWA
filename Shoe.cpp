

#include "Shoe.h"
ofstream& operator<<(ofstream& out, const Shoe& shoe)
{
    out << shoe.model << " " << shoe.manufacturer << " " << shoe.size << " " << shoe.price <<" "<<shoe.city<<" "<<shoe.sale<<" "<<shoe.season<<" "<<shoe.material<<" "<<shoe.color<<endl;
    return out;
}
ostream& operator <<(ostream& out, const Shoe& shoe)
{
    out <<"|"<< setw(13) << shoe.model <<"|"<< setw(20) << shoe.manufacturer<<"|"<<setw(10)<<shoe.material<<"|"<<setw(13)<<shoe.color<<"|"<<setw(13)<<shoe.season<<"|"<< setw(10) << shoe.size <<"|"<< setw(10) << shoe.price<<" BYN";
    if (shoe.sale != 0)
        out<<setw(5)<< shoe.sale << "% ������ |" << endl;
    else
        out <<setw(15)<<"|"<< endl;
    return out;
    
}

ifstream& operator>>(ifstream& in, Shoe& shoe)
{
    in >> shoe.model >> shoe.manufacturer >> shoe.size >> shoe.price >> shoe.city>>shoe.sale>>shoe.season>>shoe.material>>shoe.color;
    return in;
}
void Shoe::set_sale() {
    cout << "���������� ������ ������: ";
    sale=set_num(10,90);
    price = price - price * sale / 100;
}
void Shoe::show_pair() {
    cout << "|" << setw(13) << model << "|" << setw(20) << manufacturer << "|" << setw(10) << material << "|" << setw(13) << color << "|" << setw(13) << season << "|" << setw(10) << size << "|" << setw(5) << price << " BYN";
    if (sale != 0)
        cout << setw(5) << sale << "% ������ |" << endl;
    else
        cout << setw(15) << "|" << endl;
}
void Men_shoe::set_pair() {
    int choice;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �������" << endl << "3. �����" << endl << "4. �������" << endl << "5. ��������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "���������";
            break;
        case 2:
            model = "�������";
            break;
        case 3:
            model = "�����";
            break;
        case 4:
            model = "�������";
            break;
        case 5:
            model = "��������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "������� �������������: ";
    manufacturer=set_string();
    size = set_size_men();
    do {
        cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " <<endl<<"4. �����"<< endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "����";
            break;
        case 2:
            material = "������";
            break;
        case 3:
            material = "���-���";
            break;
        case 4:
            material = "�����";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "������� ���� �����: ";
    color = set_string();
    do {
        cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "����";
            break;
        case 2:
            season = "����";
            break;
        case 3:
            season = "����-�����";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "������� ����: ";
    price = set_price();
    sale = 0;
    do {
        cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "�����";
            break;
        case 2:
            city = "�����";
            break;
        case 3:
            city = "�������";
            break;
        case 4:
            city = "������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
}
void Men_shoe::change_pair() {
    int choice,choice1;
    print_hat();
    show_pair();
    cout << "������ �������� ������?" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �������" << endl << "3. �����" << endl << "4. �������" << endl << "5. ��������" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "���������";
                break;
            case 2:
                model = "�������";
                break;
            case 3:
                model = "�����";
                break;
            case 4:
                model = "�������";
                break;
            case 5:
                model = "��������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "������ �������� �������������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { 
        cout << "������� ������-�������������: "; 
        manufacturer = set_string(); 
    }
    print_hat();
    show_pair();
    cout << "������ �������� ��������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " << endl << "4. �����" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "����";
                break;
            case 2:
                material = "������";
                break;
            case 3:
                material = "���-���";
                break;
            case 4:
                material = "�����";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ����: "; color = set_string(); }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ���������� ��� ���� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "����";
                break;
            case 2:
                season = "����";
                break;
            case 3:
                season = "����-�����";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size = set_size_men();
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ����: "; price = set_price(); }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ��������, ���� ������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "�����";
                break;
            case 2:
                city = "�����";
                break;
            case 3:
                city = "�������";
                break;
            case 4:
                city = "������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
}
void Women_shoe::set_pair() {
    int choice;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �����" << endl << "3. ������" << endl << "4. ���������" << endl << "5. ����������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "���������";
            break;
        case 2:
            model = "�����";
            break;
        case 3:
            model = "������";
            break;
        case 4:
            model = "���������";
            break;
        case 5:
            model = "����������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "������� �������������: ";
    manufacturer=set_string();
    size = set_size_women();
    
    do {
        cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " << endl << "4. �����" << endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "����";
            break;
        case 2:
            material = "������";
            break;
        case 3:
            material = "���-���";
            break;
        case 4:
            material = "�����";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "������� ���� �����: ";
    color = set_string();
    do {
        cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "����";
            break;
        case 2:
            season = "����";
            break;
        case 3:
            season = "����-�����";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "������� ����: ";
    price = set_price();
    sale = 0;
    do {
        cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "�����";
            break;
        case 2:
            city = "�����";
            break;
        case 3:
            city = "�������";
            break;
        case 4:
            city = "������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
}
void Women_shoe::change_pair() {
    int choice, choice1;
    print_hat();
    show_pair();
    cout << "������ �������� ������?" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ������:" << endl << "1. ���������" << endl << "2. �����" << endl << "3. ������" << endl << "4. ���������" << endl << "5. ����������" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "���������";
                break;
            case 2:
                model = "�����";
                break;
            case 3:
                model = "������";
                break;
            case 4:
                model = "���������";
                break;
            case 5:
                model = "����������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ������-�������������?" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ������-�������������: "; manufacturer = set_string(); }
    print_hat();
    show_pair();
    cout << "������ �������� ��������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " << endl << "4. �����" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "����";
                break;
            case 2:
                material = "������";
                break;
            case 3:
                material = "���-���";
                break;
            case 4:
                material = "�����";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        cout << "������� ����: "; color = set_string();
    }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ���������� ��� ���� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "����";
                break;
            case 2:
                season = "����";
                break;
            case 3:
                season = "����-�����";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size=set_size_women();
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        cout << "������� ����: "; 
        price = set_price();
    }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ��������, ���� ������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "�����";
                break;
            case 2:
                city = "�����";
                break;
            case 3:
                city = "�������";
                break;
            case 4:
                city = "������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
}
void Kids_shoe::set_pair() {
    int choice;
    do {
        cout << "�������� ������:" << endl << "1. ���������" << endl << "2. ���������" << endl << "3. �������" << endl << "4. �����" << endl << "5. �������" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "���������";
            break;
        case 2:
            model = "���������";
            break;
        case 3:
            model = "�������";
            break;
        case 4:
            model = "�����";
            break;
        case 5:
            model = "�������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "������� �������������: ";
    manufacturer=set_string();
    size = set_size_kids();
    do {
        cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " << endl << "4. �����" << endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "����";
            break;
        case 2:
            material = "������";
            break;
        case 3:
            material = "���-���";
            break;
        case 4:
            material = "�����";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "������� ���� �����: ";
    color = set_string();
    do {
        cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "����";
            break;
        case 2:
            season = "����";
            break;
        case 3:
            season = "����-�����";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "������� ����: ";
    price = set_price();
    sale = 0;
    do {
        cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "�����";
            break;
        case 2:
            city = "�����";
            break;
        case 3:
            city = "�������";
            break;
        case 4:
            city = "������";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
}
void Kids_shoe::change_pair() {
    int choice, choice1;
    print_hat();
    show_pair();
    cout << "������ �������� ������?" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ������:" << endl << "1. ���������" << endl << "2. ���������" << endl << "3. �������" << endl << "4. �����" << endl << "5. �������" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "���������";
                break;
            case 2:
                model = "���������";
                break;
            case 3:
                model = "�������";
                break;
            case 4:
                model = "�����";
                break;
            case 5:
                model = "�������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ������-�������������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ������-�������������: "; manufacturer = set_string(); }
    print_hat();
    show_pair();
    cout << "������ �������� ��������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������� �����" << endl << "1. ���� " << endl << "2. ������ " << endl << "3. ���-��� " << endl << "4. �����" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "����";
                break;
            case 2:
                material = "������";
                break;
            case 3:
                material = "���-���";
                break;
            case 4:
                material = "�����";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ����: "; color = set_string(); }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ���������� ��� ���� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� ���������� ��� ������ ���� �����" << endl << "1. ���� " << endl << "2. ���� " << endl << "3. ����-����� " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "����";
                break;
            case 2:
                season = "����";
                break;
            case 3:
                season = "����-�����";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "������ �������� ������" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size = set_size_kids();
    print_hat();
    show_pair();
    cout << "������ �������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "������� ����: "; price = set_price(); }
    print_hat();
    show_pair();
    cout << "������ �������� ����� ��������, ���� ������� ����" << endl << "1. ��" << endl << "2. ���" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "�������� �������, � ������� ������� ����:" << endl << "1. ������� � ������" << endl << "2. ������� � ������" << endl << "3. ������� � ��������" << endl << "4. ������� � �������" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "�����";
                break;
            case 2:
                city = "�����";
                break;
            case 3:
                city = "�������";
                break;
            case 4:
                city = "������";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
}