#ifndef LISTUTILS_H
#define LISTUTILS_H

#include <QList>
#include <QStringList>
#include <QVariantList>

namespace Tome
{
    template<typename T>
    /**
     * @brief findInsertionIndex Assuming the passed list is sorted, returns the index to insert the specified item at to keep the list sorted.
     * @param list List to add the item to.
     * @param item Item to add.
     * @return Index to insert the specified item at to keep the list sorted.
     */
    inline int findInsertionIndex(const QList<T>& list, const T& item, bool(*lessThan)(const T& first, const T& second))
    {
        if (list.isEmpty())
        {
            return 0;
        }

        if (list.size() == 1)
        {
            return lessThan(list.first(), item) ? 1 : 0;
        }

        for (int i = 0; i < list.size() - 1; ++i)
        {
            if (lessThan(list.at(i), item) && !lessThan(list.at(i + 1), item))
            {
                return i + 1;
            }
        }

        return list.size();
    }

    inline QString toString(const QVariantList& list)
    {
        QString s("[");

        for (int i = 0; i < list.length(); ++i)
        {
            QVariant item = list[i];
            s.append(item.toString());

            if (i < list.length() - 1)
            {
                s.append(", ");
            }
        }

        s.append("]");
        return s;
    }
}

#endif // LISTUTILS_H
