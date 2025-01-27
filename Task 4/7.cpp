//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
#include <cmath> //Математическая библиотека
using namespace std; //Обявление пространства имён std
void draw(int h, int w, char sym) //Указатель функции 
{
    for (int i = 0; i < h; i++) //Цикл с точным кол-вом действий
    {
        if (i == 0) //Условие Если (i равно 0)
        {
            for (int i = 0; i < w; i++) //Цикл с точным кол-вом действий
            {
                cout << sym; //Вывод данных 
            }
            cout << endl; //Вывод данных
        }
        else if (i == h - 1) //Условие Иначе если (Ай = высота - 1)
        {
            for (int i = 0; i < w; i++) //Цикл с точным кол-вом действий
            {
                cout << sym; //Вывод данных (Символ)
            }
            cout << endl; //Вывод данных(Конец)
        }
        else if ((i != 0) && (i != h - 1)) //Условие Иначе если (Ай не равно 0 и Ай не равно высота -1)
        {
            cout << sym; //Вывод данных (Символ)
            for (int i = 0; i < w - 2; i++) //Цикл с точным кол-вом действий
            {
                cout << " "; //Вывод данных
            }
            cout << sym << endl; //Вывод данных(Конец)
        }
    }
}
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int.
{
    int h, w; //Целочисленные высота и Ширина)
    char sym; //Символьный - символы
    cin >> h >> w >> sym; //Ввод данных высоты ширины и символа 
    draw(h, w, sym); // Нарисовать прямоугольник с параметрами высоты, ширины и выбранного символа
