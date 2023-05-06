#include "library.h"
struct Account
{
private:
	string login;
	string password;
	double balance;
public:
	void setLogin(string login)
	{
		this->login = login;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	void setBalance(double balance)
	{
		this->balance = balance;
	}
	string getLogin()
	{
		return this->login;
	}
	string getPassword()
	{
		return this->password;
	}
	double balance()
	{
		return this->balance;
	}
	Account()
	{
		this->setLogin("");
		this->setPassword("");
		this->setBalance(0.0);
	}
	Account(string login, string password)
	{
		this->setLogin(login);
		this->setPassword(password);
		this->setBalance(0.0);
	}
	~Account() = default;
};
