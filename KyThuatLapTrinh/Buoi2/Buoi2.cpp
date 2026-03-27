#include <iostream>
#include <string>
using namespace std;
struct Person {
	int id;
	string name;

};
struct Node{
Person data;
Node* next;
};
struct Linkedlist {
	Node* head;
	void Show() {
		if (head == NULL) {
			cout << "Empty list" << endl;
			return;
		}
		Node* item = head;
		while (item != NULL) {
			cout << "id:" << item->data.id << endl;
			cout << "name:" << item->data.name << endl;
			item = item->next;
		}
	}
};
int main() {
	Linkedlist list = { NULL }
	do {
		system("cls");
		cout << "------HUMAN RESOURSE---------" << endl;
		cout << "1. View person list" << endl;
		cout << "2.Add a person" << endl;
		cout << "3.Remove a person" << endl;
		cout << "4.Find a person by name" << endl;
		cout << "5.Export to file" << endl;
		cout << "6.Import to file" << endl;
		cout << "0.Exit" << endl;
		cout << "________________" << endl;
		cout << "Your command:";
		int cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 1: {
			ViewPersonList(list);
			break;
		}
		case 2: {
			AddPerson(list);
			break;
		}
		case 3: {
			int id;
			cout << "Input ID toremove:";
			cin >> id;
			RemovePerson(list, id);
			break;
		}
		case 4: {
			string name;
			cout << "input name to find:";
			cin.ignore();
			getline(cin, name);
			bool res = false;
			if (res) {
				cout << " found person with name" << name << endl;
			}
			else
				cout << "perso isn't esixted" << endl;
			break;
		}
		case 5: {
			cout << "export successfully" << endl;
			break;
		}
		case 6: {
			cout << "import successfully" << endl;
			break;
		}
		case 0: {
			return 0;
		}
		default:
			cout << "Your command isn't found.Try again..." << endl;
			break;
		}
		cout << "Press enter to continue...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}

