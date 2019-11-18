#include <iostream>
#include "tstring.h"
using namespace std;

auto fun(const char* s) {
    return TString(s);
}

int main() {
    TString s1;
    TString s2("dzien dobry");
    TString s3 = s2;
    s1 = fun("drugi obiekt");  
    
    cout << s1 << endl;
    cin >> s1;
    cout << s1 << endl;


    cout << "----------------" << endl;
}