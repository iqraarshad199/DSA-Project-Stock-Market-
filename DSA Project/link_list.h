#ifndef LINK_LIST_H
#define LINK_LIST_H

#include "node.h"



/**
 * @class link_list
 * @Represents a linked list data structure that manages a collection of nodes.
 *
 * The link_list class provides methods for inserting new nodes, displaying the list contents,
 * and updating values within the nodes. Each node contains stock data and a pointer to the next node in the list.
 */
class link_list {
   

public:
    node* head;

    /*
    * @Constructor that initializes an empty linked list.
    *
    * Sets the head pointer to nullptr, indicating that there are no nodes in the list at creation.
    */
    link_list();

    /**
      * @Inserts a new node into the linked list.
      *
      * @a A pointer to the node to be inserted.
      *
      * This method adds the provided node to the list, maintaining the linked structure.
      */
    void insertion(node* a);

    /**
    * @Displays the contents of the linked list.
    *
    * This method iterates through each node in the list and outputs their data,
    * allowing users to visualize the current state of stock information stored in the nodes.
    */
    void display();

    /**
   * @Updates values within the nodes of the linked list.
   *
   * This method can be used to modify stock prices or other relevant information stored in each node.
   * The specific implementation details would depend on how values are updated (e.g., from user input or external data).
   */
    void updata_values();
    
};
#endif
