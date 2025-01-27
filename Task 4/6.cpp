#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
//Задание взял у Александра Бутусова 1/42
#include <cmath> //Математическая библиотека
using namespace std; //Обявление пространства имён std
void calc(int n) //Указатель функции
    int proizvedenie = 1; //целочисленный тип данных (произведение = 1)
    while (n > 0) //Цикл, повторяющий действия, пока условие остаётся истинным (n больше 0)
    {
        proizvedenie *= n % 10; //Возвращает остаток от деления
        n /= 10; //Деление = 10
    }
    cout << proizvedenie; //Вывод данных
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    long n; //Большие числа (n)
    cin >> n; //Ввод данных (n)
    while (n < 100000 || n>999999) //Цикл, повторяющий действия, пока условие остаётся истинным (n<100000 или n>999999)
    {
        cout << "Chislo ne sootvet trebovaniu" << endl; //Вывод данных 
        cin >> n; //Ввод данных (n)
    }
    calc(n); //Калькулятор (n)
}
