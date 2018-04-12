#include <iostream>
#include <string>

void print (const std::string& lv){ std::cout << lv << " is an l string." << std::endl; }
void print (const std::string&& rv){ std::cout << rv << " is an r string." << std::endl; }
void print (const char& lv){ std::cout << lv << " is an l char." << std::endl; }
void print (const char&& lv){ std::cout << lv << " is an r char." << std::endl; }

int main(){
    std::string r = "In parentheses";
    std::string l = "On its own";
    std::string *pr = &r;
    std::string *pl = &l;
    char cr = 'r';
    char cl = 'l';
    char* pcr = &cr;

    print(l);
    print(*pl);
    print(*(pl));
    print((r));
    print(r+l);
    print("hi");
    print(*("hi"));
    print(*"hi");
    print('r');
    print((char)cl);
    print(cl);
    print((cr));
    print(*pcr);
    *pcr;
    *(pcr);
    return 0;
}
