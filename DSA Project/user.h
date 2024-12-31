#include<iostream>
#include"share.h"
#include"link_list.h"
#include"link_list_shares.h"
#include<fstream>

using namespace std;

class user
{
	
	string username;
	double balance;
	link_list_shares users_shares;
	string password;

public:

	 /**
     * @Default constructor for the user class.
     *
     * Initializes a new instance of the user class with default values.
     */
	user();

	/**
	* @Parameterized constructor for the user class.
	* @name The username for the new user instance.
	* Initializes a new instance of the user class with a specified username.
	*/
	user(string);

	/**
	 * @Sets the user's balance.
	 *
	 * @amount The new balance to be set for the user.
	 */
	void set_balance(double);

	/**
	 * @brief Retrieves the user's current balance.
	 *
	 * @return The current balance of the user.
	 */
	double get_balance();

	/**
	 * @brief Retrieves the user's username.
	 *
	 * @return The username of the user as a string.
	 */
	string get_username();

	/**
	 * @brief Retrieves the user's password for internal use.
	 * This method may be used to access the user's password securely,
	 * but it should be handled with care to avoid security risks.
	 * @return The password of the user as a string.
	 */
	void get_password();

	/**
	 * @brief Allows the user to buy shares from a linked list of available stocks.
	 * @l A pointer to a linked list containing available stocks for purchase.
	 * This method processes a purchase transaction, updating the user's balance
	 * and shares owned accordingly.
	 */
	void buy(link_list *l);

	/**
	 * @brief Displays the shares owned by the user.
	 * This method outputs information about each share in the user's portfolio,
	 * including stock names and quantities held.
	 */
	void display_users_shares();

	/**
	 * @brief Allows the user to sell shares from their portfolio.
	 * This method processes a sale transaction, updating both
	 * the user's balance and their shares owned accordingly.
	 */
	void sell();

	/**
	 * @brief Predicts stock trends based on historical data placeholder.
	 * This method may implement logic to analyze stock performance
	 * and provide predictions or recommendations based on past trends.
	 */
	void prediction();

	/**
	 * @brief Logs out the current user from their session.
	 * This method clears session data and prepares for a new login attempt,
	 * ensuring that sensitive information is not retained in memory after logout.
	 */
	void logout();

	/**
	 * @brief Logs in a user by validating their credentials against stored data.
	 * @l A reference to a linked list containing registered users for validation.

	 * This method checks if provided credentials match any existing users,
	 * allowing access to their account if successful.
	 */
	void login(link_list&);



};

