#include <iostream>
#include <string>
#include <map>

std::map<char, char> char_map =
{
    {'a', '4'},
    {'A', '4'},

    {'e', '3'},
    {'E', '3'},

    {'s', '5'},
    {'S', '5'},

    {'o', '0'},
    {'O', '0'},

    {'t', '7'},
    {'T', '7'},

    {'l', '1'},
    {'L', '1'}
};

auto main() -> int {
    std::string str;
    std::cout << "Write your text\n";
LOOPSTART:;
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
    goto LOOPSTART;
}