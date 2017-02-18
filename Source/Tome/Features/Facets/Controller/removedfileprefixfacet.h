#ifndef REMOVEDFILEPREFIXFACET_H
#define REMOVEDFILEPREFIXFACET_H

#include <QObject>

#include "facet.h"

namespace Tome
{
    class FacetContext;

    class RemovedFilePrefixFacet : public QObject, public Facet
    {
            Q_OBJECT

        public:
            RemovedFilePrefixFacet();

            QWidget* createWidget(const FacetContext& context) const;
            const QVariant getDefaultValue() const;
            const QString getDescriptionForValue(const QVariant facetValue) const;
            const QString getDisplayName() const;
            const QString getKey() const;
            const QString getTargetType() const;
            const QVariant getWidgetValue(QWidget* widget) const;
            void setWidgetValue(QWidget* widget, const QVariant value) const;
            QString validateValue(const FacetContext& context, const QVariant value, const QVariant facetValue) const;

            static const QString FacetKey;
    };
}

#endif // REMOVEDFILEPREFIXFACET_H
