//
// Created by Lenovo on 2021-04-03.
//

#include "Leaf.h"



Leaf::Leaf(const string &pavadinimas, double kaina) : pavadinimas(pavadinimas), kaina(kaina) {}

double Leaf::GetKaina() {
    return 0;
}

void Leaf::AtvaizduotiInformacija() {
    cout << pavadinimas << ", " << kaina << endl;
}
