#include <iostream>
#include "Leaf.h"
#include "Composite.h"

using namespace std;

int main() {
    auto *rubuParduotuve = new Composite("RubuParduotuve");

    auto *vyriski = new Composite("Vyriski");
    auto *moteriski = new Composite("Moteriski");
    auto *vaiku = new Composite("Vaiku");

    rubuParduotuve->IdetiKomponenta(vyriski);
    rubuParduotuve->IdetiKomponenta(moteriski);
    rubuParduotuve->IdetiKomponenta(vaiku);

    auto *aksesuarai = new Composite("Aksesuarai");

    auto *kelnes = new Leaf("Sportines Kelnes", 99.99);
    auto *marskinai = new Leaf("medvilniniai marskinai", 120.20);
    auto *striuke = new Leaf("ziemine striuke", 350.20);
    auto *sortai = new Leaf("adidas sortai", 56.37);

    auto *suknele = new Leaf("linine suknele", 110.20);
    auto *paltas = new Leaf("rudeninis paltas", 420.70);
    auto *palaidine = new Leaf("lasva palaidine", 35.87);
    auto *sijonas = new Leaf("odinis sijonas", 37.69);

    auto *ziedas = new Leaf("edited ziedas", 20.94);
    auto *apyranke = new Leaf("svarovski apyranke", 55.92);
    auto auskarai = new Leaf("Duti auskarai", 15.99);

    auto *kombinezonas = new Leaf("limited kombinezonas", 130.94);
    auto *maike = new Leaf("nike maikute", 35.94);
    auto *batai = new Leaf("adidas sportbaciai", 75.89);

    vyriski->IdetiKomponenta(kelnes);
    vyriski->IdetiKomponenta(marskinai);
    vyriski->IdetiKomponenta(striuke);

    aksesuarai->IdetiKomponenta(ziedas);
    aksesuarai->IdetiKomponenta(apyranke);

    moteriski->IdetiKomponenta(suknele);
    moteriski->IdetiKomponenta(paltas);
    moteriski->IdetiKomponenta(aksesuarai);

    vaiku->IdetiKomponenta(kombinezonas);
    vaiku->IdetiKomponenta(maike);
    vaiku->IdetiKomponenta(batai);

    int punktas = 1;
    while (punktas != 0) {


        cout << "----------------------------------------" << endl;
        cout << "                 Meniu                  " << endl;
        cout << "----------------------------------------" << endl;
        cout << "1. atvaizduoti Rubu parduotuve" << endl;
        cout << "2. atvaizduoti Vyrisku  rubu asortimenta" << endl;
        cout << "3. Prideti nauja kompnenta i rubu parduotuve" << endl;
        cout << "4. Apskaiciuoti parduotuveje esanciu drabuziu kaina" << endl;
        cout << "0. Isieti is porgramos" << endl;


        cout << "Iveskite meniu punkto Nr: " << endl;
        cin >> punktas;
        switch (punktas) {
            case 1:
                rubuParduotuve->AtvaizduotiInformacija();
                break;
            case 2:
                vyriski->AtvaizduotiInformacija();
                break;
            case 3: {
                cout << "Naujo produkto kurimas: " << endl;

                string kategorija;
                cout << "Nurodykite rubu kategorija, kurioje norite ideti pasirinkima" << endl;
                cin.ignore();
                getline(cin, kategorija);
                auto *cat = new Composite(kategorija);

                string pavadinimas;
                int kaina;
                cout << "Nurodykite pavadinimas: " << endl;
                cin.ignore();
                getline(cin, pavadinimas);
                cout << "nurodykite kaina" << endl;
                cin >> kaina;

                auto *komponetas = new Leaf(pavadinimas, kaina);
                cat->IdetiKomponenta(komponetas);

                rubuParduotuve->IdetiKomponenta(cat);

                break;

            }
            case 4: {
                cout << rubuParduotuve->GetKaina() << endl;

                break;

            }
            case 0: {
                punktas = false;
                break;}
                default:
                    cout << "Neteisingai pasirinkote punkta iveskite kita skaiciu" << endl;
                break;

            }
        }
        return 0;
    }
