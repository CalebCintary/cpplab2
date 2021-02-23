#include <iostream>
#include <string>


int main() {
    char tmp[80];
    std::cout.unsetf(std::ios_base::skipws);
    std::cin.unsetf(std::ios_base::skipws);
    bool isRunning = true;
    while (isRunning) {
        std::cin.get(tmp, '\n');
        std::cin.ignore();

        auto str = new std::string;
        str->append(tmp);

        if (isdigit(*(str->end() - 1))) {
            isRunning = false;
        }

        for(auto it = str->begin(); it < str->end(); ++it) {
            if (isupper(*it)) {
                *it = tolower(*it);
            }
        }
        std::cout << *str << std::endl;

        delete str;

    }

    return 0;
}
