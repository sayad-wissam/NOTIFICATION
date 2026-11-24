#include "NotificationSMS.h"
#include <iostream>

using namespace std;

NotificationSMS::NotificationSMS(const string& numero,
                                 const string& operateur,
                                 const string& message)
    : Notification(numero, message), operateur(operateur) {}

NotificationSMS::~NotificationSMS() {}

void NotificationSMS::afficher() const {
    cout << "SMS | Numéro : " << destinataire
         << " | Opérateur : " << operateur
         << " | Message : " << message << endl;
}

void NotificationSMS::envoyer() const {
    cout << "[Envoi SMS] vers " << destinataire
         << " via " << operateur << endl;
}
