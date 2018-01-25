#include <iostream>
#include <string>
using namespace std;

/* BASE CLASS 1 FoodStall + ENCAPSULATION */
class FoodStall {
	public:
		// Global
		// Public Attributes
		float bill;
		float change;
		float vat = .12;
		float amount;
		float totalAmount;

		/* Methods */
		// Constructor
		FoodStall() {
			cout << "SUBJECT:INTEGRATIVE PROGRAMMING" << endl;
			cout << "NAME: DAZA, VINCENT LEROY M." << endl;
			cout << "SECTION: 4BSIT8A" << endl;
		}
		int foodStallHeader(){
			cout << "=============================================" << endl;
			cout << "==== INTEGRATIVE PROGRAMMING C++ PROJECT ====" << endl;
			cout << "=============================================" << endl;
			cout << "=============================================" << endl;
			cout << "==============   MENU START  ================" << endl;
			cout << "=============================================" << endl;
			cout << "======== (1) Fishball                ========" << endl;
			cout << "======== (2) Squidball               ========" << endl;
			cout << "======== (3) KwekKwek                ========" << endl;
			cout << "======== (4) Fishball and Squidball  ========" << endl;
			cout << "======== (5) Fishball and KwekKwek   ========" << endl;
			cout << "======== (6) KwekKwek and Squidball  ========" << endl;
			cout << "======== (7) All                     ========" << endl;
			cout << "=============================================" << endl;
			cout << "===============   MENU END  =================" << endl;
			cout << "=============================================" << endl;
		}

		// Setters
		// Set Bill
		void setBill(float bill) {
			this->bill = bill;
		}

		// Set Amount
		void setAmount(float pieces, float price) {
			this->amount = pieces * price;
		}

		// Set Total Amount
		void setTotalAmount(float amount, float vat) {
			this->totalAmount  = ((amount * vat) + amount);
		}

		// Set Change
		void setChange(float bill, float totalAmount) {
			this->change = bill - totalAmount;
		}

		void setTitle(string title) {
			this->title = title;
		}

		// Getters

		// Set Title
		string getTitle() {
			return this->title;
		}

		// Get VAT
		float getVAT() {
			return this->vat;
		}
		// Get Bill
		int getBill() {
			return this->bill;
		}

		// Get Amount
		float getAmount() {
			return this->amount;
		}

		// Get Total Amount
		float getTotalAmount() {
			return this->totalAmount;
		}

		// Get Change
		float getChange() {
			return this->change;
		}
		
		// Destructor
		~FoodStall(){}
	private:
		// Private Attributes
		string title;
		
};

/* BASE CLASS 2 SingleOrder */
class SingleOrder {
	public:
		// Global
		/* ----------------------- */
		// Single Order
		float price;
		int pieces;
		/* ----------------------- */

		// Setters
		// Constructor
		SingleOrder() {}

		// Set Price
		void setPrice(float price) {
			this->price = price;
		}

		// Set Pieces
		void setPieces(int pieces) {
			this->pieces = pieces;
		}

		// Getters

		// Get Price
		float getPrice() {
			return this->price;
		}

		// Get Pieces
		int getPieces() {
			return this->pieces;
		}

		// Destructor
		~SingleOrder(){}


};

/* BASE CLASS 3 MultipleOrder */
class MultipleOrder {
		public:
		// Global
		int quantity;
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

	    // Setters
	    // Constructor
	    MultipleOrder(){}

	    // Set Fish Ball Price
		void setFishBallPrice(float fishBallPrice) {
			this->fishBallPrice = fishBallPrice;
		}

		// Set Squid Ball Price
		void setSquidBallPrice(float squidBallPrice) {
			this->squidBallPrice = squidBallPrice;
		}

		// Set Kwekkwek Price
		void setKwekKwekPrice(float kwekKwekPrice) {
			this->kwekKwekPrice = kwekKwekPrice;
		}

		// Set Fishball Pieces
		void setFishBallPieces(int fishBallPieces) {
			this->fishBallPieces = fishBallPieces;
		}

		// Set Squidball Pieces
		void setSquidBallPieces(int squidBallPieces) {
			this->squidBallPieces = squidBallPieces;
		}

		// Set Kwekkwek Pieces
		void setKwekKwekPieces(int kwekKwekPieces) {
			this->kwekKwekPieces = kwekKwekPieces;
		}

		// Set Fishball Amount
		void setFishBallAmount(float fishBallPieces, float fishBallPrice) {
			this->fishBallAmount = fishBallPieces * fishBallPrice;
		}

		// Set Squidball Amount
		void setSquidBallAmount(float squidBallPieces, float squidBallPrice) {
			this->squidBallAmount = squidBallPieces * squidBallPrice;
		}

		// Set Kwekkwek Amount
		void setKwekKwekAmount(float kwekKwekPieces, float kwekKwekPrice) {
			this->kwekKwekAmount = kwekKwekPieces * kwekKwekPrice;
		}

		// Set Quantity
		void setQuantity(int quantity) {
			this->quantity = quantity;
		}

		// Getters

		// Get Fishball Price
		float getFishBallPrice() {
			return this->fishBallPrice;
		}

		// Get Squidball Price
		float getSquidBallPrice() {
			return this->squidBallPrice;
		}

		// Get Kwekkwek Price
		float getKwekKwekPrice() {
			return this->kwekKwekPrice;
		}

		// Get Fishball Pieces
		int getFishBallPieces() {
			return this->fishBallPieces;
		}

		// Get Squidball Pieces
		int getSquidBallPieces() {
			return this->squidBallPieces;
		}

		// Get Kwekkwek Pieces
		int getKwekKwekPieces() {
			return this->kwekKwekPieces;
		}

		// Get all
		int getQuantity() {
			return this->quantity;
		}

		// Get Fishball Amount
		float getFishBallAmount() {
			return this->fishBallAmount;
		}

		// Get Squidball Amount
		float getSquidBallAmount() {
			return this->squidBallAmount;
		}

		// Get Kwekkwek Amount
		float getKwekKwekAmount() {
			return this->kwekKwekAmount;
		}

		// Destructor
	    ~MultipleOrder(){}
};
/* INHERITANCE AND POLYMORPHISM CLASS Foods */
class Foods: public FoodStall, public SingleOrder, public MultipleOrder {
	public:
		Foods(){}
		// Constructor
		void printSingleOrderReceipt() {
			// Receipt
	        cout << "=============================================" << endl;
			cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
			cout << "=============================================" << endl;
			cout << "Order: " << FoodStall::getTitle() << endl;

			cout << "Quantity: " << SingleOrder::getPieces() << endl;
			cout << "Amount: " << FoodStall::getAmount() << endl;
			cout << "VAT: " << FoodStall::getAmount() * FoodStall::getVAT() << endl;

			cout << "Total Amount: " << FoodStall::getTotalAmount() << endl;
			cout << "Amount Rendered: " << FoodStall::getBill() << endl;
			cout << "Change: " << FoodStall::getChange() << endl;
			cout << "=============================================" << endl;
			cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
			cout << "============ PLEASE COME AGAIN! =============" << endl;
			cout << "=============================================" << endl;
		}
		void printMultipleOrderReceipt() {
			// Receipt
	        cout << "=============================================" << endl;
			cout << "====  STREET FOOD STALL OFFICIAL RECEIPT ====" << endl;
			cout << "=============================================" << endl;
			cout << "Order: " << FoodStall::getTitle() << endl;

			cout << "Quantity: " << MultipleOrder::getQuantity() << endl;
			cout << "Amount: " << MultipleOrder::getFishBallAmount() + MultipleOrder::getSquidBallAmount() + MultipleOrder::getKwekKwekAmount() << endl;
			cout << "VAT: " << ((MultipleOrder::getFishBallAmount() + MultipleOrder::getSquidBallAmount() + MultipleOrder::getKwekKwekAmount()) * FoodStall::getVAT()) << endl;

			cout << "Total Amount: " << FoodStall::getTotalAmount() << endl;
			cout << "Amount Rendered: " << FoodStall::getBill() << endl;
			cout << "Change: " << FoodStall::getChange() << endl;
			cout << "=============================================" << endl;
			cout << "========  THANK YOU FOR PURCHASING  =========" << endl;
			cout << "============ PLEASE COME AGAIN! =============" << endl;
			cout << "=============================================" << endl;
		}
		// Destructor
		~Foods(){}
};


int main() {
	bool programLooper = true;
	while(programLooper) {
		// Abstraction
		// Instantiate
		Foods StreetFoodStall;
		/* ----------------------- */
		char foodChoice;
		/* ----------------------- */
		// Global
		string title;
		float bill;
		float change;
		float vat = StreetFoodStall.getVAT();

		/* ----------------------- */
		// Single Order
		float price;
		// Prices
		float fishBall = 1;
		float squidBall = .50;
		float kwekKwek = 3;
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
	    // Header Menu
		StreetFoodStall.foodStallHeader();
	    cout << "Enter a number for what you want to order: ";
	    cin >> foodChoice;
		switch(foodChoice) {
		    // Fishball
		    case '1':
		    	// Set Title
		        StreetFoodStall.setTitle("Fishball");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setPrice(fishBall);
		        // Get Price and store it to price
		        price = StreetFoodStall.getPrice();
		    	cout << "You have chosen menu 1: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        // Set pieces from cin >> pieces
		        StreetFoodStall.setPieces(pieces);
		        // Get Pieces and store it to pieces
		        pieces = StreetFoodStall.getPieces();
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setAmount(pieces, price);
		        // Store the calculated amount to amount
		        amount = StreetFoodStall.getAmount();
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printSingleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // Squidball
		    case '2':
		    	// Set Title
		        StreetFoodStall.setTitle("Squidball");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setPrice(squidBall);
		        // Get Price and store it to price
		        price = StreetFoodStall.getPrice();
		    	cout << "You have chosen menu 2: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        // Set pieces from cin >> pieces
		        StreetFoodStall.setPieces(pieces);
		        // Get Pieces and store it to pieces
		        pieces = StreetFoodStall.getPieces();
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setAmount(pieces, price);
		        // Store the calculated amount to amount
		        amount = StreetFoodStall.getAmount();
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printSingleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // Kwekkwek
		    case '3':
		    	// Set Title
		        StreetFoodStall.setTitle("Kwekkwek");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setPrice(kwekKwek);
		        // Get Price and store it to price
		        price = StreetFoodStall.getPrice();
		    	cout << "You have chosen menu 3: " << title << endl;
		        cout << "How much do you want to order? ";
		        cin >> pieces;
		        // Set pieces from cin >> pieces
		        StreetFoodStall.setPieces(pieces);
		        // Get Pieces and store it to pieces
		        pieces = StreetFoodStall.getPieces();
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setAmount(pieces, price);
		        // Store the calculated amount to amount
		        amount = StreetFoodStall.getAmount();
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printSingleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // Fishball and Squidball
		    case '4':
		    	// Set Title
		        StreetFoodStall.setTitle("Fishball and Squidball");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setFishBallPrice(fishBall);
		        StreetFoodStall.setSquidBallPrice(squidBall);
		        // Get Price and store it to price
		        fishBallPrice = StreetFoodStall.getFishBallPrice();
		        squidBallPrice = StreetFoodStall.getSquidBallPrice();
		        price = fishBallPrice + squidBallPrice;
		    	cout << "You have chosen menu 4: " << title << endl;
		        cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		        // Set pieces from cin >> fishBallPieces
		        StreetFoodStall.setFishBallPieces(fishBallPieces);
		        StreetFoodStall.setSquidBallPieces(squidBallPieces);
		        // Get Pieces and store it to pieces
		        fishBallPieces = StreetFoodStall.getFishBallPieces();
		        squidBallPieces = StreetFoodStall.getSquidBallPieces();
		        pieces = fishBallPieces + squidBallPieces;
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setFishBallAmount(fishBallPieces, fishBallPrice);
		        StreetFoodStall.setSquidBallAmount(squidBallPieces, squidBallPrice);
		        fishBallAmount = StreetFoodStall.getFishBallAmount();
		        cout << fishBallAmount << endl;
		        squidBallAmount = StreetFoodStall.getSquidBallAmount();
				cout << squidBallAmount << endl;
		        // Store the calculated amount to amount
		        amount = fishBallAmount + squidBallAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printMultipleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // Fishball and Kwekkwek
		    case '5':
		    	// Set Title
		        StreetFoodStall.setTitle("Fishball and Kwekkwek");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setFishBallPrice(fishBall);
		        StreetFoodStall.setKwekKwekPrice(kwekKwek);
		        // Get Price and store it to price
		        fishBallPrice = StreetFoodStall.getFishBallPrice();
		        kwekKwekPrice = StreetFoodStall.getKwekKwekPrice();
		        price = fishBallPrice + kwekKwekPrice;
		    	cout << "You have chosen menu 5: " << title << endl;
		        cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		        cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        // Set pieces from cin >> fishBallPieces
		        StreetFoodStall.setFishBallPieces(fishBallPieces);
		        StreetFoodStall.setKwekKwekPieces(kwekKwekPieces);
		        // Get Pieces and store it to pieces
		        fishBallPieces = StreetFoodStall.getFishBallPieces();
		        kwekKwekPieces = StreetFoodStall.getKwekKwekPieces();
		        pieces = fishBallPieces + kwekKwekPieces;
		        // Set Quantity
		        StreetFoodStall.setQuantity(pieces);
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setFishBallAmount(fishBallPieces, fishBallPrice);
		        StreetFoodStall.setKwekKwekAmount(kwekKwekPieces, kwekKwekPrice);
		        fishBallAmount = StreetFoodStall.getFishBallAmount();
		        kwekKwekAmount = StreetFoodStall.getKwekKwekAmount();
		        // Store the calculated amount to amount
		        amount = fishBallAmount + kwekKwekAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printMultipleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // Kwekkwek and Squidball
		    case '6':
		    	// Set Title
		        StreetFoodStall.setTitle("Kwekkwek and Squidball");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setKwekKwekPrice(kwekKwek);
		        StreetFoodStall.setSquidBallPrice(squidBall);
		        // Get Price and store it to price
		        kwekKwekPrice = StreetFoodStall.getKwekKwekPrice();
		    	squidBallPrice = StreetFoodStall.getSquidBallPrice();
		        price = kwekKwekPrice + squidBallPrice;
		    	cout << "You have chosen menu 6: " << title << endl;
		        cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		        // Set pieces from cin >> fishBallPieces
		        StreetFoodStall.setKwekKwekPieces(kwekKwekPieces);
		        StreetFoodStall.setSquidBallPieces(squidBallPieces);
		        // Get Pieces and store it to pieces
		        kwekKwekPieces = StreetFoodStall.getKwekKwekPieces();
		        squidBallPieces = StreetFoodStall.getSquidBallPieces();
		        pieces = kwekKwekPieces + squidBallPieces;
		        // Set Quantity
		        StreetFoodStall.setQuantity(pieces);
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setKwekKwekAmount(kwekKwekPieces, kwekKwekPrice);
		        StreetFoodStall.setSquidBallAmount(squidBallPieces, squidBallPrice);
		        kwekKwekAmount = StreetFoodStall.getKwekKwekAmount();
		        squidBallAmount = StreetFoodStall.getSquidBallAmount();
		        // Store the calculated amount to amount
		        amount = kwekKwekAmount + squidBallAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printMultipleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
		    break;
		    // All
		    case '7':
		    	// Set Title
		        StreetFoodStall.setTitle("All");
		        // Get Title and store it to title
		        title = StreetFoodStall.getTitle();
		        // Set Price
		        StreetFoodStall.setFishBallPrice(fishBall);
		        StreetFoodStall.setSquidBallPrice(squidBall);
		        StreetFoodStall.setKwekKwekPrice(kwekKwek);
		        // Get Price and store it to price
		        fishBallPrice = StreetFoodStall.getFishBallPrice();
		    	squidBallPrice = StreetFoodStall.getSquidBallPrice();
		    	kwekKwekPrice = StreetFoodStall.getKwekKwekPrice();
		        price = fishBallPrice + squidBallPrice + kwekKwekPrice;
		    	cout << "You have chosen menu 7: " << title << endl;
		    	cout << "How much fishball do you want to order? ";
		        cin >> fishBallPieces;
		        cout << "How much squidball do you want to order? ";
		        cin >> squidBallPieces;
		         cout << "How much kwekkwek do you want to order? ";
		        cin >> kwekKwekPieces;
		        // Set pieces from cin >> fishBallPieces
		        StreetFoodStall.setFishBallPieces(fishBallPieces);
		        StreetFoodStall.setSquidBallPieces(squidBallPieces);
		        StreetFoodStall.setKwekKwekPieces(kwekKwekPieces);
		        // Get Pieces and store it to pieces
		        fishBallPieces = StreetFoodStall.getFishBallPieces();
		        squidBallPieces = StreetFoodStall.getSquidBallPieces();
		        kwekKwekPieces = StreetFoodStall.getKwekKwekPieces();
		        pieces = fishBallPieces + squidBallPieces + kwekKwekPieces;
		        // Set Quantity
		        StreetFoodStall.setQuantity(pieces);
		        cout << endl;
		        // Calculate Amount
		        StreetFoodStall.setFishBallAmount(fishBallPieces, fishBallPrice);
		        StreetFoodStall.setSquidBallAmount(squidBallPieces, squidBallPrice);
		        StreetFoodStall.setKwekKwekAmount(kwekKwekPieces, kwekKwekPrice);
		        fishBallAmount = StreetFoodStall.getFishBallAmount();
		        squidBallAmount = StreetFoodStall.getSquidBallAmount();
		        kwekKwekAmount = StreetFoodStall.getKwekKwekAmount();
		        // Store the calculated amount to amount
		        amount = fishBallAmount + squidBallAmount + kwekKwekAmount;
		        cout << "Amount: " << amount << endl;
		        cout << "VAT: " << amount * vat << endl;
		        // Calculate Total Amount
		        StreetFoodStall.setTotalAmount(amount, vat);
		        // Store the calculated total amount to totalAmount
		        totalAmount = StreetFoodStall.getTotalAmount();
		        cout << "Total Amount: " << totalAmount << endl;

		        do {
		        	cout << "Enter your bill: ";
		        	cin >> bill;
		        	// Set Bill from cin >> bill
		        	StreetFoodStall.setBill(bill);
		        	// Get Bill and store it to bill
		        	bill = StreetFoodStall.getBill();

		        } while (bill < totalAmount);
		        // Set Change
		        StreetFoodStall.setChange(bill, totalAmount);
		        // Get change and store it to change
                change = StreetFoodStall.getChange();
		        cout << "Your change is: " << change << endl;
		        StreetFoodStall.printMultipleOrderReceipt();
		        // Reset Values
		        StreetFoodStall = Foods();
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
