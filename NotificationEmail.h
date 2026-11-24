#ifndef NOTIFICATIONEMAIL_H
#define NOTIFICATIONEMAIL_H

#include "Notification.h"

class NotificationEmail : public Notification {
private:
    std::string objet;

public:
    NotificationEmail(const std::string& destinataire,
                      const std::string& objet,
                      const std::string& message);
    ~NotificationEmail();

    void afficher() const override;
    void envoyer() const override;
};

#endif
