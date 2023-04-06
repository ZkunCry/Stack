
#include <iostream>
#include "Stack.h"
#include <list>

int main()
{
	std::list<int> list(5);
	Stack<int, std::list<int>> stack(list);
	stack.Push(45);
	std::cout<<stack.Size();
}

