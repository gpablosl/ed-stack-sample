#include<iostream>
#include "Stack.hh"

int main()
{
    //esta vacio
    Stack* stack{new Stack};
    stack->Print();
    //imprime el 1
    stack->Add(new Book("libro 1", "autor 1"));
    stack->Print();
    //imprime el 2 y 1
    stack->Add(new Book("libro 2", "autor 2"));
    stack->Print();
    //imprime el 3, 2 y 1
    stack->Add(new Book("libro 3", "autor 3"));
    stack->Print();
    //destruye el 3
    stack->Pop();
    std::cout << std::endl;
    //imprime el 2 y 1
    stack->Print();
    std::cout << std::endl;

    //imprime el nombre y autor de lo que esta en la cima de la pila
    std::cout << stack->Peek()->GetName() << std::endl;
    std::cout << stack->Peek()->GetAuthor() << std::endl;

    std::cin.get();

    delete stack;
    return 0;
}