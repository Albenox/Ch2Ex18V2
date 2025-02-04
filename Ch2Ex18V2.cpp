/*
    Program File Name: Ch2Ex18.cpp
    Programmer: Gabriel Inocentes
    Date: February 2, 2024
    Requirements:
    Write a program that displays the sales tax on a purchase, which recieves the input of the user to determine the sales tax then applies it to the sale and display that total sales tax
*/

#include <iostream>
using namespace std;

const double purchasePrice = 95;

int main()
{
    float salesTax;

    cout << "What is the local sales tax amount? ";
    cin >> salesTax;
    float salesTaxPercent = (salesTax / 100) + 1;
    float salesTaxTotal = purchasePrice * salesTaxPercent;
    float salesTaxAddition = salesTaxTotal - purchasePrice;
    cout << "The full price of the purchase totals out to $" << salesTaxTotal << "\n";
    cout << "The sales tax percentage is " << salesTax << "%, which on this purchase, totals to an additional cost of $" << salesTaxAddition;
}