//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
using namespace std; //Обявление пространства имён std
void function(int f[]) //Указатель функции с наименованием "Фуекция"
{
    for (int i = 3; i < 18; i++) //Цикл с точным кол-вом действий
    {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3]; //Формула вычисления f
        cout << f[i] << endl; //Вывод данных значения f
    }
}
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int.
{
    int f[15]; //Предоставляет целое число значению f 
    f[0] = 0; //Нулевое значение равно 0
    f[1] = 3; //Первое значение равно 3
    f[2] = 5; //Второе значение равно 5
    function(f); //Вывод функций
}