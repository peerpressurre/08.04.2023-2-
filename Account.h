#include "library.h"
struct Account
{
private:
	string login;
	string password;
public:
	void setLogin(string login)
	{
		this->login = login;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	string getLogin()
	{
		return this->login;
	}
	string getPassword()
	{
		return this->password;
	}
	Account()
	{
		this->setLogin("");
		this->setPassword("");
	}
	Account(string login, string password)
	{
		this->setLogin(login);
		this->setPassword(password);
	}
	~Account() = default;
};
