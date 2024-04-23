#include "masamainwindow.h"
#include "./ui_masamainwindow.h"

MasaMainWindow::MasaMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MasaMainWindow)
{
    ui->setupUi(this);

    // TODO: connect to the Masa server
    // TODO: populate the thoughts list
    // TODO: add a new Thought and send it to the server
    // TODO: edit a thought and push the changes to the server
    // TODO: remove a thought and delete it from the server
}

MasaMainWindow::~MasaMainWindow()
{
    delete ui;
}
