#ifndef GESTIONNAIRENOTIFICATIONS_H
#define GESTIONNAIRENOTIFICATIONS_H

#include "Notification.h"

class GestionnaireNotifications {
private:
    static const int CAPACITE = 100;
    Notification* tab[CAPACITE];
    int compteur;

public:
    GestionnaireNotifications();
    // Pas de delete des objets pointés : le gestionnaire n'en est pas propriétaire

    bool ajouter(Notification* n);
    void envoyerToutes() const;
};

#endif
