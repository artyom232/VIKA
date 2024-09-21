#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtvika1.h"

class qtvika1 : public QMainWindow
{
    Q_OBJECT

public:
    qtvika1(QWidget *parent = nullptr);
    ~qtvika1();

private:
    Ui::qtvika1Class ui;
};
