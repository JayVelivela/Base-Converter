/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string decimalToBase(int n, int base) {
    if (n == 0) {
        return "0";
    }
    string digits = "";
    while (n > 0) {
        int remainder = n % base;
        if (remainder < 10)
            digits = char(remainder + '0') + digits;
        else
            digits = char(remainder - 10 + 'A') + digits;
        n /= base;
    }
    return digits;
}

int main() {
    cout << "A: 15 in base 2 = " << decimalToBase(15, 2) << endl;
    cout << "B: 38 in base 16 = " << decimalToBase(38, 16) << endl;
    cout << "C: 54 in base 6 = " << decimalToBase(54, 6) << endl;
    cout << "D: 19 in base 8 = " << decimalToBase(19, 8) << endl;
    cout << "E: 27 in base 3 = " << decimalToBase(27, 3) << endl;

    return 0;
}