#ifndef STOCK_H // Start of include guard
#define STOCK_H

#include<iostream>
#include<string>
#include<cmath>
#include<random>
using namespace std;

class stock
{
	double price,preprice;
	double percentage;
	string name;


public:

	stock();

	/**
	 * @Parameterized constructor for the stock class.
	 * @stockName The name of the stock.
	 * @initialPrice The initial price of the stock.
	 * Initializes a new instance of the stock class with specified values for
	 * the name and price.
	 */
	stock(string,int);

	/**
	* @Sets a new price for the stock.
	* This method updates the current price of the stock and may also calculate
	* the percentage change based on the previous price.
	*/
	void set_new_price();

	/**
	* @Retrieves the current price of the stock.
	* @return The current price of the stock as a double.
	*/
	double get_price();

	/**
	 * @Sets the percentage change in the stock price.
	 * This method calculates and updates the percentage change based on
	 * the current and previous prices of the stock.
	 */
	void set_percentage();

	/**
	 * @brief Retrieves the percentage change in the stock price.
	 *
	 * @return The percentage change as a double.
	 */
	double get_percentage();

	/**
	 * @Retrieves the name of the stock.
	 *
	 * @return The name of the stock as a string.
	 */
	string get_name();
	

};

#endif // End of include guard