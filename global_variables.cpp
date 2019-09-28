// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program shows how local and global variables works

#include <iostream>

// global variable
int variable_X = 25;

void local_variable() {
    // This shows what happens in local variables

    int variable_X = 10;
    int variable_Y = 30;
    int variable_A = variable_X + variable_Y;
    std::cout << "Local variable_X, variable_Y, variable_A: " << variable_X
    <<"+" << variable_Y << "=" << variable_A << std::endl;
}

void globalvariable() {
    // This shows what happens in global variable

    variable_X = variable_X + 1;
    int variable_Y = 30;
    int variable_A = variable_X + variable_Y;
    std::cout <<"Local variable_X, variable_Y, variable_A: " << variable_X
              <<"+" << variable_Y << "=" << variable_A << std::endl;
}

int main() {
    // This function calls local and global

    local_variable();
    globalvariable();
}
