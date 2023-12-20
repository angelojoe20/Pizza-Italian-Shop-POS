#ifndef PIZZASHOPMENU_H
#define PIZZASHOPMENU_H

#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QRadioButton>
#include <QCheckBox>
#include <QPushButton>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class PizzaShopMenu; }
QT_END_NAMESPACE

class PizzaShopMenu : public QMainWindow
{
    Q_OBJECT

public:
    PizzaShopMenu(QWidget *parent = nullptr);
    ~PizzaShopMenu();

private slots:
    void on_CalculateButton_clicked();

private:
    Ui::PizzaShopMenu *ui;
};
#endif // PIZZASHOPMENU_H
