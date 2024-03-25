#include "Book.h"

int Book::entities = 0;

Book::Book(float cena, const string& tytul)
	: m_cena(cena), m_tytul(tytul)
{
	Book::entities += 1;
	m_id = Book::entities;
}

void Book::PrinfInfo() const
{
	std::cout << m_id << ": " << m_tytul << " Cena: " << m_cena << " zl" << endl;
}
