#ifdef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include <iostream>
#include <string>
using namespace std;
class Author{
private:
    string name;
    string surname;
public:
    Author():
    name(""), surname(""){};
    Author(string name, string surname)
    :name(name), surname(surname){};

    string getSurname(){
        return surname;
    };
    string getName(){
        return name;
    };
    string toString(){
        return name +" "+ surname;
    };
    void print(){
        cout<<name<<" "<<surname<<endl;
    }
};
#endif