#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    template<class A> void add_info(A current);
    template<class A> void delete_from_list(A current);


private:
    Ui::MainWindow *ui;

private slots:
    void add_to_list();
    void on_Delete_clicked();
    void on_list_of_orders_itemDoubleClicked(QListWidgetItem *item);
    void on_Buy_clicked();
    void on_Cancel_clicked();
    void on_Reset_clicked();
};
#endif // MAINWINDOW_H
