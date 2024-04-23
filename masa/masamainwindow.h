#ifndef MASAMAINWINDOW_H
#define MASAMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MasaMainWindow;
}
QT_END_NAMESPACE

class MasaMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MasaMainWindow(QWidget *parent = nullptr);
    ~MasaMainWindow();

private:
    Ui::MasaMainWindow *ui;
};
#endif // MASAMAINWINDOW_H
