#ifndef MYBUTTON_H
#define MYBUTTON_H
#pragma once
#include <QToolButton>


class mybutton : public QToolButton
{
public:
    explicit mybutton(const QString textOfButton, QWidget* parent = nullptr);
};

#endif // MYBUTTON_H
