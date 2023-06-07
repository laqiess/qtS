#ifndef SLOT_H
#define SLOT_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>

QT_BEGIN_NAMESPACE

namespace Ui {
class Slot;
}

QT_END_NAMESPACE

class Slot : public QMainWindow
{
    Q_OBJECT

signals:
     void getColor(int button_number);//сигнал для передачи номера нажатой кнопки


public:
    Slot(QWidget *parent = nullptr);
    ~Slot();

private:
    Ui::Slot *ui;

public slots:
    // слоты, связывающиеся с сигналами нажатия кнопок
    void setColorRed();
    void setColorGreen();
    void setColorBlue();

    // слот изменения фона окна
    void onClicked(int button_Number);
    // слот вывода сообщения
    void onClicked1(int button_Number);
};
#endif // SLOT_H
