#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");  // Позволяет писать на русском

    cout << "Задание№1" << endl; //Перевод на следующую строку
    cout << "Клименков Сергей 221-331 " << endl;

    cout << "Задание№2" << endl;
    cout << "минимальные/максимальные значения встроенных типов данных и их размер" << endl;
    cout << "size int=" << sizeof(int) << ",max int=" << INT_MAX << ",min int=" << INT_MIN << endl;
    cout << "size unsigned int=" << sizeof(unsigned int) << ",max unsigned int=" << fixed << setprecision(2) << (pow(2, sizeof(unsigned int) * 8.0 - 1) - 1) << endl;
    cout << "size short=" << sizeof(short) << ",max short=" <<SHRT_MAX<<",min short="<<SHRT_MIN << endl;
    cout << "size unsigned short=" << sizeof(unsigned short) << ",max unsigned short=" <<fixed << setprecision(2) << (pow(2, sizeof(unsigned short) * 8.0) - 1) << endl;
    cout << "size long=" << sizeof(long int) << ",max long=" << LONG_MAX<<".min long"<<LONG_MIN<< endl;
    cout << "size long long=" << sizeof(unsigned long int) << ",max long long=" << fixed << setprecision(2) << (pow(2, sizeof(unsigned long int) * 8.0) - 1) << endl;
    cout << "size double=" << sizeof(double) << ",max double=" << DBL_MAX << ",min double" << DBL_MIN << endl;
    cout <<"size char="<< sizeof(char)<<",max char="<<CHAR_MAX << ",min char=" << CHAR_MIN << endl;
    cout << "size bool=" << sizeof(bool) << ",max bool=" << fixed << setprecision(2) << (pow(2, sizeof(bool) * 8.0) - 1) << endl;

    cout << "Задание№3" << endl;
    int i;
    cout << "Введите число:";
    cin >> i;
    cout << "В шестнадцатиричном виде:" << std::hex << i << std::endl;
    cout << "В бинарном виде:" << std::bitset<16>(i) << std::endl;
    cout << "bool " << bool(i) << endl;
    cout << "double " << double(i) << endl;
    cout << "char " << char(i) << endl;

    cout << "Задание№4" << endl;
    int a, b;
    cout << "Впишите переменные: ";
    cin >> a >> b;
    cout << "x = " << (float)b << "/" << (float)a << " OR " << (float)b / (float)a << endl;

    cout << "Задание№5" << endl;
    int x0, y0, x1, y1;
    cout << "Первая координата: ";
    cin >> x0 >> y0;
    cout << "Вторая координата: ";
    cin >> x1 >> y1;
    cout << "Середина отрезка = " << ((float)x0 + (float)x1) / 2 << " ; " << ((float)y0 + (float)y1) / 2 << endl;

    return 0;
    //sizeof-Определяет размер типа данных;
}
