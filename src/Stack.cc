#include "Stack.hh"
#include <iostream>

Stack::Stack(){}

Stack::~Stack(){}


void Stack::Add(Book* book)
{
    Node* node{new Node(book)};

    if(IsEmpty())
    {
        first = node;
    }
    else
    {
        node->next = first;
        first = node;
    }
    
}


Book* Stack::Peek() const
{
    if(IsEmpty())
    {
        std::cout << "La pila esta vacia" << std::endl;
        return nullptr;
    }

    return first->book;
}

bool Stack::IsEmpty() const
{
    return !first;
}

void Stack::Pop()
{
    Node* current = first;
    first = first->next;
    delete current;
}

void Stack::Print()
{
    if(IsEmpty())
    {
        std::cout << "La pila esta vacia" << std::endl;
    }
    else
    {
        Node* current = first;
        while (current)
        {
            std::cout << "Nombre del libro: " << current->book->GetName() << std::endl;
            std::cout << "Nombre del autor: " << current->book->GetAuthor() << std::endl;
            std::cout << std::endl;
            current = current->next;
        }
    }
}