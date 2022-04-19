#include "formularioradiobutton.h"
#include "ui_formularioradiobutton.h"

FormularioRadioButton::FormularioRadioButton(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormularioRadioButton)
{
    ui->setupUi(this);
}

FormularioRadioButton::~FormularioRadioButton()
{
    delete ui;
}

