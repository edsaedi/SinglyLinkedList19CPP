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
	bool Contains(T value);
	Node<T>* Search(T value);
	size_t GetCount() const;
};

//Make sure that you are able to pass in the priavte variables
template <typename T>
void LinkedList<T>::AddFirst(T value)
{
	std::unique_ptr<Node<T>> nodeToInsert = std::make_unique<Node<T>>(value);

	if (head == nullptr)
	{
		head = std::move(nodeToInsert);
		tail = head.get();
	}
	else
	{
		nodeToInsert->next = std::move(head);
		head = std::move(nodeToInsert);
	}

	Count++;
}

template <typename T>
void LinkedList<T>::AddLast(T value)
{
	auto nodeToInsert = std::make_unique<Node<T>>(value);

	if (head == nullptr)
	{
		head = std::move(nodeToInsert);
		tail = head.get();
	}
	else
	{
		tail->next = std::move(nodeToInsert);
		tail = tail->next.get();
	}

	Count++;
}

template <typename T>
void LinkedList<T>::AddBefore(T value, std::unique_ptr<Node<T>> item)
{

}

template <typename T>
void LinkedList<T>::AddAfter(T value, std::unique_ptr<Node<T>> item)
{
	auto result = Search(item->value);
	auto valueToBeInserted = std::make_unique<Node<T>>(value);
	valueToBeInserted->next = std::move(result->next);
	//Finish up
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
	head = {};
	tail = {};
	Count = 0;
}


template <typename T>
Node<T>* LinkedList<T>::Search(T value)
{
	auto node = head.get();

	while (node)
	{
		if (node->value == value)
		{
			return node;
		}

		node = node->next.get();
	}

	return nullptr;
}


template <typename T>
bool LinkedList<T>::Contains(T value)
{
	auto result = Search(value);
	if (result)
	{
		return true;
	}

	return false;
}

template <typename T>
size_t LinkedList<T>::GetCount() const
{
	return this->Count;
}