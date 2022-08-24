#include "mybutton.h"


mybutton::mybutton(const QString textOfButton, QWidget *parent) {
    this->setText(textOfButton);
    this->setMinimumSize(50, 30);
    this->setStyleSheet("background-color: darkslategrey; color: white; border-radius: 5px");
}
