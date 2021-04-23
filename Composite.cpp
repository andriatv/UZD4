//
// Created by Lenovo on 2021-04-03.
//

#include "Composite.h"
#include "Component.h"
#include <iostream>


Composite::Composite(const string &pavadinimas) : pavadinimas(pavadinimas) {}

double Composite::GetKaina()  {

    double viso = 0;
    for(Component* c: komponentai){
        viso += c->GetKaina();
    }
    cout<<viso <<" Ivykdyta funkcija get kaina"<<endl;

    return viso;
}

void Composite::AtvaizduotiInformacija() {
    cout << "-------------------------------------" << endl;
    cout << pavadinimas << endl;
    cout << "-------------------------------------" << endl;

    for (Component *c: komponentai) {
        c->AtvaizduotiInformacija();
    }
}

void Composite::IdetiKomponenta(Component *komponetas) {
    komponentai.emplace_back(komponetas);

}