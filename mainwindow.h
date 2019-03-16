#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_Zero_clicked();      // 0 Button

    void on_One_clicked();       // 1 Button

    void on_Two_clicked();       // 2 Button

    void on_Three_clicked();     // 3 Button

    void on_Four_clicked();      // 4 Button

    void on_Five_clicked();      // 5 Button

    void on_Six_clicked();       // 6 Button

    void on_Seven_clicked();     // 7 Button

    void on_Eight_clicked();     // 8 Button

    void on_Nine_clicked();      // 9 Button

    void on_Addition_clicked(); //  + Button

    void on_Multiplication_clicked(); // * Button

    void on_Division_clicked(); // / Button

    void on_Mod_clicked(); // % Button

    void on_Subtraction_clicked(); // - Button

    void on_Clear_clicked(); // All Clear

    void on_Result_clicked(); // Result

    void on_Dot_clicked(); // . Button

    void on_Negative_clicked(); // - Sign Button

private:
    Ui::MainWindow *ui;

    QString Combine ;

    float Num_1 ;

    float Num_2 ;

    float Res = 0.0 ; // Result

    float Result = 0.0 ; // (.) -> boolean

    float R3 = 0.0 ; // (-) -> boolean

    int Flag_2 = 0 ; // Process Number





};

#endif // MAINWINDOW_H
