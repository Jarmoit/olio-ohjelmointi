#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(on_btnCount_clicked));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_btnCount_clicked()
{
    //qDebug()<<"btn counter pressed";
    this->counter += 1;
    counterS = QString::number(counter);
    //qDebug()<<this->counter;
    ui->txtResult->setText(this->getCounterS());
    ui->labelInfo->setText("Painiketta Count painettu "+counterS +" kertaa");
}


void MainWindow::on_btnReset_clicked()
{

    //qDebug()<<"btn reset pressed";
    this->counter = 0;
    counterS = QString::number(counter);
    //qDebug()<<this->counter;
    ui->txtResult->setText(this->getCounterS());
}

QString MainWindow::getCounterS() const
{
    return counterS;
}

void MainWindow::setCounterS(const QString &newCounterS)
{
    counterS = newCounterS;
}

