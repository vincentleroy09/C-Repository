#include <iostream>
#include <string>
using namespace std;

int main() {
	bool programLooper = true;
	while(programLooper) {
		cout << "=============================================" << endl;
		cout << "==== INTEGRATIVE PROGRAMMING C++ PROJECT ====" << endl;
		cout << "=============================================" << endl;
		cout << "=============================================" << endl;
		cout << "===============   MENU START  ===============" << endl;
		cout << "=============================================" << endl;
		cout << "======== (1) Fishball                ========" << endl;
		cout << "======== (2) Squidball               ========" << endl;
		cout << "======== (3) KwekKwek                ========" << endl;
		cout << "======== (4) Fishball and Squidball  ========" << endl;
		cout << "======== (5) Fishball and KwekKwek   ========" << endl;
		cout << "======== (6) KwekKwek and Squidball  ========" << endl;
		cout << "======== (7) All                     ========" << endl;
		cout << "=============================================" << endl;
		cout << "================   MENU END  ================" << endl;
		cout << "=============================================" << endl;
		/* ----------------------- */
		char foodChoice;
		/* ----------------------- */
		// Global
	    string title;
	    float bill;
	    float change;
	    float vat = .12;
		/* ----------------------- */
		// Single Order
		float price;
		int pieces;
	    float amount;
	    float totalAmount;
	    /* ----------------------- */
	    // All
	    /* Fishball */
	    float fishBallPrice;
		int fishBallPieces;
	    float fishBallAmount;
	    float fishBallTotalAmount;
	    /* Squidball */
	    float squidBallPrice;
		int squidBallPieces;
	    float squidBallAmount;
	    float squidBallTotalAmount;
	    /* KwekKwek */
	    float kwekKwekPrice;
		int kwekKwekPieces;
	    float kwekKwekAmount;
	    float kwekKwekTotalAmount;
	    /* ----------------------- */
	    /* CODE GOES HERE */
	    cout << "Enter a number for what you want to order: ";
	    cin >> foodChoice;
		switch(foodChoice) {
		    // Fishball
		    case '1':
		        title = "Fishball";
		        price = 1;
		    	cout << "You have chosen menu 1: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        cout << endl;
		        amount = pieces * price;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);

                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Price: " << price << endl;
				cout << "Quantity: " << pieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		     // Squidball
		    case '2':
		        title = "Squidball";
		        price = .50;
		    	cout << "You have chosen menu 1: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        cout << endl;
		        amount = pieces * price;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Price: " << price << endl;
				cout << "Quantity: " << pieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		     // KwekKwek
		    case '3':
		        title = "KwekKwek";
		        price = 3;
		    	cout << "You have chosen menu 1: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        cout << endl;
		        amount = pieces * price;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Price: " << price << endl;
				cout << "Quantity: " << pieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		    // Fishball and Squidball
		    case '4':
		    	// Set Title
		        title = "Fishball and Squidball";
		        // Set Price
		        fishBallPrice = 1;
		        squidBallPrice = .50;
		    	cout << "You have chosen menu 4: " << title << endl;
		    	// Input how much fishball
		        cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		        // Input how much squidball
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		        cout << endl;
		        fishBallAmount = fishBallPieces * fishBallPrice;
		        squidBallAmount = squidBallPieces * squidBallPrice;
		        amount = fishBallAmount + squidBallAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Fishball Price: " << fishBallPrice << endl;
				cout << "Squidball Price: " << squidBallPrice << endl;
				cout << "Fishball Quantity: " << fishBallPieces << endl;
				cout << "Squidball Quantity: " << squidBallPieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		    // Fishball and KwekKwek
		    case '5':
		    	// Set Title
		        title = "Fishball and KwekKwek";
		        // Set Price
		        fishBallPrice = 1;
		        kwekKwekPrice = 3;
		    	cout << "You have chosen menu 5: " << title << endl;
		    	// Input how much fishball
		        cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		        // Input how much kwekkwek
		        cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        cout << endl;
		        fishBallAmount = fishBallPieces * fishBallPrice;
		        kwekKwekAmount = kwekKwekPieces * kwekKwekPrice;
		        amount = fishBallAmount + kwekKwekAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Fishball Price: " << fishBallPrice << endl;
				cout << "Kwekkwek Price: " << kwekKwekPrice << endl;
				cout << "Fishball Quantity: " << fishBallPieces << endl;
				cout << "Kwekkwek Quantity: " << kwekKwekPieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		    // KwekKwek and Squidball
		    case '6':
		    	// Set Title
		        title = "KwekKwek and Squidball";
		        // Set Price
		        squidBallPrice = .50;
		        kwekKwekPrice = 3;
		    	cout << "You have chosen menu 6: " << title << endl;
		    	// Input how much kwekkwek
		        cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        // Input how much squidball
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		        cout << endl;
		        squidBallAmount = squidBallPieces * squidBallPrice;
		        kwekKwekAmount = kwekKwekPieces * kwekKwekPrice;
		        amount = kwekKwekAmount + squidBallAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Kwekkwek Price: " << kwekKwekPrice << endl;
				cout << "Squidball Price: " << squidBallPrice << endl;
				cout << "Kwekkwek Quantity: " << kwekKwekPieces << endl;
				cout << "Squidball Quantity: " << squidBallPieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		    // All
		    case '7':
		    	// Set Title
		        title = "All";
		        // Set Price
		        squidBallPrice = .50;
		        fishBallPrice = 1;
		        kwekKwekPrice = 3;
		    	cout << "You have chosen menu 7: " << title << endl;
		    	// Input how much squidball
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		        // Input how much fishball
		        cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		    	// Input how much kwekkwek
		        cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        cout << endl;
		        squidBallAmount = squidBallPieces * squidBallPrice;
		        fishBallAmount = fishBallPieces * fishBallPrice;
		        kwekKwekAmount = kwekKwekPieces * kwekKwekPrice;
		        amount = kwekKwekAmount + squidBallAmount + kwekKwekAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        totalAmount = ((amount * vat) + amount);
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        } while (bill < totalAmount);
		        
                change = bill - totalAmount;
		        cout << "Your change is: " << change << endl;
		        // Receipt
		        cout << "=============================================" << endl;
				cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
				cout << "=============================================" << endl;
				cout << "=============================================" << endl;
				cout << "Order: " << title << endl;
				cout << "Squidball Price: " << squidBallPrice << endl;
				cout << "Fishball Price: " << fishBallPrice << endl;
				cout << "Kwekkwek Price: " << kwekKwekPrice << endl;
				cout << "Squidball Quantity: " << squidBallPieces << endl;
				cout << "Fishball Quantity: " << fishBallPieces << endl;
				cout << "Kwekkwek Quantity: " << kwekKwekPieces << endl;
				cout << "Amount: " << amount << endl;
				cout << "VAT: " << amount * vat << endl;
				cout << "Total Amount: " << totalAmount << endl;
				cout << "Amount Rendered: " << bill << endl;
				cout << "Change: " << change << endl;
				cout << "=============================================" << endl;
				cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
				cout << "============ PLEASE COME AGAIN! =============" << endl;
				cout << "=============================================" << endl;
		    break;
		    default:
		        cout << "It seems your choice is not listed from the menu." << endl;
	    	break;
		}
        
		bool exitLooper = true;
		while(exitLooper) {
			char choice;
			cout << "Do you want to exit the program? (Y/N) ";
			cin >> choice;
			if(choice == 'Y' || choice == 'y') {
				programLooper = false;
				exitLooper = false;
			} else if(choice == 'N' || choice == 'n') {
				programLooper = true;
				exitLooper = false;
			} else {
				cout << "Oops! You choose a wrong button, I will consider your choice to exit the program. Thank you.";
				programLooper = false;
				exitLooper = false;
			}
		}
	}
	return 0;
}