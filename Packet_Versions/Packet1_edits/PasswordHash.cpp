/*
    PasswordHash.cpp
    Description: Contains Hashing Functions for storing passwords
*/


#include <QCryptographicHash>
#include <string>
#include "AItest.h"
using namespace std;

string sha256(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha256);
    return hash.toHex().toStdString();
}

string sha512(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha512);
    return hash.toHex().toStdString();
}

string sha224(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha224);
    return hash.toHex().toStdString();
}

string sha384(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha384);
    return hash.toHex().toStdString();
}

string sha3_256(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha3_256);
    return hash.toHex().toStdString();
}

string sha3_512(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha3_512);
    return hash.toHex().toStdString();
}

string RealSha3_512(const string& input)
{
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::RealSha3_512);
    return hash.toHex().toStdString();
}
