#include "listbox.h"
#include <QDebug>

ListBox::ListBox(QWidget *parent) : QListWidget (parent)
{
    setAcceptDrops(true);
}

void ListBox::dropEvent(QDropEvent *event)
{
    (void)event;
    qDebug() << "dropEvent";
}

void ListBox::dragEnterEvent(QDragEnterEvent *event)
{
    qDebug() << "dragEnterEvent";
    event->accept();
}
