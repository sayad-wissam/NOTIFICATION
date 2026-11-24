#ifndef NOTIFICATIONSMS_H
#define NOTIFICATIONSMS_H

#include "Notification.h"

class NotificationSMS : public Notification {
private:
    std::string operateur;

public:
    NotificationSMS(const std::string& numero,
                    const std::string& operateur,
                    const std::string& message);
    ~NotificationSMS();

    void afficher() const override;
    void envoyer() const override;
};

#endif
