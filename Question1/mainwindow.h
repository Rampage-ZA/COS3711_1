#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QList>
#include <QMainWindow>
#include "stafflist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void save();

private:

    Ui::MainWindow *ui;
    StaffList list;

};

#endif // MAINWINDOW_H
