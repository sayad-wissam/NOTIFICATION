#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>

// Classe abstraite : envoyer() est une méthode virtuelle pure
class Notification {
protected:
    std::string destinataire;
    std::string message;

public:
    Notification(const std::string& destinataire, const std::string& message);
    virtual ~Notification();              // destructeur virtuel

    virtual void afficher() const;        // informations communes
    virtual void envoyer() const = 0;     // sans implémentation dans la classe mère
};

#endif
