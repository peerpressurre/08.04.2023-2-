#include "Phone_model.h"

struct PhoneProvider
{
	Phone phones[6];

	PhoneProvider()
	{
		phones[0] = { "Iphone 14", 128, 6.1, 32512.00};
		phones[1] = { "Iphone 12", 256, 6.1, 29499.00};
		phones[2] = { "Iphone 12 mini", 128, 5.4, 14195.00};
		phones[3] = { "Samsung A53", 256, 6.7, 15599.00};
		phones[4] = { "Galaxy Z Flip", 512, 7.6, 38699.00 };
		phones[5] = { "Galaxy S21", 128, 6.2, 21599.00};
	}

	void printIos()
	{
		for (size_t i = 1; i < 3; i++)
		{
			cout << i+1 << ". " << phones[i].getModel() << "\nStorage: " << phones[i].getStorage() << "\nDisplay: " << phones[i].getDisplay() << "\nPrice: " << phones[i].getPrice() << endl;
		}
	}
	void printAndroid()
	{
		for (size_t i = 3; i <= 6; i++)
		{
			cout << i + 1 << ". " << phones[i].getModel() << "\nStorage: " << phones[i].getStorage() << "\nDisplay: " << phones[i].getDisplay() << "\nPrice: " << phones[i].getPrice() << endl;
		}
	}
	void printPhones()
	{
		for (size_t i = 0; i <= 6; i++)
		{
			cout << i + 1 << ". " << phones[i].getModel() << "\nStorage: " << phones[i].getStorage() << "\nDisplay: " << phones[i].getDisplay() << "\nPrice: " << phones[i].getPrice() << endl;
		}
	}
	~PhoneProvider() = default;
};