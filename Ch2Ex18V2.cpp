/*
    Program File Name: Ch2Ex3.cpp
    Programmer: Gabriel Inocentes
    Date: February 2, 2024
    Requirements:
    Write a program that applies a sales and county tax to a $95 purchase
*/

#include <iostream>
using namespace std;

const double purchasePrice = 95;

int main()
{
    float stateSalesTax = 0.04;
    float countySalesTax = 0.02;

    cout << "The full price of the purchase totals out to $" << purchasePrice * (stateSalesTax + countySalesTax + 1);
}