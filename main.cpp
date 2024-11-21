#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
    // хочу шашлык
}

void Fun2(vector<string>& vect) //Дополнительная обработка данных
{
    int N = vect.size();
    for(int i = 0; i < N-1; i++)
    {
        for(int j = N-2; j >= i; j--)
        {
            if(vect[j] > vect[j+1])
            {
                swap (vect[j], vect[j+1]);
            }
        }
    }

}

void Fun3(const string& filename, vector<string>& vect) //Запись в файл
{
    ofstream out("Text2.txt");
    if (out.is_open())
    {
        for (auto& str : vect)
        {
            out << str << endl;
        }
        out.close();
    }
    else
    {
        wcout << L"Ошибка при открытии файла для записи:" << endl;
    }
}

int Fun4(vector<string>& vect) //Подсчет количества строк в векторе
{
    return vect.size();
}

void Fun5(vector<string>& vect) //Вывод строк на экран
{
    for (const auto& line : vect)
    {
        cout << line << endl;
    }
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

    int lcount = Fun4(vect);
    wcout << L"Количество строк: " << lcount << endl;

    return 0;

}
