#ifndef NOTIFICATIONPUSH_H
#define NOTIFICATIONPUSH_H

#include "Notification.h"

class NotificationPush : public Notification {
private:
    std::string application;

public:
    NotificationPush(const std::string& idUtilisateur,
                     const std::string& application,
                     const std::string& message);
    ~NotificationPush();

    void afficher() const override;
    void envoyer() const override;
};

#endif
