// CPP program to illustrate
// std::stod()
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string b = "5.8874";
    double a = stod(b);
    int c = stoi(b);
    cout << b << " " << a << " " << c << endl;
}
