#include "iknewitwindow.h"

iKnewItWindow::iKnewItWindow()
{
    this->setStyleSheet("background-color: darkseagreen");
}

void iKnewItWindow::displayIKnewIt() {
    QLabel* iKnewIt = new QLabel;
    iKnewIt->setText("I knew it!");
    iKnewIt->setAlignment(Qt::AlignCenter);
    QFont font = iKnewIt->font();
    font.setPointSize(font.pointSize()+20);
    iKnewIt->setFont(font);
    iKnewIt->setStyleSheet("color: darkslategrey; font-weight: bold");
    QGridLayout* new_layout = new QGridLayout;
    setFixedSize(300, 200);
    new_layout->addWidget(iKnewIt, 0, 0, 7, 10);
    setLayout(new_layout);
    this->show();
}
