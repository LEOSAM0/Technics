#include "Computers.h"

Computers::Computers(int voltage) : _voltage(voltage) {

}

void Computers::Show() {
	std::cout << "Basic voltage is " << _voltage << std::endl;
}


AMD::AMD(int voltage, int power) : Computers(voltage), _power(power) {

}

void AMD::Show() {
	std::cout << "Basic voltage is " << _voltage << std::endl;
	std::cout << "The power of computer is " << _power << std::endl;
}


Intel::Intel(int voltage, int memory) : Computers(voltage), _memory(memory) {

}

void Intel::Show() {
	std::cout << "Basic voltage is " << _voltage << std::endl;
	std::cout << "The main memory is " << _memory << std::endl;
}