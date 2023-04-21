#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    string filePath;
    ifstream fin;
    const int buffersize = 20;
    char buffer[buffersize];

    cout << "Enter the path to the .txt file: ";
    cin >> filePath;
    cout << endl;

    fin.open(filePath, std::ios::binary);
    if (!fin.is_open()) {
        cerr << "File is not open!" << endl;
        return 1;
    } else {
        while (fin.read(buffer, buffersize)) {
            for (int i = 0; i < fin.gcount(); ++i) {
                std::cout << buffer[i];
            }
        }
        for (int i = 0; i < fin.gcount(); ++i) {
            std::cout << buffer[i];
        }

    }
    fin.close();
    return 0;
}
