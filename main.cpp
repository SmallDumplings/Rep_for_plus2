#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void get_text(ifstream& file, vector<string>& text_from_file){
    // функция которая считывает текст из файла
    string s;
    if(!file.is_open())
    {
        cout << "no open" << endl;
        return;
    }

    while(getline(file, s)){
        text_from_file.push_back(s);
    }

}

void print_text(vector<string>& text_from_file){
    for (const auto& line : text_from_file){
        cout << line << endl;
    }// функция которая выводит текст из файла
}

void write_text(vector<string>& text_from_file){
    // функция которая записывает текст из файла в другой файл
}

int main()
{
    vector<string> text_from_file;
    ifstream file("text.txt");

    get_text(file, text_from_file); //чтение текста из файла
    print_text(text_from_file); //вывод содержимого
    write_text(text_from_file);//записываю в файл

    file.close();
    return 0;
}
