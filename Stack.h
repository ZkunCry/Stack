#pragma once
#include <vector>
#include <exception>
template<typename _T,typename Container = std::vector<_T>>
class Stack
{
	using value_type = _T;
	using reference = _T&;
private:
	Container container;
public:
	Stack(const Container &containertype);
	Stack();
	~Stack();

	void Push(const value_type &value);
	reference Top();
	void Pop();
	size_t Size()const;
	bool Empty()const;
};

template<class _T, class Container>
inline Stack<_T, Container>::Stack(const Container &containertype)
{
	container = containertype;
}

template<class _T, class Container>
inline Stack<_T, Container>::Stack()
{
	
}

template<class _T, class Container>
inline Stack<_T, Container>::~Stack()
{
	
}

template<typename _T, typename Container>
inline void Stack<_T, Container>::Push(const value_type& value)
{
	try
	{
		container.push_back(value);
	}
	catch (std::exception& exception)
	{
		std::cout<<exception.what();
	}
}

template<typename _T, typename Container>
typename inline Stack<_T, Container>::reference Stack<_T, Container>::Top() 
{
	if(container.size()!=0)
		return container.back();
}

template<typename _T, typename Container>
inline void Stack<_T, Container>::Pop()
{
	if (container.size() != 0)
		container.pop_back();
}

template<typename _T, typename Container>
inline size_t Stack<_T, Container>::Size() const
{
	return container.size();
}

template<typename _T, typename Container>
inline bool Stack<_T, Container>::Empty() const
{
	return container.size()>0;
}



