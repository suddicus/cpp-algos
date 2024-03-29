#include "hexadecimal.h"

namespace hexadecimal {
    int decimal(std::string text){
        int value{0};
        char p{};
        for(char c: text){
            if(!isdigit(c) && !(c > 96 && c < 103)) return 0;
            isdigit(c) ? p = '0' : p = 'W';
            value = value * 16 + c - p;
        }
        return value;
    }
}  // namespace hexadecimal

int main(){
    std::cout << hexadecimal::decimal("gf");
    return 0;
}