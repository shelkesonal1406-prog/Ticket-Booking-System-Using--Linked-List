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
int nextTicketNo = 1;

// Function to book a ticket
void bookTicket()
{
    Node* newNode = new Node();

    newNode->ticketNo = nextTicketNo++;

    cout << "\nEnter Passenger Name: ";
    getline(cin >> ws, newNode->name);

    cout << "Enter Destination: ";
    getline(cin >> ws, newNode->destination);

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

    cout << "\nTicket Booked Successfully!\n";
    cout << "Your Ticket Number: "
         << newNode->ticketNo << endl;
}

// Function to display all tickets
void displayTickets()
{
    if (head == NULL)
    {
        cout << "\nNo Tickets Booked.\n";
        return;
    }

    Node* temp = head;

    cout << "\n===== BOOKED TICKETS =====\n";

    while (temp != NULL)
    {
        cout << "\nTicket Number: "
             << temp->ticketNo << endl;

        cout << "Passenger Name: "
             << temp->name << endl;

        cout << "Destination: "
             << temp->destination << endl;

        cout << "-------------------------\n";

        temp = temp->next;
    }
}

// Function to search for a ticket
void searchTicket()
{
    int ticketNo;

    cout << "\nEnter Ticket Number to Search: ";
    cin >> ticketNo;

    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->ticketNo == ticketNo)
        {
            cout << "\nTicket Found!\n";

            cout << "Ticket Number: "
                 << temp->ticketNo << endl;

            cout << "Passenger Name: "
                 << temp->name << endl;

            cout << "Destination: "
                 << temp->destination << endl;

            return;
        }

        temp = temp->next;
    }

    cout << "\nTicket Not Found.\n";
}

// Function to cancel a ticket
void cancelTicket()
{
    int ticketNo;

    cout << "\nEnter Ticket Number to Cancel: ";
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

            cout << "\nTicket Cancelled Successfully!\n";
            return;
        }

        previous = temp;
        temp = temp->next;
    }

    cout << "\nTicket Not Found.\n";
}

// Function to free allocated memory
void freeTickets()
{
    Node* temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";

        cout << "\nEnter Your Choice: ";
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
                cout << "\nThank You for Using "
                     << "Ticket Booking System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    freeTickets();

    return 0;
}