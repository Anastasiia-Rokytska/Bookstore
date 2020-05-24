#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "books.h"
#include <QString>
#include <QVector>
#include <QMessageBox>
#include <container.h>
int TotalSum = 0;





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Button_fault,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_harry,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_sherlock,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_red,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_snowwhite,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_bun,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_math,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_time,SIGNAL(clicked()),this,SLOT(add_to_list()));
    connect(ui->Button_physics,SIGNAL(clicked()),this,SLOT(add_to_list()));
}


template<class A>
void MainWindow::add_info(A current){
    QListWidgetItem *book_ = new QListWidgetItem(current->GetTitle());
    ui->list_of_orders->addItem(book_);
    TotalSum +=current->GetPrice();
    ui->total_sum->setText(QVariant(TotalSum).toString());
}


template<class A>
void MainWindow::delete_from_list(A current){
    TotalSum -= current->GetPrice();
    ui->total_sum->setText(QVariant(TotalSum).toString());
//    delete ui->list_of_orders->currentItem();
}


void MainWindow::add_to_list(){

    QPushButton *button = (QPushButton *)sender();
    Container cntnr;
    auto container = cntnr.returner();

    if(button->objectName()=="Button_bun"){
        auto current = container->resolve<The_Bun>();
        add_info(current);
    }
    if(button->objectName()=="Button_snowwhite"){
        auto current = container->resolve<White_snow>();
        add_info(current);
    }
    if(button->objectName()=="Button_red"){
        auto current = container->resolve<Red_Hood>();
        add_info(current);
    }
    if(button->objectName()=="Button_math"){
        auto current = container->resolve<Math_Book>();
        add_info(current);
    }
    if(button->objectName()=="Button_time"){
        auto current = container->resolve<History_of_Time>();
        add_info(current);
    }
    if(button->objectName()=="Button_physics"){
        auto current = container->resolve<Physics_Impossible>();
        add_info(current);
    }
    if(button->objectName()=="Button_fault"){
        auto current = container->resolve<Fault_Stars>();
        add_info(current);
    }
    if(button->objectName()=="Button_harry"){
        auto current = container->resolve<Harry_Potter>();
        add_info(current);
    }
    if(button->objectName()=="Button_sherlock"){
        auto current = container->resolve<Sherlock_Holmes>();
        add_info(current);
    }
}



void MainWindow::on_Delete_clicked()
{
    QListWidgetItem *book = (QListWidgetItem *) ui->list_of_orders->currentItem();
    Container cntnr;
    auto container = cntnr.returner();


    if(book->text()=="The Fault in Our Stars")
    {
        auto current = container->resolve<Fault_Stars>();
        delete_from_list(current);}

    if(book->text()=="The Adventures of Sherlock Holmes")
    {   auto current = container->resolve<Sherlock_Holmes>();
        delete_from_list(current);}

    if(book->text()=="Harry Potter and the Philosopher's Stone")
    {   auto current = container->resolve<Harry_Potter>();
        delete_from_list(current);}

    if(book->text()=="The Math Book"){
        auto current = container->resolve<Math_Book>();
        delete_from_list(current);}

    if(book->text()=="A Brief History of Time"){
        auto current = container->resolve<History_of_Time>();
        delete_from_list(current);}

    if(book->text()=="Physics of the Impossible"){
        auto current = container->resolve<Physics_Impossible>();
        delete_from_list(current);}

    if(book->text()=="Little Red Riding Hood"){
        auto current = container->resolve<Red_Hood>();
        delete_from_list(current);}

    if(book->text()=="Snow White and the Seven Dwarfs"){
        auto current = container->resolve<White_snow>();
        delete_from_list(current);}

    if(book->text()=="The Bun"){
        auto current = container->resolve<The_Bun>();
        delete_from_list(current);}

    delete ui->list_of_orders->currentItem();

}



void MainWindow::on_list_of_orders_itemDoubleClicked(QListWidgetItem *book)
{
    Container cntnr;
    auto container = cntnr.returner();

     QString info_about_book;

    if(book->text()=="The Fault in Our Stars")
    {
        auto current = container->resolve<Fault_Stars>();
        info_about_book = current->GetInfo();}

    if(book->text()=="The Adventures of Sherlock Holmes")
    {   auto current = container->resolve<Sherlock_Holmes>();
        info_about_book = current->GetInfo();;}

    if(book->text()=="Harry Potter and the Philosopher's Stone")
    {   auto current = container->resolve<Harry_Potter>();
        info_about_book = current->GetInfo();}

    if(book->text()=="The Math Book"){
        auto current = container->resolve<Math_Book>();
        info_about_book = current->GetInfo();}

    if(book->text()=="A Brief History of Time"){
        auto current = container->resolve<History_of_Time>();
        info_about_book = current->GetInfo();}

    if(book->text()=="Physics of the Impossible"){
        auto current = container->resolve<Physics_Impossible>();
        info_about_book = current->GetInfo();}

    if(book->text()=="Little Red Riding Hood"){
        auto current = container->resolve<Red_Hood>();
        info_about_book = current->GetInfo();}

    if(book->text()=="Snow White and the Seven Dwarfs"){
        auto current = container->resolve<White_snow>();
        info_about_book = current->GetInfo();}

    if(book->text()=="The Bun"){
        auto current = container->resolve<The_Bun>();
        info_about_book = current->GetInfo();}

    QMessageBox::about(this,"Information about this book",info_about_book);




}


void MainWindow::on_Reset_clicked()
{
    QMessageBox::StandardButton reply3 = QMessageBox::critical(this,"","Do you want to clear the list of orders?",QMessageBox::Yes | QMessageBox::No);
    if(reply3 == QMessageBox::Yes){
        ui->list_of_orders->clear();
        TotalSum = 0;
        ui->total_sum->setText(QVariant(TotalSum).toString());}
}


void MainWindow::on_Cancel_clicked()
{
    QMessageBox::StandardButton reply1 = QMessageBox::question(this,"","Do you want to cancel this purchase and exit?",QMessageBox::Yes | QMessageBox::No);
    if(reply1 == QMessageBox::Yes){
        QApplication::quit();
    }

}



void MainWindow::on_Buy_clicked()
{
    QMessageBox::StandardButton reply2 = QMessageBox::question(this,"","Do you want to finish this purchase?",QMessageBox::Yes | QMessageBox::No);
    if(reply2 == QMessageBox::Yes && TotalSum != 0){
        QString purchase = "Your purchase is successful.\nYou paid "+QVariant(TotalSum).toString()+"₴";
        QMessageBox::about(this,"Congratulations!!!",purchase);
        QApplication::quit();

    }
    else if(reply2 == QMessageBox::Yes && TotalSum == 0){
         QMessageBox::warning(this,"","You did'nt select any books, please choose a book");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

