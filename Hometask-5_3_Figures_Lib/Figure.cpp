#include "Figure.h"

Figure::Figure() { name = "������"; }

std::string Figure::get_name() { return name; }

void Figure::print_info() {
	std::cout << get_name() << ": " << std::endl;
}