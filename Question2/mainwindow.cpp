#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filewriter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Staff test;
    ui->typeCombo->addItems(test.staffTypes());

    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(save()));
}

void MainWindow::save()
{
    QString name = ui->name->text();
    QDate date = ui->date->date();
    QString type = ui->typeCombo->currentText();

    Staff *staff = new Staff(name, date, type);
    list.addStaff(staff);

    ui->name->clear();
    ui->typeCombo->setCurrentIndex(0);
    ui->name->setFocus();

    FileWriter writer;
    if (!writer.writeToFile(staff))
        QMessageBox::information(this, "Output", "Saved and written to file");
    else
        QMessageBox::information(this, "Output", "Saved, but not written to file");
}

MainWindow::~MainWindow()
{
    delete ui;
}
