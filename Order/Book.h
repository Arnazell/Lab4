#pragma once
#include <iostream>
using namespace std;

class Book
{
	// zlicza ksiazki i ustawia id kazdej z nich
	static int entities;
private:
	unsigned int m_id;
	string m_tytul;
public:
	float m_cena;
	Book(float cena, const string& tytul);
	void PrinfInfo() const;

};