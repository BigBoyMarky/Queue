#include "Queue.h"

void Queue::enqueue(int val) {

	append(val);

}

int Queue::dequeue() {

	ListNode* node = _head->_next;
	int val = _head->_value;

	_head = node;

	return val;

}


