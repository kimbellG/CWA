#pragma once


#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "SetCheck.h"
using namespace std;
class Shoe {
protected:
    string color;
    string material;
    string season;
    string model;
    string manufacturer;
    double size;
    double price;
    string city;
    int sale=0;
public:
    
    double get_size() { return size; }
    double get_price() { return price; }
    string get_model() { return model; }
    string get_manufacturer() { return manufacturer; }
    string get_city() { return city; }
    virtual void set_pair() = 0;
    void set_sale();
    bool operator > (const Shoe& other) { return (this->price > other.price); }
    bool operator < (const Shoe& other) { return !(this->price > other.price); }
    bool operator ==(const Shoe& other) { return (this->model==other.model); }
    friend ofstream& operator <<(ofstream& out, const Shoe& shoe);
    friend ostream& operator <<(ostream& out, const Shoe& shoe);
    friend ifstream& operator >>(ifstream& in, Shoe& shoe);
    void show_pair();
};

class Men_shoe : public Shoe {

public:
    void set_pair();
    void change_pair();
};
class Women_shoe : public Shoe {
public:
    void set_pair();
    void change_pair();
};
class Kids_shoe : public Shoe {
public:
    void set_pair();
    void change_pair();
};


