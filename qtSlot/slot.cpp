#include "slot.h"
#include "ui_slot.h"

Slot::Slot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Slot)
{
    ui->setupUi(this);

    //connect соединяет методы двух объектов
    //this объект Slot
    // связываем кнопки с соответствующими слотами
    // с использованием указателей на методы
       QObject::connect(ui->pushButtonGreen, &QPushButton::clicked, this, &Slot::setColorGreen);
       QObject::connect(ui->pushButtonRed, &QPushButton::clicked, this, &Slot::setColorRed);
       QObject::connect(ui->pushButtonBlue, &QPushButton::clicked, this, &Slot::setColorBlue);

       // связываем сигнал getColor со слотом, отвечающим за смену цвета фона
       QObject::connect(this, &Slot::getColor, this, &Slot::onClicked);

       // подключаем сигнал с передачей номера кнопки к слоту вывода сообщения
       QObject::connect(this, &Slot::getColor, this, &Slot::onClicked1);
   }

   Slot::~Slot()
   {
       delete ui;
   }

   void Slot::setColorGreen()
   {
       // Ключевое слово emit вызывает сигнал getColor() с новым значением в качестве аргумента
       // параметр 1 соответствует нажатию зелёной кнопки
       emit getColor(1);
   }

   void Slot::setColorRed()
   {
       // параметр 2 соответствует нажатию красной кнопки
       emit getColor(2);
   }

   void Slot::setColorBlue()
   {
       // параметр 3 соответствует нажатию синей кнопки
       emit getColor(3);
   }

   // слот вывода сообщения
   void Slot::onClicked1(int button_Number)

   {
       switch(button_Number) {
       case 1:
           ui->label->setText("выбран цвет зеленый ");
           break;
       case 2:
           ui->label->setText("выбран цвет красный ");
           break;
       case 3:
           ui->label->setText("выбран цвет синий ");
           break;
       }
   }

   // слот, меняющий цвет фона в зависимости от переданного номера из сигнала getColor
   void Slot::onClicked(int button_Number)
   {
       switch(button_Number) {
       case 1:
           this->setStyleSheet("background-color: rgb(151, 238, 192);");
           break;
       case 2:
           this->setStyleSheet("background-color: rgb(255, 187, 188);");
           break;
       case 3:
           this->setStyleSheet("background-color: rgb(162, 206, 226);");
           break;
       }
   }




