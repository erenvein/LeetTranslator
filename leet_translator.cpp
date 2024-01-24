#include <iostream>
#include <string>
#include <map>

std::map<char, char> char_map =
{
    {'a', '4'},
    {'A', '4'},

    {'b', '8'},
    {'B', '8'},

    {'e', '3'},
    {'E', '3'},

    {'g', '9'},
    {'G', '9'},

    {'r', '2'},
    {'R', '2'},

    {'i', '1'},
    {'I', '1'},

    {'l', '1'},
    {'L', '1'},

    {'o', '0'},
    {'O', '0'},

    {'s', '5'},
    {'S', '5'},

    {'t', '7'},
    {'T', '7'},

    {'z', '2'},
    {'Z', '2'}
};

auto main() -> int {
    std::string str;
    std::cout << "Write your text\n";
    while (1) {
        std::cin >> str;
        std::string result;
        for (auto& c : str) {
            if (char_map.find(c) != char_map.end()) {
                result.push_back(char_map[c]);
            }
            else {
                result.push_back(c);
            }
        }
        std::cout << result << '\n';
        str = "";
        result = "";
    }
}
