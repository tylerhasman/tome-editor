#ifndef MESSAGE_H
#define MESSAGE_H

#include <QVariant>

#include "severity.h"
#include "targetsitetype.h"

namespace Tome
{
    /**
     * @brief Message, warning or error generated by an automated task.
     */
    class Message
    {
        public:
            /**
             * @brief Text of the message.
             */
            QString content;

            /**
             * @brief URL to get additional help on the message at.
             */
            QString helpLink;

            /**
             * @brief Code for looking up additional help on the message.
             */
            QString messageCode;

            /**
             * @brief Level of impact of the message.
             */
            Severity::Severity severity;

            /**
             * @brief Where the message has been generated.
             */
            QVariant targetSiteId;

            /**
             * @brief Type of the location the message has been generated at.
             */
            TargetSiteType::TargetSiteType targetSiteType;
    };
}

#endif // MESSAGE_H
