

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
        out<<setw(5)<< shoe.sale << "% скидка |" << endl;
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
    cout << "Установите размер скидки: ";
    sale=set_num(10,90);
    price = price - price * sale / 100;
}
void Shoe::show_pair() {
    cout << "|" << setw(13) << model << "|" << setw(20) << manufacturer << "|" << setw(10) << material << "|" << setw(13) << color << "|" << setw(13) << season << "|" << setw(10) << size << "|" << setw(5) << price << " BYN";
    if (sale != 0)
        cout << setw(5) << sale << "% скидка |" << endl;
    else
        cout << setw(15) << "|" << endl;
}
void Men_shoe::set_pair() {
    int choice;
    do {
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Ботинки" << endl << "3. Туфли" << endl << "4. Сандали" << endl << "5. Мокасины" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "Кроссовки";
            break;
        case 2:
            model = "Ботинки";
            break;
        case 3:
            model = "Туфли";
            break;
        case 4:
            model = "Сандали";
            break;
        case 5:
            model = "Мокасины";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "Введите производителя: ";
    manufacturer=set_string();
    size = set_size_men();
    do {
        cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " <<endl<<"4. Замша"<< endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "Кожа";
            break;
        case 2:
            material = "Резина";
            break;
        case 3:
            material = "Кож-зам";
            break;
        case 4:
            material = "Замша";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "Введите цвет обуви: ";
    color = set_string();
    do {
        cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "Лето";
            break;
        case 2:
            season = "Зима";
            break;
        case 3:
            season = "Деми-сезон";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "Введиет цену: ";
    price = set_price();
    sale = 0;
    do {
        cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "Минск";
            break;
        case 2:
            city = "Брест";
            break;
        case 3:
            city = "Витебск";
            break;
        case 4:
            city = "Полоцк";
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
    cout << "Хотите изменить модель?" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Ботинки" << endl << "3. Туфли" << endl << "4. Сандали" << endl << "5. Мокасины" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "Кроссовки";
                break;
            case 2:
                model = "Ботинки";
                break;
            case 3:
                model = "Туфли";
                break;
            case 4:
                model = "Сандали";
                break;
            case 5:
                model = "Мокасины";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить производителя" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { 
        cout << "Введите страну-производителя: "; 
        manufacturer = set_string(); 
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить материал" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " << endl << "4. Замша" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "Кожа";
                break;
            case 2:
                material = "Резина";
                break;
            case 3:
                material = "Кож-зам";
                break;
            case 4:
                material = "Замша";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить цвет" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите цвет: "; color = set_string(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить сезон подходящий для этой пары" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "Лето";
                break;
            case 2:
                season = "Зима";
                break;
            case 3:
                season = "Деми-сезон";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить размер" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size = set_size_men();
    print_hat();
    show_pair();
    cout << "Хотите изменить цену" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите цену: "; price = set_price(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить адрес магазина, куда завезут пару" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "Минск";
                break;
            case 2:
                city = "Брест";
                break;
            case 3:
                city = "Витебск";
                break;
            case 4:
                city = "Полоцк";
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
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Туфли" << endl << "3. Сапоги" << endl << "4. Босоножки" << endl << "5. Эспадрильи" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "Кроссовки";
            break;
        case 2:
            model = "Туфли";
            break;
        case 3:
            model = "Сапоги";
            break;
        case 4:
            model = "Босоножки";
            break;
        case 5:
            model = "Эспадрильи";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "Введите производителя: ";
    manufacturer=set_string();
    size = set_size_women();
    
    do {
        cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " << endl << "4. Замша" << endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "Кожа";
            break;
        case 2:
            material = "Резина";
            break;
        case 3:
            material = "Кож-зам";
            break;
        case 4:
            material = "Замша";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "Введите цвет обуви: ";
    color = set_string();
    do {
        cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "Лето";
            break;
        case 2:
            season = "Зима";
            break;
        case 3:
            season = "Деми-сезон";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "Введиет цену: ";
    price = set_price();
    sale = 0;
    do {
        cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "Минск";
            break;
        case 2:
            city = "Брест";
            break;
        case 3:
            city = "Витебск";
            break;
        case 4:
            city = "Полоцк";
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
    cout << "Хотите изменить модель?" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Туфли" << endl << "3. Сапоги" << endl << "4. Босоножки" << endl << "5. Эспадрильи" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "Кроссовки";
                break;
            case 2:
                model = "Туфли";
                break;
            case 3:
                model = "Сапоги";
                break;
            case 4:
                model = "Босоножки";
                break;
            case 5:
                model = "Эспадрильи";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить страну-производителя?" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите страну-производиетля: "; manufacturer = set_string(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить материал" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " << endl << "4. Замша" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "Кожа";
                break;
            case 2:
                material = "Резина";
                break;
            case 3:
                material = "Кож-зам";
                break;
            case 4:
                material = "Замша";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить цвет" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        cout << "Введите цвет: "; color = set_string();
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить сезон подходящий для этой пары" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "Лето";
                break;
            case 2:
                season = "Зима";
                break;
            case 3:
                season = "Деми-сезон";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить размер" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size=set_size_women();
    print_hat();
    show_pair();
    cout << "Хотите изменить цену" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        cout << "Введите цену: "; 
        price = set_price();
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить адрес магазина, куда завезут пару" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "Минск";
                break;
            case 2:
                city = "Брест";
                break;
            case 3:
                city = "Витебск";
                break;
            case 4:
                city = "Полоцк";
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
        cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Босоножки" << endl << "3. Тапочки" << endl << "4. Чешки" << endl << "5. Сапожки" << endl;
        choice=set_num(1,5);
        switch (choice) {
        case 1:
            model = "Кроссовки";
            break;
        case 2:
            model = "Босоножки";
            break;
        case 3:
            model = "Тапочки";
            break;
        case 4:
            model = "Чешки";
            break;
        case 5:
            model = "Сапожки";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 5);
    cout << "Введите производителя: ";
    manufacturer=set_string();
    size = set_size_kids();
    do {
        cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " << endl << "4. Замша" << endl;
        choice = set_num(1, 4);
        switch (choice)
        {
        case 1:
            material = "Кожа";
            break;
        case 2:
            material = "Резина";
            break;
        case 3:
            material = "Кож-зам";
            break;
        case 4:
            material = "Замша";
        default:
            break;
        }
    } while (choice <= 0 || choice > 4);
    cout << "Введите цвет обуви: ";
    color = set_string();
    do {
        cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
        choice = set_num(1, 3);
        switch (choice)
        {
        case 1:
            season = "Лето";
            break;
        case 2:
            season = "Зима";
            break;
        case 3:
            season = "Деми-сезон";
            break;
        default:
            break;
        }
    } while (choice <= 0 || choice > 3);
    cout << "Введиет цену: ";
    price = set_price();
    sale = 0;
    do {
        cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
        choice=set_num(1,4);
        switch (choice)
        {
        case 1:
            city = "Минск";
            break;
        case 2:
            city = "Брест";
            break;
        case 3:
            city = "Витебск";
            break;
        case 4:
            city = "Полоцк";
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
    cout << "Хотите изменить модель?" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "выберите модель:" << endl << "1. Кроссовки" << endl << "2. Босоножки" << endl << "3. Тапочки" << endl << "4. Чешки" << endl << "5. Сапожки" << endl;
            choice1 = set_num(1, 5);
            switch (choice1) {
            case 1:
                model = "Кроссовки";
                break;
            case 2:
                model = "Босоножки";
                break;
            case 3:
                model = "Тапочки";
                break;
            case 4:
                model = "Чешки";
                break;
            case 5:
                model = "Сапожки";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 5);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить страну-производителя" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите страну-производителя: "; manufacturer = set_string(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить материал" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите материал обуви" << endl << "1. Кожа " << endl << "2. Резина " << endl << "3. Кож-зам " << endl << "4. Замша" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                material = "Кожа";
                break;
            case 2:
                material = "Резина";
                break;
            case 3:
                material = "Кож-зам";
                break;
            case 4:
                material = "Замша";
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить цвет" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите цвет: "; color = set_string(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить сезон подходящий для этой пары" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите подходящий для данной пары сезон" << endl << "1. Лето " << endl << "2. Зима " << endl << "3. Деми-сезон " << endl;
            choice1 = set_num(1, 3);
            switch (choice1)
            {
            case 1:
                season = "Лето";
                break;
            case 2:
                season = "Зима";
                break;
            case 3:
                season = "Деми-сезон";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 3);
    }
    print_hat();
    show_pair();
    cout << "Хотите изменить размер" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) size = set_size_kids();
    print_hat();
    show_pair();
    cout << "Хотите изменить цену" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) { cout << "Введите цену: "; price = set_price(); }
    print_hat();
    show_pair();
    cout << "Хотите изменить адрес магазина, куда завезут пару" << endl << "1. Да" << endl << "2. Нет" << endl;
    choice = set_num(1, 2);
    if (choice == 1) {
        do {
            cout << "Выберите магазин, в который завезут пару:" << endl << "1. Магазин в Минске" << endl << "2. Магазин в Бресте" << endl << "3. Магазин в Витебске" << endl << "4. Магазин в Полоцке" << endl;
            choice1 = set_num(1, 4);
            switch (choice1)
            {
            case 1:
                city = "Минск";
                break;
            case 2:
                city = "Брест";
                break;
            case 3:
                city = "Витебск";
                break;
            case 4:
                city = "Полоцк";
                break;
            default:
                break;
            }
        } while (choice1 <= 0 || choice1 > 4);
    }
}