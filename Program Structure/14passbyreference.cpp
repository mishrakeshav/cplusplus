#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string concat(string &a, string &b){
    return a + " " + b;
}
void print(const string *c){
    cout << *c << endl;
}

int main(){
    string a, b, c;
    a = "This is the first string";
    b = "This is the second string";
    c = concat(a,b);
    print(&c);
}