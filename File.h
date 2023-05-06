#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

//#include "Account.h"
#include "Order_model.h"

struct File
{
	fstream file;
	string path;

	File()
	{
		this->path = "file.txt";
	}
	File(string path)
	{
		this->path = path;
	}
	
	bool SignUp(Account acc)
	{
        file.open(path, ios::app);
        if (file.is_open())
        {
            file << acc.getLogin() << " ";
            file << acc.getPassword() << " ";
            file << "\n";
        }
        file.close();
	}
    bool LogIn(string data)
    {
        string line;
        file.open(path, ios::in);
        if (file.is_open())
        {
            while (getline(file, line, '\n'))
            {
                if (line == data)
                {
                    return true;
                    break;
                }
            }
        }
        else
        {
            cout << "Error opening file" << endl;
            return false;
        }
        file.close();
    }
	bool Write_order(Order order, string login)
	{
        file.open(path, ios::app);
        if (file.is_open())
        {
            file << login << " ";
            file << order.getItem() << " ";
            file << order.getPrice() << " ";
            (order.getIsCash()) ? file << "Cash" << " " : file << "Debit card" << " ";
            file << order.getAdress() << " ";
            file << "\n";
        }
        file.close();
	}
   string ReadOrder(string login)
   {
        string buf, line;
        file.open(path, ios::in);
        if (file.is_open())
        {
            while (getline(file, line, '\n'))
            {

                for (size_t i = 0, j = 0; i < mystrlen(line); i++)
                {
                    if (line[i] == ' ')
                    {
                        if (buf == login)
                        {
                            return line;
                            break;
                        }
                    }
                    buf += line[i];
                }
                buf = "";
            }
        }
        else
        {
            cout << "Error opening file" << endl;
        }
        file.close();
   }
    bool Read(string& text) {
        string line;
        file.open(path, ios::in);
        if (file.is_open())
        {
            while (getline(file, line))
            {
                text += line;
                text += "\n";
            }
            this->CloseFile();
            return true;
        }
        else
        {
            return false;
        }
    }
    void CloseFile() {
        this->file.close();
    }
    bool isEmpty()
    {
        string buf;
        if (Read(buf))
        {
            return (buf.empty()) ? true : false;
        }
        else
        {
            return true;
        }
    }
    ~File() = default;
};

int mystrlen(string str)
{
    int i = 0;
    int counter = 0;
    while (str[i] != '\0')
    {
        counter++;
        i++;
    }
    return counter;
}