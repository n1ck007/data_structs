#include <iostream>
#include "List.h"

using namespace std;

int main() {
	int arr[] = { 3,5,7 };
	List ll(arr, sizeof(arr) / sizeof(arr[0]));
	ll.Print();
	ll.InsertFront(77);
	ll.Print();
	cout << ll.Find(3)->data_ << endl;
	ll.RemoveFront();
	ll.Print();
	return 0;
}
