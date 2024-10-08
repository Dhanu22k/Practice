#include <iostream>
#include <cstddef>
using namespace std;

struct NODE
{
    string Name;
    int Roll;
    NODE *next = nullptr;
};

void addStudentData(NODE *&head)  // Pass head by reference
{
    NODE *temp = new NODE;
    cout << "Enter student name: ";
    cin >> temp->Name;
    cout << "Enter student roll: ";
    cin >> temp->Roll;
    temp->next = nullptr;  // Initialize next pointer
    
    if (head == nullptr)  // If list is empty, head points to the new node
    {
        head = temp;
    }
    else
    {
        NODE *p = head;
        while (p->next != nullptr)  // Traverse to the end of the list
        {
            p = p->next;
        }
        p->next = temp;  // Append the new node at the end
    }
    cout << "Student added" << endl;
}

void display(NODE *head)
{
    if (head == nullptr)  // If the list is empty
    {
        cout << "Empty List" << endl;
        return;
    }

    NODE *p = head;
    while (p != nullptr)  // Traverse the list and print each node's data
    {
        cout << "Name: " << p->Name << ", Roll: " << p->Roll << endl;
        p = p->next;
    }
}

int main()
{
    NODE *head = nullptr;  // Initialize head to nullptr
    cout << "Student database" << endl;

    while (true)
    {
        cout << "1. Add student data" << endl;
        cout << "2. Display student data" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudentData(head);  // Add student data
            break;
        case 2:
            display(head);  // Display the list
            break;
        case 3:
            return 0;  // Exit the program
        default:
            cout << "Invalid choice" << endl;
        }
    }
}
