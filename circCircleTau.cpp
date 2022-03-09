// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 9, 2022
// This program calculates the area and perimeter of
// a rectangle by asking the user for length and width

#include <iostream>


int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user (input)
    std::cout << "We will be calculating the radius of a circle using TAU!\n";
    std::cout << "What is the radius of the circle? (cm): ";
    std::cin >> radius;

    // calculate the circumference (process)
    circumference = TAU * radius;

    // display the circumference to the user (output)
    std::cout << "\n";
    std::cout << "The circumference of the circle is: " << circumference << " cm\n";
}
