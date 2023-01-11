#include "Monoblock.h"

Monoblock::Monoblock(int voltage, int videomemory) : Computers(voltage), Laptops(videomemory) {

}

void Monoblock::Show() {
	std::cout << "Basic voltage is " << _voltage << std::endl;
	std::cout << "Videomemory is " << _videomemory << std::endl;
}