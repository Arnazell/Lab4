#include <iostream>
#include "Book.h"
#include "Order.h"

using namespace std; 
const float delivery_cost = 9.99;


float calculate_total_price(Order& order, bool delivery)
{
    float suma = 0;
    // iteracja po kazdej ksiazce wchodzacej w sklad zamowienia i dodanie jej ceny do sumy
    for (Book* book : order.m_books)
    {
        suma += book->m_cena;
    }
    // tak zeby przypomniec sobie skladnie
    suma = delivery ? suma + delivery_cost : suma;

    return suma;
}

int main()
{
    Order z1;
    Book b1(23, "Nie pytaja cie o imie walczac z ostrym cieniem mgly");
    Book b2(13, "1984");
    Book b3(45, "Symfonia c++");

    z1 += b1;
    z1 += b2;
    z1 += b3;
    z1.PrintInfo();
    std::cout << "Do zaplaty: " << calculate_total_price(z1, true);
}

