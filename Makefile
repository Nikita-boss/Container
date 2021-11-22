all:
	clang++ -std=c++17 -Wall -Wextra -Wpedantic -Werror node.cpp list.cpp main.cpp -o main