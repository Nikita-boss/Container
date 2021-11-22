#include "node.h"
#include <iostream>

Node:: Node(int data_temp) : _data{data_temp}, _next{nullptr} {}

//Node:: Node(const Node& N) {std::cout << "copy constructor called";}