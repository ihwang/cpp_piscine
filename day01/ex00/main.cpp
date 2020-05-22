#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    std::string name = "donkey";
    std::string color = "brown";
    Pony *heap = new Pony(name, color);

    std::cout << "--- Heap --- " << std::endl;
    heap->print_info();
    delete heap;
    return ;
}

void ponyOnTheStack(void)
{
    std::string name = "Grey";
    std::string color = "Grey";
    Pony stack(name, color);

    std::cout << "--- stack --- " << std::endl;
    stack.print_info();
    return ;
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}