#include "Account.h"

struct Phone
{
private:
	string model;
	int storage;
	float display;
	double price;
public:
	void setModel(string model)
	{
		this->model = model;
	}
	void setStorage(int storage)
	{
		this->storage = storage;
	}
	void setDisplay(float display)
	{
		this->display = display;
	}
	void setPrice(double price)
	{
		this->price = price;
	}
	string getModel()
	{
		return model;
	}
	int getStorage()
	{
		return storage;
	}
	float getDisplay()
	{
		return display;
	}
	double getPrice()
	{
		return price;
	}
	Phone()
	{
		this->setModel("");
		this->setStorage(0);
		this->setDisplay(0.0);
		this->setPrice(0.0);
	}
	Phone(string model, int storage, float display, double price)
	{
		this->setModel(model); 
		this->setStorage(storage);
		this->setDisplay(display);
		this->setPrice(price);
	}
	~Phone() = default;

};