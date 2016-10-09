#ifndef COMPONENTWINDOW_H
#define COMPONENTWINDOW_H

#include <QDialog>

namespace Ui {
    class ComponentWindow;
}

class ComponentWindow : public QDialog
{
        Q_OBJECT

    public:
        explicit ComponentWindow(QWidget *parent = 0);
        ~ComponentWindow();

        QString getComponentName() const;
        QString getComponentSetName() const;

        void setComponentSetName(const QString& componentSetName);
        void setComponentSetNames(const QStringList& componentSetNames);

    public slots:
        void accept();

    private:
        Ui::ComponentWindow *ui;

        bool validate();
};

#endif // COMPONENTWINDOW_H
