#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "LinkedList.h"
#include "Linklist.cpp"
using namespace std;

int main() {
    LinkedList<Account> account = { NULL };
    int choice;

    do {
        system("cls");
        cout << "BOOK MANAGEMENT" << endl;
        cout << "--------------------" << endl;
        cout << "1. Show all books" << endl;
        cout << "2. Add a book" << endl;
        cout << "3. Delete a book" << endl;
        cout << "4. Update a book" << endl;
        cout << "5. Find book" << endl;
        cout << "6. Export to file" << endl;
        cout << "7. Import to file" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            //books.Show();
            break;

        case 2: {
            /*Book b;
            cout << "Enter book: ";
            cin >> b;
            Node* newNode = new Node;
            newNode->data = b;
            books.AddFirst(newNode);
            break;*/
        }

        case 3: {
            /*int removed;
            cout << "Enter book's id to remove: ";
            cin >> removed;
            if (books.Remove(removed)) {
                cout << "Remove book successfully" << endl;
            }
            else {
                cout << "Invalid book id" << endl;
            }
            break;*/
        }

        case 4: {
            /*Book updated;
            cout << "Enter book id to update: ";
            cin >> updated;
            if (books.Update(updated)) {
                cout << "Update book successfully" << endl;
            }
            else {
                cout << "Invalid book id" << endl;
            }
            break;*/
        }
        
            case 5: {
                /*string bookname;
                cout << "Enter book's name to find: ";
                cin.ignore();
                getline(cin, bookname);
                Book res = books.Find(bookname);
                if (res != NULL) {
                    cout << res << endl;
                }
                else {
                    cout << "No book with name: " << bookname << endl;
                }
                break;*/
            }

            case 6: {
                /*books.Export("Books.txt");
                cout << "Export successfully" << endl;
                break;*/
            }

            default:
                cout << "Invalid choice try again..." << endl;
                break;
        }

        system("pause");
    } while (true);

    return 0;
}