#include <fstream>
#include <iostream>

#include "nlohmann/json.hpp"

using std::cout;
using std::endl;
using std::ifstream;

using json = nlohmann::json;

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << endl;
		return 1;
	}
	char *filename = argv[1];
	ifstream input_file(filename);
	json input = json::parse(input_file);

    for (auto &el : input) {
        cout << "Element: " << el << endl;
    }

	return 0;
}
