#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

class Order
{
	// zlicza zamowienia i ustawia id kazdej z nich
	static int entities;

private:
	unsigned int m_id;
	// kazde zamowienie przechowuje tablice wskaznikow do obiektow typu ksiazka
	vector<Book*> m_books;
public:
	Order();
	// przeciazenie operatora aby wygodnie mozna bylo dodawac ksiazke do zamowienia
	void operator+=(Book& book);
	// drukuje informacje o kazdej ksiazce z zamowienia
	void PrintInfo() const;

	friend float calculate_total_price(Order& order, bool delivery);
};