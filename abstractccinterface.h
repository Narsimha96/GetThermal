#ifndef ABSTRACTCCINTERFACE_H
#define ABSTRACTCCINTERFACE_H

#include <QObject>

class AbstractCCInterface : public QObject
{
    Q_OBJECT
public:
    AbstractCCInterface(QObject *parent = 0);
    AbstractCCInterface(const AbstractCCInterface &intf);
    virtual ~AbstractCCInterface() { }

    virtual const AbstractCCInterface &operator =(const AbstractCCInterface &format) = 0;

public slots:
    virtual void PerformFFC() = 0;
};

#endif // ABSTRACTCCINTERFACE_H
