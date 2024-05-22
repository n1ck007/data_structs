#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
public:
	Node* head_;
	List();
	List(int arr[], int size);
	~List();
	void Print();
	void InsertFront(int val);
	void RemoveFront();
	Node* Find(int val);
	void InsertAfter(int val, Node* n);
};

#endif
