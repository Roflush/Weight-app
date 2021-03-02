// weight.cpp : Convers your earth weight to 6 other planet weight(not all at once). 
//


#include <iostream>

int main() {


    double weight;
    int x;

    std::cout << "Pease enter your current earth weight: ";
    std::cin >> weight;

    std::cout << "\nI have infromation for the following plannets:\n\n";
    std::cout << "  1. Venus  2. Mars  3. Jupiter\n";
    std::cout << "  4. Saturn 5. Uranus 6. Neptune\n\n";

    std::cout << "Which panet are you visting? ";
    std::cin >> x;

    if (x == 1) {

        weight = weight * 0.78;

    }
    else if (x == 2) {

        weight = weight * 0.39;

    }
    else if (x == 3) {

        weight = weight * 2.65;

    }
    else if (x == 4) {

        weight = weight * 1.17;

    }
    else if (x == 5) {

        weight = weight * 1.05;

    }
    else if (x == 6) {

        weight = weight * 1.23;

    }

    std::cout << "\nYour weight: " << weight << "\n";

}