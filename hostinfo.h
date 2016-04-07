#ifndef HOSTINFO_H
#define HOSTINFO_H

#include <QWidget>
#include <QtNetwork/QNetworkInterface>
#include <QtNetwork/QHostInfo>
#include <QtNetwork/QNetworkAddressEntry>
#include <QList>
#include <QtNetwork/QHostAddress>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QGroupBox>
class HostInfo : public QWidget
{
    Q_OBJECT

public:
    HostInfo(QWidget *parent = 0);
    ~HostInfo();
public slots:
    void slot_detail();
private:
    QLabel *hostname;
    QLabel *hostIp;

    QLineEdit *hostnameLine;
    QLineEdit *hostIpLine;

    QPushButton *detail;
    QHostInfo Host_Info;
    QNetworkInterface interface;
    QNetworkAddressEntry networkAddressEntry;
};

#endif // HOSTINFO_H
