#include <iostream>
#include "tstring.h"
#include "operatory.h"
using namespace std;

auto fun(const char* s) {
    return TString(s);
}

int main() {
    TString s1;
    TString s2("dzien dobry");
    TString s3 = s2;
    s1 = fun("drugi obiekt");  
    
    cout << s1 + s2 << endl;
    s1 = s1 + "KONIEC";
    cout << s1 << endl;
    s3 += s3;
    cout << s3 << endl;

    cout << "----------------" << endl;
}