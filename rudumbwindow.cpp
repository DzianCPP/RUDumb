#include "rudumbwindow.h"

RUDumbWindow::RUDumbWindow() {

    setFixedSize(300, 200);
    this->setStyleSheet("background-color: darkseagreen");

    //windows

    iKnewItWin = new iKnewItWindow;

    //labels

    m_sign_r_u_dumb = new QLabel("Are you dumb?");
    m_sign_r_u_dumb->setAlignment(Qt::AlignCenter);
    QFont font = m_sign_r_u_dumb->font();
    font.setPointSize(font.pointSize()+8);
    m_sign_r_u_dumb->setFont(font);

    emptyLabel = new QLabel;
    emptyLabel2 = new QLabel;

    //fonts

    m_sign_r_u_dumb->setStyleSheet("color: darkslategrey; font-weight: bold");

    //buttons

    m_noButton = createButton("No");
    m_yesButton = createButton("Yes");


    //layout

    main_layout = new QGridLayout;

    //adding widgets

    main_layout->addWidget(m_sign_r_u_dumb, 2, 1, 1, 8);
    main_layout->addWidget(m_yesButton, 5, 2, 1, 2);
    main_layout->addWidget(m_noButton, 5, m_noButtonCol, 1, 2);
    main_layout->addWidget(emptyLabel, 0, 0, 7, 1);
    main_layout->addWidget(emptyLabel2, 0, 9, 3, 1);

    //connections

    connect(m_noButton, SIGNAL(pressed()), this, SLOT(changeNoButtonPosition()));
    connect(m_yesButton, SIGNAL(clicked()), this, SLOT(displayIKnewItSignal()));
    connect(this, SIGNAL(displayIKnewItMessage()), iKnewItWin, SLOT(displayIKnewIt()));

    //setting layout

    setLayout(main_layout);
}

void RUDumbWindow::changeNoButtonPosition() {
    mybutton* thisButton = (mybutton*) sender();
    int column = calculateColumn();
    if (!(column <= m_noButtonCol + 1) || !(column >= m_noButtonCol - 1) ) {
    this->main_layout->removeWidget(m_noButton);
    m_noButtonCol = column;
    this->main_layout->addWidget(thisButton, 5, m_noButtonCol, 1, 2);
    }

    else {
        changeNoButtonPosition();
    }
}

void RUDumbWindow::displayIKnewItSignal() {
    this->close();
    emit displayIKnewItMessage();
}

mybutton *RUDumbWindow::createButton(QString textOfButton) {
    mybutton* newButton = new mybutton(textOfButton);
    return newButton;
}
int RUDumbWindow::calculateColumn() {
    int temp = rand() % 5 + 4;
        return temp;
}
