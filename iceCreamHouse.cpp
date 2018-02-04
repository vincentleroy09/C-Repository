#include<iostream>
#include<string>
using namespace std;


class SelectOrder{
public:
	void getOrder(int ser){
	sertype = ser;
	switch(sertype){
		case 1:
			price = 20;
			cout<<"Ice Cream Serving		Ice Cream in a Buns\n";
		break;
		case 2:
			price = 15;
			cout<<"Ice Cream Serving		Ice Cream in a Cup\n";
		break;
		case 3:
			price = 15;
			cout<<"Ice Cream Serving		Ice Cream in Sugar Cone\n";
		break;
		case 4:
			price = 10;
			cout<<"Ice Cream Serving		Ice Cream in Regular Cone\n";
		break;
		default:
			cout<<"Invalid Selection of Serving\n";
	}
}
	void getflavor(int fla){
	flavor = fla;
		switch(flavor){
		case 1:
			Icecream = "Chocolate";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
		case 2:
			Icecream = "Cheese";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
		case 3:
			Icecream = "Buko";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
		case 4:
			Icecream = "Vanilla";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
		case 5:
			Icecream = "Ube Halaya";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
		case 6:
			Icecream = "Mango";
			cout<<"Ice Cream Flavor:		"<<Icecream<<"\n";
		break;
	}
	}

	getQTY(int qty){
	quantity = qty;
	if(qty<2){
	cout<<"Order Quantity			"<<quantity<<" pc.\n";
	}else{
	cout<<"Order Quantity			"<<quantity<<" pcs.\n";
	}
	}

	protected:
		int sertype,flavor,quantity,price;
		string Icecream;
}var1;

class vat{
	public:
		vat(double i=0.12){
		VAT = i;
		}

		double getVat(){
		return VAT;
		}

		private:
		double VAT;
};




class ComputeOrder:public SelectOrder,public vat{
	public:

		double vatprice(){
		double vatprice = (price*quantity)* getVat();
		return (vatprice);
		}


		double sub_total(){
		double subtotal =price * quantity;
		return(subtotal);
		}

		double total(){
		double total = sub_total() + vatprice();
		return(total);
		}

		void cash_change(int pay,int quantity,double price){
		double a,b,c;
		a= price;
		b= quantity;
		cout<<pay-a<<".00\n";
		}
}var2;

int main(){
	ComputeOrder PO;
	int ser,fla,qty,pay;
	string command;
// display menu
	do{
	cout<<"********************************************************************\n";
	cout<<"*                         Point of Sale                            *\n";
	cout<<"*                 Welcome to Ice Cream House                       *\n";
	cout<<"*                 Concepcion I Marikina City                       *\n";
	cout<<"*                        Tel # (822-7777)                          *\n";
	cout<<"********************************************************************\n\n";

	cout<<"------------------- Ice Cream Servings Available -------------------\n\n";
	cout<<"(1) Ice Cream in a Buns         ...........       P20.00\n";
	cout<<"(2) Ice Cream in Cup            ...........       P15.00\n";
	cout<<"(3) Ice Cream in Sugar Cone     ...........       P15.00\n";
	cout<<"(4) Ice Cream in Regular Cone   ...........       P10.00\n\n";

	cout<<"------------------- Ice Cream Flavors Available --------------------\n\n";
	cout<<"(1) Chocolate \t\t\t";
	cout<<"(4) Vanilla\n";
	cout<<"(2) Cheese \t\t\t";
	cout<<"(5) Ube Halaya\n";
	cout<<"(3) Buko \t\t\t";
	cout<<"(6) Mango\n\n";

//	user input
		cout<<"--------------------------------------------------------------------\n\n";
	do{
	cout<<"Select your Preferred Ice Cream Servings: ";
	cin>>ser;
	}while(ser>4);

	do{
	cout<<"Select the Ice Cream Flavor you want: ";
	cin>>fla;
	}while(fla>6);
	cout<<"Enter the quantity of Ice Cream to be purchased: ";
	cin>>qty;

	cout<<"\n-------------------------- Order Details ---------------------------\n\n";
	PO.getOrder(ser);
	PO.getflavor(fla);
	PO.getQTY(qty);

	do{
	cout<<"\nEnter the Amount of Cash Receive: ";
	cin>>pay;
	cout<<"\n";
	}while(PO.total()>pay);

	cout<<"====================================================================\n";
	cout<<"\t\t\tPrinting Official Receipt\n";
	cout<<"====================================================================\n\n";


	cout<<"                       Ice Cream House                        \n";
	cout<<"                  Concepcion I Marikina City                        \n";
	cout<<"                  VAT REG TIN 000-338-474-241                       \n";
	cout<<"                        Tel # (822-7777)                           \n\n";

	PO.getOrder(ser);
	PO.getflavor(fla);
	PO.getQTY(qty);
	cout<<"VATable				"<<PO.sub_total()<<"\n";
	cout<<"VAT Percentage			12%\n";
	cout<<"VAT Price 			"<<PO.vatprice()<<"\n\n";
	cout<<"Cash Recived			"<<pay<<".00\n";
	cout<<"Total Amount of Purchase	"<<PO.total()<<".00\n";
	cout<<"Order Change			";PO.cash_change(pay,qty,PO.total());

	cout<<"\n===================== THANK YOU FOR PURCHASING =====================\n\n";
	cout<<"Do you want to Purchase Order again? (Yes/No): ";
	cin>>command;
	}while(command =="Yes" ||command == "Y" || command =="y");
return 0;
}
