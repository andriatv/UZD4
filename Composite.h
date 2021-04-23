//
// Created by Lenovo on 2021-04-03.
//

#ifndef UZD4_COMPOSITE_H
#define UZD4_COMPOSITE_H

#include "Component.h"
#include <iostream>
#include <vector>
using namespace std;

class Composite: public virtual Component{
public:
    Composite(const string &pavadinimas);

    double GetKaina() override;
    void AtvaizduotiInformacija() override;
    void IdetiKomponenta(Component *komponetas);
private:
    string pavadinimas;
    vector<Component*> komponentai;

};


#endif //UZD4_COMPOSITE_H
