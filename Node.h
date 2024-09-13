#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(int Data) {
		data = Data;
		next = nullptr;
	}
};

class List {
	Node* head;
	int num;
public:
	List() {
		head = nullptr;
		num = 0;
	}
	void Insert(int pos, int data) {
		Node* newnode = new Node(data);
		if (num == 0) {
			head = newnode;
		}
		else if (pos > num) {
			Node*temp = head;
			for (int i = 0; i < num-1; i++) {
				temp = temp->next;
			}
			temp->next = newnode;
		}
		else if (pos <= 0) {
			newnode->next = head;
			head = newnode;
		}
		else if (pos <= num) {
			Node* temp = head;
			for (int i = 0; i < pos-1; i++) {
				temp = temp->next;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
		num++;
	}
	void Delete(int pos) {
		Node* temp = head;


		if (pos <= 0) {
			head = temp->next;	
			delete temp;
		}else{
			if (pos > num-1) {
				pos = num-1;
			}
			for (int i = 0; i < pos - 1; i++) {
				temp = temp->next;
			}
			Node* temp1 = temp->next;
			temp->next = temp1->next;
			delete temp1;
		}

		num--;
	}
	int Seek(int data) {
		Node* temp = head;
		int temppos=-1;
		for (int i = 0; i < num; i++) {
			if (temp->data == data) {
				temppos = i;
				break;
			}
			else {
				temp = temp->next;
			}
		}
		return temppos;
	}
	int GetNum() { return num; }
	Node* GetHead() { return head; }
};

