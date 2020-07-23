#pragma once
#include <iostream>
#include <string>
#include <memory>

template<typename T>
class Node
{

public:
	T value;
	std::unique_ptr<Node<T>> next;
	Node(T value) :value(value) {}
	Node(T value, std::unique_ptr<Node<T>> next) : value(value), next(next) {}
	T GetValue() { return value; };
	//std::unique_ptr<Node<T>>& GetNext() { return next; };
};
