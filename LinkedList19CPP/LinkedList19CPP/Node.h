#pragma once
#include <iostream>
#include <string>
#include <memory>

template<typename T>
class Node
{
private:
	T value;
	std::unique_ptr<Node<T>> next;
public:
	Node(T value, std::unique_ptr<Node<T>> next) : value(value), next(next) {}
	T GetValue() { return value; };
	std::unique_ptr<Node<T>> GetNext() { return next; };
};
