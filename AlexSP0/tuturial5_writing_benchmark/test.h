#ifndef TEST_H
#define TEST_H

#include <QObject>

class TestBenchmark : public QObject {
    Q_OBJECT

private slots:
    void multiple_data();
    void multiple();
    void simple();
};

#endif //TEST_H
