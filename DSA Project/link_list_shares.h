#ifndef LINK_LIST_SHARES_H
#define LINK_LIST_SHARES_H
#include"share.h"

/**
 * @class link_list_shares
 * @Represents a linked list data structure for managing shares owned by a user.
 * The link_list_shares class provides methods for inserting new shares into the list
 * and managing the collection of shares owned by a user in the stock market application.
 */
class link_list_shares
{
public:

    /**
     * @Pointer to the head node of the linked list.
     * This pointer points to the first share node in the linked list,
     * allowing traversal and management of all shares owned by the user.
     */
    share* head;

    /**
    * @Default constructor for the link_list_shares class.
    * Initializes an empty linked list by setting the head pointer to nullptr,
    * indicating that there are no shares in the list at creation.
    */
	link_list_shares(); 

    /**
    * @brief Default constructor for the link_list_shares class.
    *
    * Initializes an empty linked list by setting the head pointer to nullptr,
    * indicating that there are no shares in the list at creation.
    */
    link_list_shares();

    /**
     * @Inserts a new share into the linked list.
     * @a A pointer to the share to be inserted into the list.
     * This method adds the provided share to the linked list, maintaining
     * the structure necessary for managing multiple shares owned by a user.
     */
	void insert(share*);


};
#endif
