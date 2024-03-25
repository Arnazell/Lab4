#include "Order.h"


int Order::entities = 0;

Order::Order()
{
	Order::entities += 1;
	m_id = Order::entities;
}

void Order::operator+=(Book& book)
{
	m_books.emplace_back(&book);
}

void Order::PrintInfo() const
{
	for (Book* book : m_books)
	{
		book->PrinfInfo();
	}
}
