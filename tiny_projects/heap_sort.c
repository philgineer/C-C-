#include <stdio.h>

int number = 9;
int heap[9] = {7,9,2,3,1,5,4,8,6};
int temp = 0;
int root, child;

int main(void) {
	// tree arch to max heap arch
	for (int i = 1; i < number; i++) {
		child = i;
		do {
			root = (child - 1) / 2;
			if (heap[root] < heap[child]) {
				temp = heap[root];
				heap[root] = heap[child];
				heap[child] = temp;
			}
			child = root;
		} while (child != 0);
	}

	// loop to sort heap
	for (int i = number - 1; i >= 0; i--) {
		// send max to end
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		root = 0;
		child = 1;
		do {
			child = 2 * root + 1;
			// find bigger one among child nodes
			if (heap[child] < heap[child + 1] && child < i - 1) {
				child++;
			}
			// if child is bigger than root, swap
			if (heap[root] < heap[child] && child < i) {
				temp = heap[root];
				heap[root] = heap[child];
				heap[child] = temp;
			}
			root = child;
		} while (child < i);
	}

	// print
	for (int i = 0; i < number; i++) {
		printf("%d", heap[i]);
	}
}
