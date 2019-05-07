#ifndef STACK_H
#define STACK_H
#include <stdexcept>

template <typename T>
class Stack
{
private:
	// Nested class
	class Node
	{
	public:
		T item{};                             // The object stored in this node
		Node* next{};                         // Pointer to next node

		Node(const T& item) : item{ item } {}   // Create a node from an object
	};

	Node* head{};                             // Points to the top of the stack

public:
	Stack() = default;                         // Default constructor
	~Stack();                                  // Destructor

	void push(const T& item);                  // Push an object onto the stack
	T pop();                                   // Pop an object off the stack
	bool isEmpty() const;                      // Empty test
	int getCount();

	int size{ 0 };
};

// Destructor
template <typename T>
Stack<T>::~Stack()
{
	while (!isEmpty()) pop();
}


// Push an object onto the stack
template <typename T>
void Stack<T>::push(const T& item)
{
	this->size++;
	Node* node{ new Node(item) };                  // Create the new node
	node->next = head;                           // Point to the old top node
	head = node;                                 // Make the new node the top
}

// Pop an object off the stack
template <typename T>
T Stack<T>::pop()
{
	if (isEmpty())                               // If it's empty
		throw std::logic_error{ "Stack empty" };    // Pop is not valid so throw exception

	this->size--;
	auto* next{ head->next };
	T item{ head->item };
	// Delete the previous top node
	delete head;
	// Make next node the top
	head = next;                           

	return item;
}

template <typename T>
bool Stack<T>::isEmpty() const
{
	return head == nullptr;
}

template <typename T>
int Stack<T>::getCount()
{
	return this->size;
}

#endif