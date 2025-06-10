#include <QCryptographicHash>
#include <string>
#include "AItest.h"
using namespace std;

string sha256(const string& input) {
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(input), QCryptographicHash::Sha256);
    return hash.toHex().toStdString();
}
