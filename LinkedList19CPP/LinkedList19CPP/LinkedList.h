#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Node.h"

template <typename T>
class LinkedList
{
private:
	std::unique_ptr<Node<T>> head{};
	Node<T>* tail{};

public:
	int Count{};

	LinkedList() {};

	void AddFirst(T value);
	void AddLast(T value);
	void AddBefore(T value, std::unique_ptr<Node<T>> item);
	void AddAfter(T value, std::unique_ptr<Node<T>> item);
	bool RemoveFirst();
	bool RemoveLast();
	bool Remove(T value);
	void Clear();
	bool Contains();
	std::unique_ptr<Node<T>> Search(T value);
	size_t GetCount() const;
};

//Make sure that you are able to pass in the priavte variables
template <typename T>
void LinkedList<T>::AddFirst(T value)
{
	if (head == nullptr)
	{
		head = std::make_unique<Node<T>>(value);
		tail = head.get();

		return;
	}

	std::unique_ptr<Node<T>> nodeToInsert = std::make_unique<Node<T>>(value);


	Count++;
}

template <typename T>
void LinkedList<T>::AddLast(T value)
{

}

template <typename T>
void LinkedList<T>::AddBefore(T value, std::unique_ptr<Node<T>> item)
{

}

template <typename T>
void LinkedList<T>::AddAfter(T value, std::unique_ptr<Node<T>> item)
{

}

template <typename T>
bool LinkedList<T>::RemoveFirst()
{
	return false;
}

template <typename T>
bool LinkedList<T>::RemoveLast()
{
	return false;
}

template <typename T>
bool LinkedList<T>::Remove(T value)
{
	return false;
}

template <typename T>
void LinkedList<T>::Clear()
{

}

template <typename T>
bool LinkedList<T>::Contains()
{
	return false;
}

template <typename T>
std::unique_ptr<Node<T>> LinkedList<T>::Search(T value)
{
	return nullptr;
}

template <typename T>
size_t LinkedList<T>::GetCount() const
{
	return this->Count;
}