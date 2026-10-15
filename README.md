

1. PROJECT TITLE
Ticket Booking Management System Using a Singly Linked List in C++

2. AIM
To develop a Ticket Booking Management System using a Singly Linked List in C++ to book tickets, display ticket details, search for a ticket, and cancel a ticket using dynamic memory allocation.

3. OBJECTIVES
1)To understand the concept of a Singly Linked List.
2) To implement dynamic memory allocation in C++.
3) To store passenger details using linked list nodes.
4)To generate unique ticket numbers automatically.
5) To implement ticket booking and display operations.
6) To search for a ticket using its ticket number.
7) To cancel a ticket by deleting its corresponding node.
8)To understand the practical application of data structures in ticket management systems.


4. ALGORITHM
Step 1: Start the program.
Step 2: Define a node structure containing the ticket number, passenger name, destination, and pointer to the next node.
Step 3: Initialize the head pointer to NULL and the ticket number counter to 1.
Step 4: Display the menu:
•Book Ticket
•Display Tickets
•Search Ticket
•Cancel Ticket
•Exit
Step 5: Accept the user's choice.
Step 6: If the choice is 1 — Book Ticket
•Create a new node.
•Generate a unique ticket number automatically.
•Accept the passenger name and destination.
•Insert the node at the end of the linked list.
•Display the booking confirmation and ticket number.
Step 7: If the choice is 2 — Display Tickets
•Check whether the linked list is empty.
•If empty, display a message.
•Otherwise, traverse the linked list and display all ticket details.
Step 8: If the choice is 3 — Search Ticket
•Accept the ticket number to search.
•Traverse the linked list.
•If the ticket is found, display its details.
•Otherwise, display "Ticket Not Found".
Step 9: If the choice is 4 — Cancel Ticket
•Accept the ticket number to cancel.
•Search for the ticket in the linked list.
•If found, delete the corresponding node.
•Otherwise, display "Ticket Not Found".
Step 10: If the choice is 5, display a thank-you message and terminate the program.
Step 11: Repeat Steps 4–10 until the user selects Exit.
Step 12: Stop.

5. FLOWCHART


          +------------------+
          |      START       |
          +------------------+
                   |
                   v
          +------------------+
          | Initialize head  |
          | head = NULL      |
          | ticketNo = 1      |
          +------------------+
                   |
                   v
          +------------------+
          |    Display Menu  |
          +------------------+
                   |
                   v
          +------------------+
          |   Enter Choice   |
          +------------------+
                   |
                   v
          +------------------+
          |  Check Choice    |
          +------------------+
             /   /  \   \
            /   /    \   \
           v   v      v   v
        Book Display Search Cancel
           |    |      |    |
           v    v      v    v
        Create Show   Find  Find
        New Node All  Ticket Ticket
           |    |      |    |
           v    |      v    v
        Insert   |   Found? Found?
        at End   |    |      |
           |     |   Yes     Yes
           |     |    |       |
           |     |  Display  Delete
           |     |  Details  Node
           \     |    |       /
            \    |    |      /
             v   v    v     v
          +------------------+
          |   Display Menu   |
          +------------------+
                   |
                   v
          +------------------+
          | Choice = 5 ?     |
          +------------------+
             |           |
            No          Yes
             |           |
             |           v
             |    +-------------+
             |    |    STOP     |
             |    +-------------+
             |
             +------> Menu
 
6. CONCLUSION
The Ticket Booking Management System was successfully developed using a Singly Linked List in C++. The system allows users to book tickets, display ticket details, search for tickets, and cancel bookings. Automatic ticket number generation and dynamic memory allocation make the system useful for understanding linked list operations. This project demonstrates the practical application of data structures in a ticket management system.