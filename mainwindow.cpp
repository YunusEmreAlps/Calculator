#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include "QMessageBox"
#include <cmath>

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

void MainWindow::on_Zero_clicked() // 0
{
     Combine += ui->Zero->text();
     ui->Screen->setText(Combine);

}

void MainWindow::on_One_clicked() // 1
{
   Combine += ui->One->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Two_clicked() // 2
{
   Combine += ui->Two->text();
   ui->Screen->setText(Combine) ;
}

void MainWindow::on_Three_clicked() // 3
{
   Combine += ui->Three->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Four_clicked() // 4
{
   Combine += ui->Four->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Five_clicked() // 5
{
   Combine += ui->Five->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Six_clicked() // 6
{
   Combine += ui->Six->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Seven_clicked() // 7
{
   Combine += ui->Seven->text();
   ui->Screen->setText(Combine);

}

void MainWindow::on_Eight_clicked() // 8
{
   Combine += ui->Eight->text();
   ui->Screen->setText(Combine) ;

}

void MainWindow::on_Nine_clicked() // 9
{
    Combine += ui->Nine->text();
    ui->Screen->setText(Combine) ;

}

void MainWindow::on_Dot_clicked() // .
{
  Result = ui->Screen->text().contains(".") ;

  if(Result == false) // Result == 0   -> Just print 1
   {
    Combine += ui->Dot->text();
    ui->Screen->setText(Combine);
   }

}

void MainWindow::on_Negative_clicked() // -
{
   R3 = ui->Screen->text().contains("-") ;

   if(R3 == false) // Just print 1
   {
     Combine = ui->Subtraction->text() + Combine ;

     ui->Screen->setText(Combine) ;
   }


}

void MainWindow::on_Addition_clicked() // +
{
    Num_1 = ui->Screen->text().toFloat() ;
    ui->Screen->clear() ;
    Combine = "" ;
    Flag_2 = 1 ;
}

void MainWindow::on_Subtraction_clicked() // -
{
    Num_1 = ui->Screen->text().toFloat() ;
    ui->Screen->clear() ;
    Combine = "" ;
    Flag_2 = 2 ;
}

void MainWindow::on_Multiplication_clicked() // *
{
    Num_1 = ui->Screen->text().toFloat() ;
    ui->Screen->clear() ;
    Combine = "" ;
    Flag_2 = 3 ;
}

void MainWindow::on_Division_clicked() // /
{
     Num_1 = ui->Screen->text().toFloat() ;
     ui->Screen->clear() ;
     Combine = "" ;

     Flag_2 = 4 ;
}

void MainWindow::on_Mod_clicked() // %
{
    Num_1 = ui->Screen->text().toFloat() ;
    ui->Screen->clear() ;
    Combine = "" ;
    Flag_2 = 5 ;
}

void MainWindow::on_Clear_clicked() //  All Clear
{
    ui->Screen->clear() ;
    Combine = "" ;
}

void MainWindow::on_Result_clicked() // =
{
    Num_2 = ui->Screen->text().toFloat() ;
    ui->Screen->clear() ;
    Combine = "" ;

    switch (Flag_2) {

    case 1 : Res = Num_1 + Num_2 ; break ;
    case 2 : Res = Num_1 - Num_2 ; break ;
    case 3 : Res = Num_1 * Num_2 ; break ;
    case 4 : Res = Num_1 / Num_2 ; break ;
    case 5 : while(Num_1 >= Num_2)
        {
            Num_1 = Num_1 - Num_2;
        }
            Res = Num_1 ;

        break ;
}
    ui->Screen->setText(QString :: number(Res)) ;

}







