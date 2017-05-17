#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/qmath.h>
#include <string>
#include<QKeyEvent>
#include<QLabel>
#include<QPushButton>


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
    double FirstNumber , SecondNumber , Result;

     FirstNumber= ui->lineEdit->text().toDouble();
    SecondNumber = ui->lineEdit_2->text().toDouble();

    Result=FirstNumber+SecondNumber;


    ui->lineEdit_3->setText(QString::number(Result));


}

void MainWindow::on_pushButton_3_clicked()
{
    double FirstNumber , SecondNumber , Result;

     FirstNumber= ui->lineEdit->text().toDouble();
    SecondNumber = ui->lineEdit_2->text().toDouble();
    Result=FirstNumber*SecondNumber;

    ui->lineEdit_3->setText(QString::number(Result));
}

void MainWindow::on_pushButton_2_clicked()
{
    double FirstNumber , SecondNumber , Result;

     FirstNumber= ui->lineEdit->text().toDouble();
    SecondNumber = ui->lineEdit_2->text().toDouble();
    Result=FirstNumber-SecondNumber;

    ui->lineEdit_3->setText(QString::number(Result));
}

void MainWindow::on_pushButton_4_clicked()
{
    double FirstNumber , SecondNumber , Result;

     FirstNumber= ui->lineEdit->text().toDouble();
    SecondNumber = ui->lineEdit_2->text().toDouble();
    Result=FirstNumber/SecondNumber;

    ui->lineEdit_3->setText(QString::number(Result));


}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(0));
     ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));

}






void MainWindow::on_pushButton_6_clicked()
{
    int FirstNumber=10 ;
    int SecondNumber;
    int Result;


    SecondNumber= ui->lineEdit->text().toInt();
   Result= qPow(FirstNumber,SecondNumber);
   ui->lineEdit_3->setText(QString::number(Result));





}

void MainWindow::on_pushButton_7_clicked()
{
   int one=1;
    ui->lineEdit->setText(QString::number(one));

}



void MainWindow::on_pushButton_8_clicked()
{
    int two=2;
    ui->lineEdit->setText(QString::number(two));
}



void MainWindow::on_pushButton_9_clicked()
{
    int three=3;
    ui->lineEdit->setText(QString::number(three));


}

void MainWindow::on_pushButton_10_clicked()
{
    int four=4;
    ui->lineEdit->setText(QString::number(four));

}

void MainWindow::on_pushButton_11_clicked()
{
    int five=5;
    ui->lineEdit->setText(QString::number(five));

}



void MainWindow::on_pushButton_12_clicked()
{
    int six=6;
    ui->lineEdit->setText(QString::number(six));

}

void MainWindow::on_pushButton_13_clicked()
{
    int seven=7;
    ui->lineEdit->setText(QString::number(seven));

}



void MainWindow::on_pushButton_14_clicked()
{
    int eight=8;
    ui->lineEdit->setText(QString::number(eight));

}



void MainWindow::on_pushButton_15_clicked()
{
    int nine=9;
    ui->lineEdit->setText(QString::number(nine));

}

void MainWindow::on_pushButton_25_clicked()
{
    int zero=0;
    ui->lineEdit->setText(QString::number(zero));

}

void MainWindow::on_pushButton_16_clicked()
{
    int one=1;
    ui->lineEdit_2->setText(QString::number(one));


}

void MainWindow::on_pushButton_17_clicked()
{
    int two=2;
    ui->lineEdit_2->setText(QString::number(two));

}



void MainWindow::on_pushButton_18_clicked()
{
    int three=3;
    ui->lineEdit_2->setText(QString::number(three));

}

void MainWindow::on_pushButton_19_clicked()
{
    int four=4;
    ui->lineEdit_2->setText(QString::number(four));

}

void MainWindow::on_pushButton_20_clicked()
{
    int five=5;
    ui->lineEdit_2->setText(QString::number(five));

}

void MainWindow::on_pushButton_21_clicked()
{
    int six=6;
    ui->lineEdit_2->setText(QString::number(six));

}

void MainWindow::on_pushButton_22_clicked()
{
    int seven=7;
    ui->lineEdit_2->setText(QString::number(seven));

}



void MainWindow::on_pushButton_23_clicked()
{
    int eight=8;
    ui->lineEdit_2->setText(QString::number(eight));

}


void MainWindow::on_pushButton_24_clicked()
{
    int nine=9;
    ui->lineEdit_2->setText(QString::number(nine));

}

void MainWindow::on_pushButton_26_clicked()
{
    int zero=0;
    ui->lineEdit_2->setText(QString::number(zero));

}

void MainWindow::keyPressEvent(QKeyEvent *event) {

   if (event->key() == Qt::Key_Plus) {
       emit on_pushButton_clicked();
   }
   else if(event->key()== Qt::Key_Minus){
       emit on_pushButton_2_clicked();
   }
   else if(event->key()==Qt::Key_multiply){
       emit on_pushButton_3_clicked();
   }
   else if(event->key()==Qt::Key_division){
       emit on_pushButton_4_clicked();
   }
   else if(event->key()==Qt::Key_Escape){
       emit on_pushButton_6_clicked();
   }
   else if(event->key()==Qt::Key_Delete){
       emit on_pushButton_5_clicked();

   }
}





