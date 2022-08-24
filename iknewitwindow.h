#ifndef IKNEWITWINDOW_H
#define IKNEWITWINDOW_H
#pragma once
#include <QGridLayout>
#include <QLabel>
#include <QWidget>

class iKnewItWindow : public QWidget
{
    Q_OBJECT
public:
    iKnewItWindow();

private slots:
    void displayIKnewIt();
};

#endif // IKNEWITWINDOW_H
