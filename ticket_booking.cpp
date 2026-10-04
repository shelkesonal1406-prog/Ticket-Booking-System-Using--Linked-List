#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int ticketNo;
    string name;
    string destination;
    Node* next;
};

Node* head = NULL;

void bookTicket()
{
    Node* newNode = new Node();

    cout << "\nEnter Ticket Number: ";
    cin >> newNode->ticketNo;

    cout << "Enter Passenger Name: ";
    cin >> newNode->name;

    cout << "Enter Destination: ";
    cin >> newNode->destination;

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "\nTicket booked Successfully!\n";
}

void displayTickets()
{
    if (head == NULL)
    {
        cout << "\nNo tickets booked.\n";
        return;
    }

    Node* temp = head;

    cout << "\n----- Ticket Details -----\n";

    while (temp != NULL)
    {
        cout << "Ticket No: " << temp->ticketNo << endl;
        cout << "Passenger: " << temp->name << endl;
        cout << "Destination: " << temp->destination << endl;
        cout << "--------------------------\n";

        temp = temp->next;
    }
}

void searchTicket()
{
    int ticketNo;

    cout << "\nEnter Ticket Number to search: ";
    cin >> ticketNo;

    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->ticketNo == ticketNo)
        {
            cout << "\nTicket Found!\n";
            cout << "Passenger: " << temp->name << endl;
            cout << "Destination: " << temp->destination << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "\nTicket not Found.\n";
}

void cancelTicket()
{
    int ticketNo;

    cout << "\nEnter Ticket Number to cancel: ";
    cin >> ticketNo;

    Node* temp = head;
    Node* previous = NULL;

    while (temp != NULL)
    {
        if (temp->ticketNo == ticketNo)
        {
            if (previous == NULL)
            {
                head = temp->next;
            }
            else
            {
                previous->next = temp->next;
            }

            delete temp;

            cout << "\nTicket cancelled Successfully!\n";
            return;
        }

        previous = temp;
        temp = temp->next;
    }

    cout << "\nTicket not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====";

        cout << "\n1. Book Ticket";
        cout << "\n2. Display Tickets";
        cout << "\n3. Search Ticket";
        cout << "\n4. Cancel Ticket";
        cout << "\n5. Exit";

        cout << "\n\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
