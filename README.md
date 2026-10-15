# Ticket Booking System Using Linked List
## Description 
This Project is Ticket Booking System developed using C++ and Linked List.

## Data Structure Used 
-Linked List

## Features 
-Book a Ticket
-Display Booked Tickets 
-Cancel a Ticket
-Search Ticket


1. Algorithm

Step 1: Start

Start the program and initialize the head pointer to NULL.

Step 2: Display Menu

Display the following options:

1. Book Ticket


2. Display Tickets


3. Search Ticket


4. Cancel Ticket


5. Exit



Step 3: Book Ticket

•Create a new node dynamically.

•Accept the ticket number, passenger name, and destination.

•If the linked list is empty, assign the new node to head.

•Otherwise, traverse to the last node and insert the new node.

•Display the booking confirmation message.


Step 4: Display Tickets

•Check whether the linked list is empty.

•If empty, display "No tickets booked."

•Otherwise, traverse the list from head to NULL.

•Display the details of each ticket.


Step 5: Search Ticket

•Accept the ticket number from the user.

•Traverse the linked list and compare each node's ticket number with the given number.

•If a match is found, display the ticket details.

•Otherwise, display "Ticket not Found."


Step 6: Cancel Ticket

•Accept the ticket number to cancel.

•Search for the corresponding node.

•Update the pointers to remove the node from the linked list.

•Release the node's memory using delete.

•Display the cancellation status.


Step 7: Exit

•If the user selects Exit, terminate the program. Otherwise, display the menu again.


---

2. Time Complexity Analysis

•Let n represent the total number of booked tickets in the linked list.

•Operation	Time Complexity	Explanation

•Book Ticket	O(n)	Traverses the list to reach the last node.
Display Tickets	O(n)	Visits every node.
Search Ticket	O(n)	May check every node.
Cancel Ticket	O(n)	May traverse the entire list to find the ticket.


**Space Complexity: O(n)

Explanation: Each ticket requires one node, so the memory required increases with the number of tickets.


---

3. Working of the Project

•The Ticket Booking System is a menu-driven C++ application that uses a singly linked list to manage ticket details.

•Each node stores:

•Ticket Number

•Passenger Name

•Destination

•Pointer to the Next Node


•Example

•Suppose two tickets are booked.

•Ticket 1

•Ticket Number: 101

•Passenger Name: Sonal

•Destination: Pune


•Ticket 2

•Ticket Number: 102

•Passenger Name: Rahul

•Destination: Mumbai

•The user can display both tickets, search for a particular ticket, or cancel an existing ticket.

•When ticket number 101 is cancelled

•Thus, the linked list is updated by changing pointers and deleting the cancelled node.


---

4. Sample Output

===== TICKET BOOKING SYSTEM =====

1. Book Ticket
2. Display Tickets
3. Search Ticket
4. Cancel Ticket
5. Exit

Enter your Choice: 1

Enter Ticket Number: 101
Enter Passenger Name: Sonal
Enter Destination: Pune

Ticket booked Successfully!

•Display Tickets

Enter your Choice: 2

----- Ticket Details -----

Ticket No: 101
Passenger: Sonal
Destination: Pune

•Search Ticket

Enter your Choice: 3

Enter Ticket Number to search: 101

Ticket Found!
Passenger: Sonal
Destination: Pune

•Cancel Ticket

Enter your Choice: 4

Enter Ticket Number to cancel: 101

Ticket cancelled Successfully!

•Exit

Enter your Choice: 5

Exiting program...


5. Conclusion

The Ticket Booking System successfully demonstrates the use of a singly linked list in C++. It provides basic operations such as booking, displaying, searching, and cancelling tickets.

This project helps us understand pointers, nodes, dynamic memory allocation, traversal, insertion, and deletion. It also demonstrates how linked lists can be used to manage records dynamically.


---

