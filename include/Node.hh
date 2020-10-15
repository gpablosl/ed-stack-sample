#include "Book.hh"

struct Node
{
    Book* book{};
    Node* next{};

    Node(Book* book)
    {
        this->book = book;
    }
};
