

#include <iostream>
#include<string>
using namespace std;

struct Author {
    int id;
    string name;
};

struct Book {
    int id;
    string name;
    Author author;
	friend ostream& operator<<(ostream& os, const Book& b) {
		os << "Book information:" << endl;
		os << "\t Id:" << b.id << endl;
		os << "\t Name:" << b.name << endl;
		os << "\t Author name:" << b.author.name << endl;
		return os;
	}
	friend istream operator <<(istream& is, Book& b){
		cout << "Book information:" << endl;
		cout << "\t Id:" << b.id << endl;
		cout << "\t Name:" << b.name << endl;
		cout << "\t Author name:" << b.author.name << endl;
		return os;
};
struct Node {
    Book data;
    Node* head;
	void Create() {
		data = b;
		next = nullptr;
	}
};
struct LinkedList {
    Node* head;
	void Show() {
		if (head == NULL) {
			cout << "No book available" << endl;
			return;
		}
		Node* item = head;
		while (item != NULL) {
			cout << item->data;
			item = item->next;

		}
	}
	void AddFirst(Node* p) {
		p->next = head;
		head = p;
	}
};
int main()
{
    LinkedList books = { NULL };
	do {
		system("cls");
		cout << "----------book managerment------------";
		cout << "1. Show all book" << endl;
		cout << "2.Add a book" << endl;
		cout << "3.Remove a book" << endl;
		cout << " 4.Update a book" << endl;
		cout << "5.Find a book by name" << endl;
		cout << "6.Export to file" << endl;
		cout << "7.Import to file" << endl;
		cout << "0.Exit" << endl;
		cout << "________________" << endl;
		cout << "Your command:";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			books.Show();
			break;
		}
		case 2: {
			Book b;
			cin >> b;
			Node* newNode = new Node;
			newNode->Create(b);
			books.AddFirst(newNode);

			break;
		}
		case 3: {

			break;
		}
		case 4: {

			break;
		}
		case 5: {

			break;
		}
		case 6: {

			break;
		}
		case 0: {
			return 0;
		}
		
		default:
			cout << "invalid choice.Try again..." << endl;
			break;
		}
	}
	system("pause");
	cout << "press any key to contineu....";
	} while (true);
       return 0;
}
   


