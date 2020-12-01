#include "Functions.h"


// ФУНКЦИИ ПОИСКА ПО ПРОИЗВОДИТЕЛЮ
void search_by_manufacturer(List<Men_shoe>& list) {
    cout << "Введите страну-производителя, чьи пары обуви хотите увидеть: ";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_manufacturer(List<Women_shoe>& list) {
	cout << "Введите страну-производителя, чьи пары обуви хотите увидеть: ";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_manufacturer(List<Kids_shoe>& list) {
    cout << "Введите страну-производителя, чьи пары обуви хотите увидеть: ";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
// ПОИСК ПО МОДЕЛИ
void search_by_model(List<Men_shoe>& list){
    string search;
    int times = 0;
    int choice;
    do {
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Ботинки" << endl << "3. Туфли" << endl << "4. Сандали" << endl << "5. Мокасины" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "Кроссовки";
            break;
        case 2:
            search = "Ботинки";
            break;
        case 3:
            search = "Туфли";
            break;
        case 4:
            search = "Сандали";
            break;
        case 5:
            search = "Мокасины";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
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
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Туфли" << endl << "3. Сапоги" << endl << "4. Босоножки" << endl << "5. Эспадрильи" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "Кроссовки";
            break;
        case 2:
            search = "Туфли";
            break;
        case 3:
            search = "Сапоги";
            break;
        case 4:
            search = "Босоножки";
            break;
        case 5:
            search = "Эспадрильи";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
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
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Босоножки" << endl << "3. Тапочки" << endl << "4. Чешки" << endl << "5. Сапожки" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            search = "Кроссовки";
            break;
        case 2:
            search = "Босоножки";
            break;
        case 3:
            search = "Тапочки";
            break;
        case 4:
            search = "Чешки";
            break;
        case 5:
            search = "Сапожки";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
// ПОИСК ПО РАЗМЕРУ
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
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
    if (times == 0) { system("cls"); cout << "Совпадений не найдено" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
// ПОИСК В ДИАПАЗОНЕ ЦЕНЫ
void search_by_price(List<Men_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check=true;
    cout << "Введите нижнюю границу диапазона цены: ";
    low = set_price();
    cout << "Введите верхнюю границу диапазона цены: ";
    do {
        if (check == false) cout << "Введите значение цены больше чем " << low << ": ";
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
    if (times == 0) { system("cls"); cout << "Совпадений в диапазоне " << low << " - " << high << " не найдено!" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_price(List<Women_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check = true;
    cout << "Введите нижнюю границу диапазона цены: ";
    low = set_price();
    cout << "Введите верхнюю границу диапазона цены: ";
    do {
        if (check == false) cout << "Введите значение цены больше чем " << low << ": ";
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
    if (times == 0) { system("cls"); cout << "Совпадений в диапазоне " << low << " - " << high << " не найдено!" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
void search_by_price(List<Kids_shoe>& list)
{
    int times = 0;
    double low, high;
    bool check = true;
    cout << "Введите нижнюю границу диапазона цены: ";
    low = set_price();
    cout << "Введите верхнюю границу диапазона цены: ";
    do {
        if (check == false) cout << "Введите значение цены больше чем " << low << ": ";
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
    if (times == 0) { system("cls"); cout << "Совпадений в диапазоне " << low << " - " << high << " не найдено!" << endl; }
    cout << "Введите любой символ чтобы продолжить: ";
    string a;
    cin >> a;
    system("cls");
}
// ЧТЕНИЕ ИЗ ФАЙЛОВ
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

// ПОИСК В ГОРОДЕ
void search_in_city(List<Men_shoe>& list) {
    int times=0;
    string search;
    int choice;
    do {
        cout << "Выберите один из магазинов, чтоб увидеть пары имеющиеся в наличии:" << endl << "1. Магазин в Миснке" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске " << endl << "4. Магазин в Полоцке" << endl;
        choice=set_num(1,4);
        switch (choice) {
        case 1:
            search = "Минск";
            break;
        case 2:
            search = "Брест";
            break;
        case 3:
            search = "Витебск";
            break;
        case 4:
            search = "Полоцк";
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
    if (times == 0) cout << "На данный момент в этом магазине отсутствует мужская обувь" << endl;
}
void search_in_city(List<Women_shoe>& list) {
    int times = 0;
    string search;
    int choice;
    do {
        cout << "Выберите один из магазинов, чтоб увидеть пары имеющиеся в наличии:" << endl << "1. Магазин в Миснке" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске " << endl << "4. Магазин в Полоцке" << endl;
        choice = set_num(1, 4);
        switch (choice) {
        case 1:
            search = "Минск";
            break;
        case 2:
            search = "Брест";
            break;
        case 3:
            search = "Витебск";
            break;
        case 4:
            search = "Полоцк";
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
    if (times == 0) cout << "На данный момент в этом магазине отсутствует женская обувь" << endl;
}
void search_in_city(List<Kids_shoe>& list){
    int times = 0;
    string search;
    int choice;
    do {
        cout << "Выберите один из магазинов, чтоб увидеть пары имеющиеся в наличии:" << endl << "1. Магазин в Миснке" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске " << endl << "4. Магазин в Полоцке" << endl;
        choice = set_num(1, 4);
        switch (choice) {
        case 1:
            search = "Минск";
            break;
        case 2:
            search = "Брест";
            break;
        case 3:
            search = "Витебск";
            break;
        case 4:
            search = "Полоцк";
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
    if (times == 0) cout << "На данный момент в этом магазине отсутствует детская обувь" << endl;
}
//МЕНЮ ПОИСКА
void search(List<Men_shoe>& list) {
    cout << "1. Поиск обуви по производителю"<<endl
        <<"2. Поиск обуви по модели"<<endl
        <<"3. Поиск обуви по размеру"<<endl
        <<"4. Поиск обуви в диапазоне цены"<<endl
        <<"5. Поиск обуви в определенном городе"<<endl
        <<"6. Отсортировать по убыванию цены"<<endl;
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
    cout << "1. Поиск обуви по производителю" << endl
        << "2. Поиск обуви по модели" << endl
        << "3. Поиск обуви по размеру" << endl
        << "4. Поиск обуви в диапазоне цены" << endl
        << "5. Поиск обуви в определенном городе" << endl
        << "6. Отсортировать по убыванию цены" << endl;
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
    cout << "1. Поиск обуви по производителю" << endl
        << "2. Поиск обуви по модели" << endl
        << "3. Поиск обуви по размеру" << endl
        << "4. Поиск обуви в диапазоне цены" << endl
        << "5. Поиск обуви в определенном городе" << endl
        << "6. Отсортировать по убыванию цены" << endl;
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
// МЕНЮ
void user_menu(List<Men_shoe>& lm, List<Men_shoe>& lmsold, List<Women_shoe>& lw, List<Women_shoe>& lwsold, List<Kids_shoe>& lk, List<Kids_shoe>& lksold)
{
    int choice;
    do {
        
        cout << "1. Перейти в раздел мужской обуви  " << endl
            << "2. Перейти в раздел женской обуви " << endl
            << "3. Перейти в раздел детской обуви" << endl
            << "4. Сменить пользователя" << endl
            << "5. Завершение работы" << endl;
        choice = set_num(1, 5);
        switch (choice)
        {
        case 1:
            int choice1;
            do {
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Перейти в меню поиска обуви" << endl
                    << "3. Перейти к покупке обуви" << endl
                    << "4. Вернуться в предыдущее меню" << endl;
               choice1=set_num(1,4);
                switch (choice1)
                {
                case 1: {
                    if (lm.GetSize() != 0)
                        lm.show_list();
                    else
                        cout << "В данном каталоге сейчас пусто. Приносим свои извинения" << endl;
                    cout << "Введите любой символ чтобы продоложить: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break;
                }
                case 2:
                    if(lm.GetSize()!=0)
                    search(lm);
                    else {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lm.GetSize() != 0) {
                        int num;
                        cout << "Выберите номер пары обуви, которую вы хотите заказать" << endl;
                        lm.show_list();
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        cout << "Пара закзана вы сможете забрать ее через две недели в магазине в " << lm[num].get_city() << endl;
                        lmsold.push_back(lm[num]);
                        lm.removeAt(num);
                    }
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Перейти в меню поиска обуви" << endl
                    << "3. Перейти к покупке обуви" << endl
                    << "4. Вернуться в предыдущее меню" << endl;
                choice2=set_num(1,4);
                switch (choice2)
                {
                case 1: {
                    if (lw.GetSize() != 0)
                        lw.show_list();
                    else
                        cout << "На данный момент обувь в каталоге отсутствует. Приносим свои извинения" << endl;
                    cout << "Введите любой символ чтобы продоложить: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break;
                }
                case 2:
                    if(lw.GetSize()!=0)
                    search(lw);
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lw.GetSize() != 0) {
                        int num1;
                        cout << "Выберите номер пары обуви, которую вы хотите заказать" << endl;
                        lw.show_list();
                        num1 = set_num(1, lw.GetSize());
                        num1 -= 1;
                        cout << "Пара закзана вы сможете забрать ее через две недели в магазине в " << lw[num1].get_city() << endl;
                        lwsold.push_back(lw[num1]);
                        lw.removeAt(num1);
                    }
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Перейти в меню поиска обуви" << endl
                    << "3. Перейти к покупке обуви" << endl
                    << "4. Вернуться в предыдущее меню" << endl;
                choice3=set_num(1,4);
                switch (choice3)
                {
                case 1: {
                    if (lk.GetSize() != 0)
                        lk.show_list();
                    else
                        cout << "На данный момент обувь в каталоге отсутствует. Приносим свои извинения" << endl;
                    cout << "Введите любой символ чтобы продоложить: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lk.GetSize()!=0)
                    search(lk);
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    break;
                case 3:
                    if (lk.GetSize() != 0) {
                        int num3;
                        cout << "Выберите номер пары обуви, которую вы хотите заказать" << endl;
                        lk.show_list();
                        num3 = set_num(1, lk.GetSize());
                        num3 -= 1;
                        cout << "Пара закзана вы сможете забрать ее через две недели в магазине в " << lk[num3].get_city() << endl;
                        lksold.push_back(lk[num3]);
                        lk.removeAt(num3);
                    }
                    else {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
        cout << "1. Работа с мужским каталогом" << endl
            << "2. Работа с женским каталогом " << endl
            << "3. Работа с детским каталогом" << endl
            << "4. Сменить пользователя" << endl
            << "5. Создать новую учетную запись" << endl
            << "6. Посмотреть отчет о продажах" << endl
            << "7. Выход" << endl;
        choice =set_num(1,7); 
        switch (choice)
        {
        case 1:
            int choice1;
            do {
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Меню поиска обуви" << endl
                    << "3. Выставить новую пару на продажу" << endl
                    << "4. Установить скидку на пару" << endl
                    << "5. Редактировать информацию о паре обуви" << endl
                    << "6. Вернуться в предыдущее меню" << endl;
                choice1=set_num(1,6);
                switch (choice1)
                {
                case 1: {
                    if (lm.GetSize() != 0)
                        lm.show_list();
                    else
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl;
                    string a;
                    cout << "Введите любой символ чтоб продолжить: ";
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lm.GetSize()!=0)
                    search(lm);
                    else {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                        cout << "Введите номер пары, которую требуется поставить на скидку: ";
                        int num;
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        lm[num].set_sale();
                    }
                    else {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                    break;
                case 5: {
                    if (lm.GetSize() != 0) {
                        lm.show_list();
                        cout << "Введите номер пары, чью информацию требуется изменить: ";
                        int num;
                        num = set_num(1, lm.GetSize());
                        num -= 1;
                        lm[num].change_pair();
                        cout << "Информация о паре № " << num + 1 << " успешно изменена" << endl;
                        cout <<  "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Меню поиска обуви" << endl
                    << "3. Выставить новую пару на продажу" << endl
                    << "4. Установить скидку на пару" << endl
                    << "5. Редактировать информацию о паре обуви" << endl
                    << "6. Вернуться в предыдущее меню" << endl;
                choice2=set_num(1,6);
               
                switch (choice2)
                {
                case 1: {
                    if (lw.GetSize() != 0)
                        lw.show_list();
                    else
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl;
                    cout << "Введите любой символ чтоб продолжить: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lw.GetSize()!=0)
                    search(lw);
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                        cout << "Введите номер пары, которую требуется поставить на скидку: ";
                        int num;
                        num = set_num(1, lw.GetSize());
                        num -= 1;
                        lw[num].set_sale();
                    }
                    else
                    {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                break;
                case 5: {
                    if (lw.GetSize() != 0) {
                        lw.show_list();
                        cout << "Введите номер пары, чью информацию требуется изменить: ";
                        int num;
                        num = set_num(1, lw.GetSize());
                        num -= 1;
                        lw[num].change_pair();
                        cout << "Информация о паре № " << num + 1 << " успешно изменена" << endl;
                        cout  << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else
                    {
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                cout << "1. Посмотреть обувь в наличии" << endl
                    << "2. Меню поиска обуви" << endl
                    << "3. Выставить новую пару на продажу" << endl
                    << "4. Установить скидку на пару" << endl
                    << "5. Редактировать информацию о паре обуви" << endl
                    << "6. Вернуться в предыдущее меню" << endl;
                choice3=set_num(1,6);
                
                switch (choice3)
                {
                case 1: {
                    if (lk.GetSize() != 0)
                        lk.show_list();
                    else
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl;
                    cout << "Введите любой символ чтоб продолжить: ";
                    string a;
                    cin >> a;
                    system("cls");
                    break; }
                case 2:
                    if(lk.GetSize()!=0)
                    search(lk);
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                        cout << "Введите номер пары, которую требуется поставить на скидку: ";
                        int num;
                        num = set_num(1, lk.GetSize());
                        num -= 1;
                        lk[num].set_sale();
                    }
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                }
                break;
                case 5: {
                    if (lk.GetSize() != 0) {
                        lk.show_list();
                        cout << "Введите номер пары, чью информацию требуется изменить: ";
                        int num;
                        num = set_num(1, lk.GetSize());
                        num -= 1;
                        lk[num].change_pair();
                        cout << "Информация о паре № " << num + 1 << " успешно изменена" << endl;
                        cout << "Введите любой символ чтоб продолжить: ";
                        string a;
                        cin >> a;
                        system("cls");
                    }
                    else{
                        cout << "На данный момент обувь в этом каталоге отсутствует" << endl << "Введите любой символ чтоб продолжить: ";
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
                cout << "1. Посмотреть все проданные пары обуви" << endl
                    << "2. Посмотреть отчёт о работе магазина" << endl
                    << "3. Вернуться в предыдущее меню" << endl;
                ch=set_num(1,3);
                switch (ch)
                {
                case 1: {
                    if (lmsold.GetSize() != 0) {
                        cout << "Мужская обувь" << endl;
                        lmsold.show_list();
                    }
                    if (lwsold.GetSize() != 0) {
                        cout << "Женская обувь" << endl;
                        lwsold.show_list();
                    }
                    if (lksold.GetSize() != 0) {
                        cout << "Детская обувь" << endl;
                        lksold.show_list();
                    }
                    if (lmsold.GetSize() == 0 && lwsold.GetSize() == 0 && lksold.GetSize() == 0)
                        cout << "Ни одна пара обуви еще не продана" << endl;
                    cout << "Введите любой символ чтоб продолжить: ";
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
                    cout <<"|"<< setw(28) << "В наличии" << setw(17) <<"|"<< endl;
                    cout <<"|"<< setw(15) << "Мужских пар |" << setw(15) << "Женских пар |" << setw(15) << "Детских пар |"<< endl;
                    cout <<"|"<< setw(8) << lm.GetSize()<<setw(7)<<"|"<<setw(8)<< lw.GetSize()<<setw(7)<<"|"<< setw(8) << lk.GetSize()<<setw(7)<<"|"<< endl;
                    cout <<"|"<< setw(30) << "Всего продано"<<setw(15)<<"|"<<endl;
                    cout <<"|"<<setw(15)<< "Мужских пар |" <<setw(15)<<"Женских пар |"<<setw(15)<<"Детских пар |"<<endl;
                    cout <<"|" << setw(8) << lmsold.GetSize() << setw(7) << "|" << setw(8) << lwsold.GetSize() << setw(7) << "|" << setw(8) << lksold.GetSize() << setw(7) << "|" << endl;
                    cout <<"|"<< setw(27) << "Прибыль" << setw(18)<<"|"<< endl;
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



 

