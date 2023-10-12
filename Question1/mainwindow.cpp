#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filewriter.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->typeCombo->addItem("permanent");
    ui->typeCombo->addItem("parttime");
    ui->typeCombo->addItem("contract");

    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(save()));
}

void MainWindow::save()
{
    QString name = ui->name->text();
    QDate date = ui->date->date();
    QString type = ui->typeCombo->currentText();

    Staff staff(name, date, type);
    list.addStaff(staff);

    FileWriter writer(staff);
    if (!writer.write())
        QMessageBox::information(this, "Output", "File written successfully");
    else
        QMessageBox::information(this, "Output", "Unable to write to file");

    ui->name->clear();
    ui->name->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}
