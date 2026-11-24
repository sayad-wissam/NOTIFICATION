#include "Notification.h"
#include <iostream>

using namespace std;

Notification::Notification(const string& destinataire, const string& message)
    : destinataire(destinataire), message(message) {}

Notification::~Notification() {}

void Notification::afficher() const {
    cout << "Destinataire : " << destinataire << " | Message : " << message;
}
