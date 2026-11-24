#include "NotificationEmail.h"
#include <iostream>

using namespace std;

NotificationEmail::NotificationEmail(const string& destinataire,
                                     const string& objet,
                                     const string& message)
    : Notification(destinataire, message), objet(objet) {}

NotificationEmail::~NotificationEmail() {}

void NotificationEmail::afficher() const {
    cout << "EMAIL | À : " << destinataire
         << " | Objet : " << objet
         << " | Message : " << message << endl;
}

void NotificationEmail::envoyer() const {
    cout << "[Envoi email] vers " << destinataire
         << " (objet : " << objet << ")" << endl;
}
