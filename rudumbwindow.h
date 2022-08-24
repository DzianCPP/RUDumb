#ifndef RUDUMBWINDOW_H
#define RUDUMBWINDOW_H
#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QSpacerItem>
#include <QThread>
#include "mybutton.h"
#include "iknewitwindow.h"
class RUDumbWindow : public QWidget
{
    Q_OBJECT
public:
    RUDumbWindow();

signals:
    void displayIKnewItMessage();

private slots:
    void changeNoButtonPosition();
    void displayIKnewItSignal();
private:
    QLabel* m_sign_r_u_dumb;
    mybutton* m_yesButton;
    mybutton* m_noButton;
    QGridLayout* main_layout;
    QGridLayout* up_layout;
    QGridLayout* left_layout;
    QGridLayout* right_layout;
    QLabel* emptyLabel;
    QLabel* emptyLabel2;
    iKnewItWindow* iKnewItWin;


    QSpacerItem* spaceUp;
    QSpacerItem* spaceDown;

    mybutton* createButton(QString textOfButton);
    int calculateColumn();

    int m_noButtonCol = 6;

};

#endif // RUDUMBWINDOW_H
