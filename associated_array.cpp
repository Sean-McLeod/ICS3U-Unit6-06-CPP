// Copyright (c) 2021 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on January 2021
// This program converts string to hexadecimal

#include <iostream>
#include <map>
#include <list>


std::list<char> SeparateCharacters(std::string aString) {
    std::list<char> separated_string;
    int numberOfCharacters;
    int counter;

    numberOfCharacters = aString.length();
    for (counter = 0; counter < numberOfCharacters; counter++) {
        separated_string.push_back(aString[counter]);
    }

    return separated_string;
}


main() {
    // this function uses an associative array

    std::string userKeyboard = "";
    std::list<char> separatedCharacters;
    std::list<std::string> everyHex;

    // an empty map
    std::map<std::string,std::string> map;

    // Adding Items
    map[" "] = "0x20";
    map["!"] = "0x21";
    map["#"] = "0x23";
    map["$"] = "0x24";
    map["%"] = "0x25";
    map["&"] = "0x26";
    map["'"] = "0x27";
    map["("] = "0x28";
    map[")"] = "0x29";
    map["*"] = "0x2a";
    map["+"] = "0x2b";
    map[","] = "0x2c";
    map["-"] = "0x2d";
    map["."] = "0x2e";
    map["/"] = "0x2f";
    map["0"] = "0x30";
    map["1"] = "0x31";
    map["2"] = "0x32";
    map["3"] = "0x33";
    map["4"] = "0x34";
    map["5"] = "0x35";
    map["6"] = "0x36";
    map["7"] = "0x37";
    map["8"] = "0x38";
    map["9"] = "0x39";
    map[":"] = "0x3a";
    map[";"] = "0x3b";
    map["<"] = "0x3c";
    map["="] = "0x3d";
    map[">"] = "0x3e";
    map["?"] = "0x3f";
    map["@"] = "0x40";
    map["A"] = "0x41";
    map["B"] = "0x42";
    map["C"] = "0x43";
    map["D"] = "0x44";
    map["E"] = "0x45";
    map["F"] = "0x46";
    map["G"] = "0x47";
    map["H"] = "0x48";
    map["I"] = "0x49";
    map["J"] = "0x4a";
    map["K"] = "0x4b";
    map["L"] = "0x4c";
    map["M"] = "0x4d";
    map["N"] = "0x4e";
    map["O"] = "0x4f";
    map["P"] = "0x50";
    map["Q"] = "0x51";
    map["R"] = "0x52";
    map["S"] = "0x53";
    map["T"] = "0x54";
    map["U"] = "0x55";
    map["V"] = "0x56";
    map["W"] = "0x57";
    map["X"] = "0x58";
    map["Y"] = "0x59";
    map["Z"] = "0x5a";
    map["["] = "0x5b";
    map["]"] = "0x5d";
    map["^"] = "0x5e";
    map["_"] = "0x5f";
    map["`"] = "0x60";
    map["a"] = "0x61";
    map["b"] = "0x62";
    map["c"] = "0x63";
    map["d"] = "0x64";
    map["e"] = "0x65";
    map["f"] = "0x66";
    map["g"] = "0x67";
    map["h"] = "0x68";
    map["i"] = "0x69";
    map["j"] = "0x6a";
    map["k"] = "0x6b";
    map["l"] = "0x6c";
    map["m"] = "0x6d";
    map["n"] = "0x6e";
    map["o"] = "0x6f";
    map["p"] = "0x70";
    map["q"] = "0x71";
    map["r"] = "0x72";
    map["s"] = "0x73";
    map["t"] = "0x74";
    map["u"] = "0x75";
    map["v"] = "0x76";
    map["w"] = "0x77";
    map["x"] = "0x78";
    map["y"] = "0x79";
    map["z"] = "0x7a";
    map["{"] = "0x7b";
    map["|"] = "0x7c";
    map["}"] = "0x7d";
    map["~"] = "0x7e";

    // input
    std::cout << "Please enter a string to be translated into hex: ";
    std::cin >> userKeyboard;
    std::cout << " " << std::endl;

    // call function
    separatedCharacters = SeparateCharacters(userKeyboard);

    for (char singleElement : separatedCharacters) {
        if (map.count(singleElement) > 0) {
            everyHex.push_back(map[singleElement]);
        } else {
            std::cout << "That string is not registered in this program"
                      << std::endl;
        }
    }

    // output
    std::cout << userKeyboard << " in hex is " << everyHex;
    std::cout << " " << std::endl;
}
