#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Person {
	int id;
	string name;
	int age;
	string address;
};
void ViewPersonList(vector<Person>p) {
	if (p.size() == 0)
		cout << "An empty list" << endl;
	else {
		for (int i = 0; i < p.size(); i++) {
			cout << "Person" << (i + 1) << endl;
			cout<<"\t+ id:"<<p[i].id<<endl;
			cout << "\t+ Name:"<<p[i].name << endl;
			cout << "\t+ Age:" << p[i].age << endl;
			cout << "\t+ Address:" << p[i].address << endl;
		}
	}
}
void AddPerson(vector<Person>& p) {
	Person a;
	cout << "+id:";
	cin >> a.id;
	cout << "+name:";
	cin.ignore();
	getline(cin, a.name);
	cout << "+Age:";
	cin >> a.age;
	cout << "+Address:";
	cin.ignore();
	getline(cin, a.address);
	p.push_back(a);
	cout << "Add a person successfully" << endl;
}
void RemovePerson(vector<Person>& p, int id) {
	for (auto i = p.begin(); i != p.end();i++) {
		if (i->id == id) {
			p.erase(i);
			cout << "Remove a person successfully" << endl;
			return;
		}
	}
	cout << "Not found person with id:" << id << endl;
}
int main() {
	vector<Person> list;
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
			cout << "Your command isn't found.Try again..." << endl;
			break;
		}
		cout << "Press enter to continue...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}