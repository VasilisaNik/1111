#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void Fun1(const string& filename, vector<string>& vect) //Чтение строк в вектор
{
    ifstream in;
    in.open("Text1.txt");
    if (!in.is_open())
    {
        wcout << L"Файл не открылся" << endl;
        return;
    }

    string stroka;
    while (getline(in, stroka))
    {
        vect.push_back(stroka);
    }
}

void Fun2(vector<string>& vect) //Дополнительная обработка данных
{

}

void Fun3(const string& filename, vector<string>& vect) //Запись в файл
{

}

int Fun4(vector<string>& vect) //Подсчет количества строк в векторе
{

}

void Fun5(vector<string>& vect) //Вывод строк на экран
{

}


int main()
{
    setlocale(LC_ALL, "RUS");
    //string filename1 = "Text1.txt"
    vector<string> vect;
    Fun1("Text1.txt", vect);
    Fun5(vect);
    Fun3("Text2.txt", vect);
    Fun2(vect);

    int lineCount = Fun4(vect);
    wcout << L"Количество строк: " << lineCount << endl;

    return 0;

}
