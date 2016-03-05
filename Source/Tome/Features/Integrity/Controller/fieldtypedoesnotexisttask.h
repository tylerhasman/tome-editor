#ifndef FIELDTYPEDOESNOTEXISTTASK_H
#define FIELDTYPEDOESNOTEXISTTASK_H

#include "../../Tasks/Controller/task.h"

namespace Tome
{
    class TaskContext;

    class FieldTypeDoesNotExistTask : public Task
    {
        public:
            FieldTypeDoesNotExistTask();

            const MessageList execute(const TaskContext& context) const;

            static const QString MessageCode;
    };
}

#endif // FIELDTYPEDOESNOTEXISTTASK_H
