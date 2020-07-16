#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Node.h"

template <typename T>
class LinkedList
{
private:
	Node<T> head;
	Node<T> tail;

public:
	int Count{};

	LinkedList(Node<T> Head, Node<T> Tail) : head(Head), tail(Tail) {};

	void AddFirst(T value);
	void AddLast(T value);
	void AddBefore(T value, Node<T> item);
	void AddAfter(T value, Node<T> item);
	bool RemoveFirst();
	bool RemoveLast();
	bool Remove(T value);
	void Clear();
	bool Contains();
	Node<T> Search(T value);
	int GetCount();
};

