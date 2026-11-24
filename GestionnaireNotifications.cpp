#include "GestionnaireNotifications.h"
#include <iostream>

using namespace std;

GestionnaireNotifications::GestionnaireNotifications() : compteur(0) {
    for (int i = 0; i < CAPACITE; i++)
        tab[i] = nullptr;
}

bool GestionnaireNotifications::ajouter(Notification* n) {
    if (n == nullptr || compteur >= CAPACITE) {
        cout << "Ajout impossible (tableau plein ou pointeur nul)." << endl;
        return false;
    }
    tab[compteur++] = n;
    return true;
}

void GestionnaireNotifications::envoyerToutes() const {
    for (int i = 0; i < compteur; i++)
        tab[i]->envoyer();
}
