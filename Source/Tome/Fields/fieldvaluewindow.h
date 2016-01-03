#ifndef FIELDVALUEWINDOW_H
#define FIELDVALUEWINDOW_H

#include <QDialog>

#include "../Fields/fieldvaluewidget.h"


namespace Ui {
    class FieldValueWindow;
}

class FieldValueWindow : public QDialog
{
        Q_OBJECT

    public:
        explicit FieldValueWindow(QWidget *parent = 0);
        ~FieldValueWindow();

        QString getFieldValue() const;

        void setFieldDescription(const QString& description);
        void setFieldDisplayName(const QString& displayName);
        void setFieldValue(const QString& fieldValue);
        void setFieldType(const QString& fieldType) const;
        void setEnumeration(const QStringList& recordNames);

    protected:
        virtual void showEvent(QShowEvent* event);

    private:
        Ui::FieldValueWindow *ui;
        Tome::FieldValueWidget* fieldValueWidget;
};

#endif // FIELDVALUEWINDOW_H
