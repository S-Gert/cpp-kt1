#include "assignment3.hpp"
#include <string>
#include <vector>
#include <array>

// Tehted muutujatega (+, -, *, /, %, ++, --, +=, -=, *=, /=, %=)
bool RG::Homework1::assignment3()
{
    using namespace std::literals;
    int i1{};
    long long i2{5ll};
    long double d{4.5l};
    char8_t c{u8'd'};
    std::u8string s{u8"Hello World!"s};
    std::vector v{1, 2, 3, 4, 5};
    std::array a{2, 3, 7, 5, 6};

    // Suurenda muutuja i1 väärtust 1 võrra kolmel erineval viisil



    // Eemalda muutuja i2 väärtusest i1 väärtus
    
    // Liida muutuja d väärtusele 0.3l ja jagada seejärel i1 väärtusega

    // Liida c väärtusele i1 väärtus

    // Liida s väärtusele c väärtus

    // Korruta (*=) muutuja v.at(1) väärtus v.at(2) väärtusega, mis on suurendatud ++-ga

    // Liida muutujale a.at(2) väärtus v.at(3) väärtusega, siis korruta i1 väärtusega, 
    // seejärel lahuta i2 väärtusega, seejärel jaga v.at(4) väärtusega

    // Kontroll, et muutujad on õiget tüüpi ja väärtusega
    return (i1 == 3)
    && (i2 == 8ll)
    && (d == 4.8l/3)
    && (c == u8'g')
    && (s == u8"Hello World!g"s)
    && (v == (std::vector{1, 8, 4, 4, 5}))
    && (a == (std::array{2, 3, 5, 5, 6}));
}

