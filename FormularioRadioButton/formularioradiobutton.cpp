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


void FormularioRadioButton::on_btn_resposta_clicked()
{
    QString resposta;

    if(ui -> radio_linux -> isChecked()) {
      resposta = ui -> radio_linux -> text();
     } else if (ui -> radio_windows -> isChecked()) {
      resposta = ui -> radio_windows ->text();
     } else if (ui -> radio_macOs ->isChecked()) {
      resposta = ui -> radio_macOs -> text();
     } else if (ui -> radio_android -> isChecked()) {
      resposta = ui -> radio_android -> text();
     } else {
        resposta = "Escolha uma Alternativa.";
     }

    ui -> label_resposta -> setText("Você escolheu: <b>"+resposta+ "</b>");
}
