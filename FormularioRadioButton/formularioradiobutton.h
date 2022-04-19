#ifndef FORMULARIORADIOBUTTON_H
#define FORMULARIORADIOBUTTON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FormularioRadioButton; }
QT_END_NAMESPACE

class FormularioRadioButton : public QMainWindow
{
    Q_OBJECT

public:
    FormularioRadioButton(QWidget *parent = nullptr);
    ~FormularioRadioButton();

private:
    Ui::FormularioRadioButton *ui;
};
#endif // FORMULARIORADIOBUTTON_H
