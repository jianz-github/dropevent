#ifndef LISTBOX_H
#define LISTBOX_H

#include <QListWidget>
#include <QDropEvent>
#include <QDragEnterEvent>

class ListBox : public QListWidget
{
public:
    ListBox(QWidget *parent = nullptr);
protected:
    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
};

#endif // LISTBOX_H
