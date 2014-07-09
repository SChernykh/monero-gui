#ifndef FILTER_H
#define FILTER_H

#include <QObject>

class filter : public QObject
{
    Q_OBJECT

private:
    bool m_ctrlPressed;
    bool m_mousePressed;

public:
    explicit filter(QObject *parent = 0);

protected:
    bool eventFilter(QObject *obj, QEvent *ev);

signals:
    void ctrlPressed();
    void ctrlReleased();
    void sequencePressed(const QVariant &seq);
    void mousePressed(const QVariant &o, const QVariant &x, const QVariant &y);
    void mouseReleased(const QVariant &o, const QVariant &x, const QVariant &y);
};

#endif // FILTER_H
