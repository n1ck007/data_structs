#include <iostream>
#include "List.h"

using namespace std;

int main() {
	int arr[] = { 3,5,7 };
	List* ll = new List(arr, sizeof(arr) / sizeof(arr[0]));
	ll->Print();
	return 0;
}
