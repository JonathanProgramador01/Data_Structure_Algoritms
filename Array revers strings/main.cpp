#include <string>
#include <iostream>

std::string revers(std::string &ptr) {
	
	if (ptr.size()>=2) {
		std::string Copia;

		for (int a = ptr.size() - 1; a >= 0; a--) {
			Copia += (ptr[a]);

		}

		return Copia;

	}
	else
		return "MMM THAT NOT GOOD";

}

int main() {

	std::string Text;
	std::getline(std::cin,Text);
	std::cout<<revers(Text);


	return 0;
}

