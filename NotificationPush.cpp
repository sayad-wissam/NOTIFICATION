#include "NotificationPush.h"
#include <iostream>

using namespace std;

NotificationPush::NotificationPush(const string& idUtilisateur,
                                   const string& application,
                                   const string& message)
    : Notification(idUtilisateur, message), application(application) {}

NotificationPush::~NotificationPush() {}

void NotificationPush::afficher() const {
    cout << "PUSH | Utilisateur : " << destinataire
         << " | Application : " << application
         << " | Message : " << message << endl;
}

void NotificationPush::envoyer() const {
    cout << "[Envoi push] vers " << destinataire
         << " via l'application " << application << endl;
}
