#include "Figure.h"

Figure::Figure() { name = "Фигура"; }

std::string Figure::get_name() { return name; }

void Figure::print_info() {
	std::cout << get_name() << ": " << std::endl;
}