#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double result = a + b;
    ui->lineEdit_3->setText(QString::number(result));
}

void MainWindow::on_pushButton_2_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double result = a - b;
    ui->lineEdit_3->setText(QString::number(result));
}

void MainWindow::on_pushButton_3_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double result = a * b;
    ui->lineEdit_3->setText(QString::number(result));
}

void MainWindow::on_pushButton_4_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double result = a / b;
    ui->lineEdit_3->setText(QString::number(result));
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));
}
