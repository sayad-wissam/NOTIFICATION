#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"

using namespace std;

int main() {
    // Partie C, question 6
    NotificationEmail email("sara@example.com", "Sécurité", "Nouvelle connexion détectée");
    NotificationSMS   sms("0612345678", "Orange", "Votre code est 4582");
    NotificationPush  push("user_102", "MyBank", "Paiement confirmé");

    // Question 7 : tableau de pointeurs vers la classe de base
    Notification* tab[3] = { &email, &sms, &push };

    // Question 8 : liaison dynamique (polymorphisme)
    cout << "=== Partie C : tableau de Notification* ===" << endl;
    for (int i = 0; i < 3; i++) {
        tab[i]->afficher();
        tab[i]->envoyer();
        cout << endl;
    }

    // Partie D : le gestionnaire ne détruit pas les objets, ils vivent dans main()
    cout << "=== Partie D : GestionnaireNotifications ===" << endl;
    GestionnaireNotifications gestionnaire;
    gestionnaire.ajouter(&email);
    gestionnaire.ajouter(&sms);
    gestionnaire.ajouter(&push);
    gestionnaire.envoyerToutes();

    return 0;
}
