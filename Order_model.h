#include "Phone_provider.h"

struct Order
{
private:
	string item;
	double price;
	bool isCash;
	string adress;
public:
	void setItem(string item)
	{
		this->item = item;
	}
	void setPrice(double price)
	{
		this->price = price;
	}
	void setIsCash(bool isCash)
	{
		this->isCash = isCash;
	}
	void setAdress(string adress)
	{
		this->adress = adress;
	}
	string getItem()
	{
		return item;
	}
	double getPrice()
	{
		return price;
	}
	bool getIsCash()
	{
		return isCash;
	}
	string getAdress()
	{
		return adress;
	}
	Order()
	{
		this->setItem("");
		this->setPrice(0.0);
		this->setIsCash(true);
		this->setAdress("");
	}
	Order(string item, double price, bool isCash, string adress)
	{
		this->setItem(item);
		this->setPrice(price);
		this->setIsCash(isCash);
		this->setAdress(adress);
	}
	void printOrder()
	{
		cout << "Item: " << this->getItem() << "\nPrice: " << this->getPrice() << endl;
		cout << "Payment method: ";
		(isCash) ? cout << "Cash" << endl : cout << "Debit Card" << endl;
		cout << "Adress: " << this->getAdress() << endl;
	}
	~Order() = default;

};