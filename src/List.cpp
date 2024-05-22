#include <iostream>
#include "List.h"

List::List() {
	head_ = nullptr;
}

List::List(int arr[], int size) {
	for (int i = size-1; i >= 0; i--) {
		InsertFront(arr[i]);
	}
}

List::~List() {
	Node* tmp;
	while (head_ != nullptr) {
		tmp = head_;
		head_ = head_->next_;
		delete tmp;
	}
}

void List::Print() {
	for (Node* i = head_; i != nullptr; i = i->next_) {
		std::cout << i->data_ << " ";
	}
	std::cout << std::endl;
}

void List::InsertFront(int val) {
	Node* n = new Node(val);
	n->next_ = head_;
	head_ = n;
}

void List::RemoveFront() {

}

Node* List::Find(int val) {
	return nullptr;
}

void List::InsertAfter(int val, Node* n) {

}

