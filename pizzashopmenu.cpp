#include "pizzashopmenu.h"
#include "ui_pizzashopmenu.h"

PizzaShopMenu::PizzaShopMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PizzaShopMenu)
{
    ui->setupUi(this);

        //set the pizza combo value

        ui->pizzaCombo->addItem("Small");
        ui->pizzaCombo->addItem("Medium");
        ui->pizzaCombo->addItem("Large");

}

PizzaShopMenu::~PizzaShopMenu()
{
    delete ui;
}




void PizzaShopMenu::on_CalculateButton_clicked()
{
    //determine the cost of pizza
    double pizzaCost = 0.0;
    switch (ui->pizzaCombo->currentIndex()){
    case 0: //Small
        pizzaCost = 300.00;
        break;
    case 1: //Medium
        pizzaCost = 500.00;
        break;
    case 2: //Large
        pizzaCost = 700.00;
        break;
    default:
        break;
    }


    double CrustType = 0.0;
    if (ui->ThinCrust->isChecked()){
            CrustType = 50.00;
    }else if(ui->ThickCrust->isChecked()){
            CrustType = 70.00;
    }

    double Toppings = 0.0;
    if (ui->Pepperoni->isChecked()){
             Toppings = Toppings +10.00;
}
    if (ui->ExtraCheese->isChecked()){
             Toppings = Toppings +10.00;
}
    if (ui->Onions->isChecked()){
             Toppings = Toppings +10.00;
}
    if (ui->Sausage->isChecked()){
               Toppings = Toppings +10.00;
}
    if (ui->Bacon->isChecked()){
                Toppings = Toppings +10.00;
}
    if (ui->Mushrooms->isChecked()){
               Toppings = Toppings +10.00;
}
    double DeliveryMethod = 0.0;
          if (ui->HomeDelivery->isChecked()){
                     DeliveryMethod = 25.00;
           }else if(ui->TakeOut->isChecked()){
                     DeliveryMethod = -10.00;
             }else if(ui->Dinein->isChecked()){
                    DeliveryMethod =  0;
}
        //Calculate total cost
           double TotalCost = (pizzaCost + CrustType + Toppings) + DeliveryMethod;

        //Display the total Cost
           ui->pizzaCost->setText(QString("Total Cost: P %1").arg(TotalCost, 0, 'f', 2));
  }


