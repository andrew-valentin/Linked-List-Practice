/* 
 * Created by: Andrew Valentin
 * Link to WordPress: https://ucfsi.wordpress.com/computer-science-i-with-andrew/
 */

/* 
 * PLEASE READ BEFORE YOU CONTINUE!!!
 *
 * This file is meant to be used for practice and to test 
 * your knowledge of linked lists.
 *
 * I have included a basic struct for both the node and linked list
 * which will be used for the examples and functions in this file as
 * well as an auxiliary function that can be used to print your 
 * linked lists for testing purposes.
 *
 * A lot of information has been omitted (return types, function code, etc.)
 * and that has been done on purpose in order for you to practice as well as 
 * mess around with the code in order to better understand linked lists.
 *
 * Furthermore, it is meant to prevent you from just copying any code I write
 * which would ultimately lead to you not understanding what you are doing.
 *
 * I am providing the function prototypes to give you a good start, but the rest is
 * up to you.
 *
 * Make sure to read every function name and comment carefully as they are written
 * in a way that makes their purpose clear to understand and to help guide you
 * as you write the code for each function.
 *
 * One last note: use this as an opportunity to practice dynamic memory allocation as well!
 * 
 * I know that there are some parameters that require pointers, but feel free to see
 * how the code works when you are not using pointers or when you are solely using pointers.
 *
 * If you have any questions, feel free to refer them to the professor or a TA during
 * office hours or an SI leader during their SI sessions.
 */

#include <stdio.h>

// Node struct
typedef struct Node 
{
  int value;
  struct Node *next;
} Node;

// Linked List struct that holds head and tail
typedef struct LL 
{
  Node *head;
  Node *tail;
} LL;

// Prints a linked list
void printLL(Node *head) 
{
  Node *temp = head;

  while (temp != NULL) 
  {
    printf("%d -> ", temp->value);
    temp = temp->next;
  }
  
  printf("NULL\n");
}

// Creates an empty linked list and returns the address
??? createLL()
{
	// your code goes here
}

// Initializes values inside an empty linked list to NULL
??? initLL(LL *ll) 
{
	// your code goes here
}

// Creates an empty node and returns the address
??? createNode() 
{
	// your code goes here
}

// Creates a node that holds a value and returns the address
??? createNodeWithValue(int val) 
{
	// your code goes here
}

// Return 1 if a node with a specific value exists within the linked list
// Otherwise, return 0
??? containsNode(???)
{
	// your code goes here
}

/*
 * NOTE:
 * 	The following functions are meant to explore the different
 * 	ways one could insert or remove nodes from a linked list.
 *
 * 	There are functions that do the same thing; however, they
 * 	are slightly different due to way they have to be implemented.
 *
 * 	Make sure to read the comments carefully since they all explain
 * 	the purpose of each function.
 *
 * 	You could approach each function with a different solution;
 * 	however, in order to stay consistent, the function descriptions
 * 	are written to guide you toward a specific solution.
 * 
 * 	Feel free to play around with the functions in order to implement
 * 	different solutions, but do keep in mind that the function
 * 	descriptions are written to reflect the consistency that I usually
 * 	aim to achieve whenever I write code (and which is something you
 * 	should keep in mind whenever you write code in order to write cleaner,
 * 	easier to understand code).
 */
 
// Inserts an empty node to the head of a linked list and returns the new head
??? insertEmptyNodeToHead(Node *head) 
{
	// your code goes here
}

// Inserts a node with a value to the head of a linked list and returns the new head
??? insertNodeWithValueToHead(Node *head, int val) 
{
	// your code goes here
}

// Inserts an empty node to the head of a linked list
??? insertNodeToListHead(LL *list) 
{
	// your code goes here
}

// Inserts a node with a value to the head of a linked list
??? insertNodeWithValueToListHead(LL *list, int val) 
{
	// your code goes here
}



// Inserts an empty node to the tail of a linked list and returns the head
??? insertEmptyNodeToTail(Node *head) 
{
	// your code goes here
}

// Inserts a node with a value to the tail of a linked list and returns the head
??? insertNodeWithValueToTail(Node *head, int val) 
{
	// your code goes here
}

// Inserts an empty node to the tail of a linked list
??? insertNodeToListTail(LL *list) 
{
	// your code goes here
}

// Inserts a node with a value to the tail of a linked list
??? insertNodeWithValueToListTail(LL *list, int val) 
{
	// your code goes here
}

/*
 * NOTE:
 * 	The following functions are meant to give you practice inserting a node
 *  into the middle of a linked list or removing a node from the middle of
 *  a linked list at some arbitrary index.
 *  
 *  The index can start at 0 or 1 (that is up to you to decide).
 *
 *  Just make sure to stay consistent so you don't cause any errors
 *  or confusion later on!
 */

// Inserts an empty node to a specific index in the linked list and returns the head
??? insertEmptyNodeToLLHead(Node *head, int index) 
{
	// your code goes here
}

// Inserts a node with a value to a specific index in the linked list and returns the head
??? insertNodeWithValueToLLHead(Node *head, int val, int index) 
{
	// your code goes here
}

// Inserts an empty node to a specific index in the linked list
??? insertEmptyNodeToLL(LL *list, int index) 
{
	// your code goes here
}

// Inserts a node with a value to a specific index in the linked list
??? insertNodeWithValueToLL(LL *list, int val, int index) 
{
	// your code goes here
}



// Takes in the head of a linked list, removes a node from the head, and returns the new head
??? removeNodeFromHead(???)
{
	// your code goes here
}

// Takes in a linked list and removes a node from the head
??? removeNodeFromListHead(???)
{
	// your code goes here
}

// Takes in the head of a linked list, removes a node from the tail, and returns the head
??? removeNodeFromTail(???)
{
	// your code goes here
}

// Takes in a linked list and removes a node from the tail
??? removeNodeFromListTail(???)
{
	// your code goes here
}

// Takes in the head of a linked list and a value, removes the first instance of a node
// with that value, and returns the head of the linked list
??? removeNodeWithValueFromLLHead(???)
{
	// your code goes here
}

// Takes in a linked list and a value and removes the first instance of a node
// with that value
??? removeNodeWithValueFromLL(???)
{
	// your code goes here
}

// Takes in the head of a linked list and an index, removes the node
// at that index, and returns the head of the linked list
??? removeNodeInIndexFromLLHead(???)
{
	// your code goes here
}

// Takes in a linked list and an index and removes the node at that index
??? removeNodeInIndexFromLL(???)
{
	// your code goes here
}



int main() 
{
	/* 
	 * Questions to consider:
	 *
	 * - What is the Big-O runtime if you add a node to the head? What if you added it to the tail?
	 * - What changes do you need to make if you were to use a circular linked list?
	 * - Can you add a node to the middle of a linked list if you only had access to the tail?
	 * - What are the benefits and drawbacks to using a doubly linked list?
	 * - What are the benefits and drawbacks to storing a tail pointer?
	 * - What are the differences between arrays and linked lists?
	 * - Why would a linked list be better to use than an array?
	 * - Why would an array be better to use than a linked list?
	 * - What are the differences/similarities between the Big-O runtimes for arrays and linked lists for:
	 *   > Insertion
	 *   > Deletion
	 *   > Search by index
	 *   > Search by value in a sorted list
	 *   > Search by value in an unsorted list
	 * - What considerations do you need to make when writing functions for linked lists and what is the
	 *   error that you need to always look out for and try to avoid as you write these functions?
	 */

	// your code goes here
  
	return 0;
}