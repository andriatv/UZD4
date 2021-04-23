//
// Created by Lenovo on 2021-04-03.
//

#ifndef UZD4_LEAF_H
#define UZD4_LEAF_H
#include "Component.h"
#include <iostream>


using namespace std;
class Leaf  : public virtual  Component{
public:

    Leaf(const string &pavadinimas, double kaina);

    double GetKaina() override;
    void AtvaizduotiInformacija() override;

private:
    string pavadinimas;
    double kaina;
};


#endif //UZD4_LEAF_H
