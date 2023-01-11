#include <iostream>
#include "Laptops.h"

Laptops::Laptops(int videomemory) : _videomemory(videomemory) {

}
void Laptops::Show() {
	std::cout << "Videomemory is " << _videomemory << std::endl;
}


HP::HP(int videomemory, int cords) : Laptops(videomemory), _cords(cords) {

}
void HP::Show() {
	std::cout << "Videomemory is " << _videomemory << std::endl;
	std::cout << "Number of cords: " << _cords << std::endl;
}


Acer::Acer(int videomemory, std::string color) : Laptops(videomemory),
_color(color) {

}
void Acer::Show() {
	std::cout << "Videomemory is " << _videomemory << std::endl;
	std::cout << "The color of laptop is " << _color << std::endl;
}