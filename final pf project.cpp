#include <iostream>
#include <iomanip>

using namespace std;
//MENU PORTION
const int CUISINES = 6;
const int DISHES = 10;
const string cuisines[CUISINES] = { "ITALIAN", "INDIAN", "CHINESE", "MEXICAN", "JAPANESE", "AMERICAN" };
const string dishes[CUISINES][DISHES] = {
	// ITALIAN CUISINE:
	{
		"*Spaghetti Bolognese",
		"*Margherita Pizza",
		"*Lasagna", "Ravioli",
		"*Carbonara",
		"*Fettuccine Alfredo",
		"*Tiramisu",
		"*Panna Cotta",
		"*Gelato",
		"*Cannoli"
	},
	// INDIAN CUISINE:
	{
		"*Butter Chicken",
		"*Chicken Biryani",
		"*Paneer Tikka Masala",
		"*Dal Makhani",
		"*Samosa",
		"*Gulab Jamun",
		"*Naan",
		"*Aloo Gobi",
		"*Chicken Tikka",
		"*Chole Bhature"
	},
	// CHINESE CUISINE:
	{
		"*Kung Pao Chicken",
		"*Beef and Broccoli",
		"*Egg Fried Rice",
		"*Sweet and Sour Pork",
		"*Dumplings",
		"*Spring Rolls",
		"*Mongolian Beef",
		"*Hot and Sour Soup",
		"*General Tso's Chicken",
		"*Mapo Tofu"
	},
	// MAXICAN CUISINE:
	{
		"*Tacos",
		"*Burritos",
		"*Enchiladas",
		"*Guacamole",
		"*Chiles Rellenos",
		"*Quesadillas",
		"*Tamales",
		"*Sopes",
		"*Mexican Rice",
		"*Churros"
	},
	// JAPANESE CUISINE:
	{
		"*Sushi",
		"*Tempura",
		"*Teriyaki Chicken",
		"*Ramen",
		"*Udon",
		"*Miso Soup",
		"*Gyoza",
		"*Sashimi",
		"*Tonkatsu",
		"*Matcha Ice Cream"
	},
	// AMERICAN CUISINE:
	{
		"*Hamburger",
		"*Cheeseburger",
		"*Hot Dog",
		"*French Fries",
		"*Chicken Wings",
		"*Onion Rings",
		"*Caesar Salad",
		"*BBQ Ribs",
		"*Steak",
		"*Apple Pie"
	}
};
const double prices[CUISINES][DISHES] = {
	// ITALIAN CUISINE:
	{
		12.99,
		9.99,
		11.49,
		10.99,
		13.49,
		11.99,
		6.99,
		5.99,
		4.99,
		3.49
	},
	// INDIAN CUISINE:
	{
		13.99,
		12.49,
		11.99,
		9.99,
		5.99,
		4.49,
		2.99,
		10.49,
		11.99,
		7.99
	},
	// CHINESE CUISINE:
	{
		12.49,
		13.99,
		7.99,
		10.99,
		8.49,
		9.49,
		11.99,
		6.99,
		11.49,
		9.99
	},
	// MAXICAN CUISINE:
	{
		10.99,
		9.99,
		11.49,
		6.99,
		8.49,
		7.49,
		5.99,
		9.99,
		4.99,
		3.49
	},
	// MAXICAN CUISINE:
	{
		14.49,
		11.99,
		10.99,
		9.99,
		8.49,
		3.99,
		7.49,
		12.99,
		12.49,
		6.99
	},
	// AMERICAN CUISINE:
	{
		8.99,
		9.49,
		5.99,
		3.99,
		10.49,
		4.49,
		6.49,
		14.49,
		16.99,
		5.49
	}
};
void display_cuisines() {
	cout << "CUISINES AVAILABLE:\n";
	for (int i = 0; i < CUISINES; ++i) {
		cout << i + 1 << ". " << cuisines[i] << endl;
	}
}
void display_dishes(int cuisineIndex) {
	cout << "DISHES AVAILABLE IN " << cuisines[cuisineIndex] << " cuisine:\n";
	for (int i = 0; i < DISHES; ++i) {
		cout << i + 1 << ". " << dishes[cuisineIndex][i] << " __$" << prices[cuisineIndex][i] << endl;
	}
}
double calculate_bill(int selections[][2], int num_of_selections) {
	double total_bill = 0.0;
	for (int i = 0; i < num_of_selections; ++i) {
		int cuisineIndex = selections[i][0];
		int dishIndex = selections[i][1];
		total_bill += prices[cuisineIndex][dishIndex];
	}
	return total_bill;
}
//MENU PORTION ENDED
//RESORT PORTION
int touristf() {
	int tchoice;
	do {
		cout << "Welcome Tourist" << endl;
		cout << "which type of plan you want to select " << endl;
		cout << "1. Full day" << endl;
		cout << "2. Half day" << endl;
		cout << "3. Some Hours" << endl;
		cin >> tchoice;
		if (tchoice == 1) {
			cout << setw(10) << " The trip will inlcude" << setw(60) << "The trip will cause total of charges Rs 8000" << endl;
			cout << setw(10) << "+ A guide  " << setw(65) << "for one day only inlcude of tax" << endl;
			cout << setw(10) << "+ Food (with extra charges) " << endl;
			cout << setw(10) << "+ Some Drinks " << endl;
		}
		else if (tchoice == 2) {
			cout << setw(10) << " The trip will inlcude" << setw(60) << "The trip will cause total of charges Rs 5000 " << endl;
			cout << setw(10) << "+ A guide  " << setw(65) << "for half day only inlcude of tax" << endl;
			cout << setw(10) << "+ Food (with extra charges) " << endl;
			cout << setw(10) << "+ Some drinks " << endl;
		}
		else if (tchoice == 3) {
			cout << setw(10) << " The trip will inlcude" << setw(60) << "The trip will cause total of charges Rs 1000 per hours" << endl;
			cout << setw(10) << "+ A guide  " << endl;
			cout << setw(10) << "+ Food (with extra charges) " << endl;
		}
	} while (tchoice > 3 || tchoice < 0);
	return 0;
}
int sportsf() {
	int schoice;
	do {

		cout << "Welcome Sir" << endl;
		cout << "Which Sport u want to play " << endl;
		cout << "1. Indoor Sports " << endl;
		cout << "2. Outdoor Sports" << endl;
		cin >> schoice;
		if (schoice == 1) {
			cout << setw(10) << "The indoor sports will include" << setw(60) << "The charges will be Rs 2000" << endl;
			cout << setw(10) << ".Swimming " << endl;
			cout << setw(10) << ".Table tennis  " << endl;
			cout << setw(10) << "etc " << endl;
		}
		if (schoice == 2) {
			cout << setw(5) << "The outdoor sports will include" << setw(50) << "The charges will be Rs 1000" << endl;
			cout << setw(5) << "Hockey" << endl;
			cout << setw(5) << "Horse riding" << endl;
			cout << setw(5) << "Runnning " << endl;
			cout << setw(5) << "etc" << endl;
		}

	} while (schoice > 2 || schoice < 0);
	return 0;
}


int beachf() {
	cout << setw(10) << " Welcome to beach side" << setw(50) << "Enjoy the Beach" << endl;
	cout << setw(10) << "Our beach have " << endl;
	cout << setw(10) << ". Family environment" << endl;
	cout << setw(10) << ". Clean water " << endl;
	cout << setw(10) << ". Bornfire" << endl;
	cout << setw(10) << ". Neat Sand" << endl;
	cout << setw(10) << ". and much more" << endl;
	return 0;
}
int spaf() {
	int gchoice;
	do {

		cout << setw(10) << "Welcome to Paradise spa and massage " << endl;
		cout << setw(10) << "Which type of spa and massage option you wanna choice" << endl;
		cout << setw(10) << "1. Normal Plan" << endl;
		cout << setw(10) << "2. Gold Plan" << endl;
		cout << setw(10) << "3. Platinum Plan" << endl;
		cin >> gchoice;
		if (gchoice == 1) {
			cout << setw(10) << "The Normal plan will have  " << setw(50) << " The spa charges shall be Rs 1500 " << endl;
			cout << setw(10) << ".Ordinary massage " << endl;
			cout << setw(10) << ".Little time in Spa" << endl;
		}
		if (gchoice == 2) {
			cout << setw(10) << "The Gold plan will have  " << setw(50) << " The spa charges shall be Rs 3000 " << endl;
			cout << setw(10) << ".Good massage  " << endl;
			cout << setw(10) << ".Average Time in Spa  " << endl;
			cout << setw(10) << ".Hair Cutting  " << endl;
			cout << setw(10) << ".Hair Washing  " << endl;
			cout << setw(10) << ".Nail polishing  " << endl;
			cout << setw(10) << ".Complimentry drinks " << endl;

		}
		if (gchoice == 3) {
			cout << setw(10) << "The Platinum plan will have  " << setw(50) << "The spa charges shall be Rs 6000 " << endl;
			cout << setw(10) << ".Excellent massage  " << endl;
			cout << setw(10) << ".Unlimited Time in Spa  " << endl;
			cout << setw(10) << ".Hair Cutting (of Your choice) " << endl;
			cout << setw(10) << ".Hair Colouring   " << endl;
			cout << setw(10) << ".Hair Straightning  " << endl;
			cout << setw(10) << ".Plucking  " << endl;
			cout << setw(10) << ".Head Massage " << endl;
			cout << setw(10) << ".Feet Wash  " << endl;
			cout << setw(10) << ".Nail Cutting & straightning  " << endl;
			cout << setw(10) << "and much more u like  " << endl;
			cout << setw(10) << ".. Unlimited food Acess for The Platinum member " << endl;
		}
	} while (gchoice > 3 || gchoice < 0);
	return 0;
}
int oceanf() {
	int ochoice;
	do {

		cout << "Welcome to Ocean Safari" << endl;
		cout << "Wanna go to ocean safari " << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> ochoice;
		if (ochoice == 1) {
			cout << " Have a Good Safari Sir" << endl;
		}
		if (ochoice == 2) {
			cout << " No problem Sir " << endl;
			cout << " Have a Good Day sir" << endl;
		}
	} while (ochoice > 2 || ochoice < 0);
	return 0;
}
//RESORT PORTION ENDED

int main()
{
	int yourchoice;
	do {


		for (int i = 0; i < 80; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << setw(55) << "Welcome to the hotel and resort!" << endl;
		cout << setw(60) << "Your satisfaction is our first priority." << endl;
		cout << endl;
		for (int i = 0; i < 80; i++)
		{
			cout << "*";
		}
		cout << endl;

		int roomcatagory;
		do {

			cout << "Please! Select one option of your choice." << endl;
			cout << "1. " << "Dining" << endl << "2. Rooms" << endl << "3. Gymnasium" << endl << "4. Pool" << endl << "5. Resort" << endl << "6. About us" << endl << "7. Contact us:" << endl << "8. Exit";
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}

			cin >> yourchoice;
		} while (yourchoice < 1 || yourchoice>8);

		if (yourchoice == 1)
		{
			cout << setw(59) << "Welcome to the dining of the hotel!" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "*WELCOME TO THE HOTEL MENU!*\n";
			cout << "******\n";

			int selections[CUISINES * DISHES][2];
			int num_of_selections = 0;

			while (true) {
				display_cuisines();

				int selected_cuisine, selected_dish;
				do {
					cout << "SELECT A CUISINE (1-" << CUISINES << "): ";
					cin >> selected_cuisine;
				} while (selected_cuisine<1 || selected_cuisine>CUISINES);


				while (selected_cuisine >= 1 && selected_cuisine <= CUISINES) {

					selected_cuisine--;
					display_dishes(selected_cuisine);
					do {
						cout << "Select a dish (1-" << DISHES << "): ";
						cin >> selected_dish;

					} while (selected_dish < 1 || selected_dish > DISHES);



					if (selected_dish >= 1 && selected_dish <= DISHES) {
						selected_dish--;

						selections[num_of_selections][0] = selected_cuisine;
						selections[num_of_selections][1] = selected_dish;
						num_of_selections++;

						cout << "You've selected " << dishes[selected_cuisine][selected_dish] << " - $" << prices[selected_cuisine][selected_dish] << endl;
						break;
					}
					else {
						cout << "No Dish Found!!! Exiting System....\n";
						break;
					}
				}


				char choice;
				cout << "Do you want to select more dishes? press y for yes else press any letter for no";
				cin >> choice;

				if (choice != 'y' && choice != 'Y') {
					break;
				}
			}

			double total_bill = calculate_bill(selections, num_of_selections);

			cout << "******\n";
			cout << "Total Bill: $" << total_bill << endl;

		}
		if (yourchoice == 2)
		{
			cout << setw(45) << "ROOMS OVERVIEW" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			do {
				cout << "ROOMS CATAGORIES:\n1.STANDARD\n2.CLASSIC\n3.PREMIUM" << endl;
				cout << "CHOOSE CATAGORY= " << endl;
				cin >> roomcatagory;
			} while (roomcatagory < 1 || roomcatagory>3);

			if (roomcatagory == 1) {
				cout << setw(10) << "FEATURES" << setw(50) << "PRICING DETAILS";
				cout << endl;
				cout << setw(10) << "\n+Comfortable Bedding" << setw(40) << "3000 EACH PERSON" << endl;
				cout << setw(10) << "+Basic Amenities" << setw(45) << "FOR ONE DAY & ONE NIGHT" << endl;
				cout << setw(10) << "+Standard Furnishings" << endl;
				cout << setw(10) << "+Standard Lighting" << endl;
				cout << setw(10) << "+Essential Electronics" << endl;
				cout << setw(10) << "+Adequate Storage" << endl;
				cout << setw(10) << "+breakfast included" << endl;

			}
			if (roomcatagory == 2) {
				cout << setw(10) << "FEATURES" << setw(50) << "PRICING DETAILS";
				cout << endl;
				cout << setw(10) << "\n+Enhanced Space  " << setw(45) << "5000 EACH PERSON" << endl;
				cout << setw(10) << "+Upgraded Bedding with 2 beds" << setw(40) << "FOR ONE DAY & ONE NIGHT" << endl;
				cout << setw(10) << "+Improved Amenities" << endl;
				cout << setw(10) << "+In-Room Entertainment" << endl;
				cout << setw(10) << "+Workstation" << endl;
				cout << setw(10) << "+Additional Storage" << endl;
				cout << setw(10) << "+breakfast & lunch included" << endl;
			}
			if (roomcatagory == 3) {
				cout << setw(10) << "FEATURES" << setw(50) << "PRICING DETAILS";
				cout << endl;
				cout << setw(10) << "\n+Spacious Layout  " << setw(42) << "8000 EACH PERSON" << endl;
				cout << setw(10) << "+Luxury Bedding" << setw(50) << "FOR ONE DAY & ONE NIGHT" << endl;
				cout << setw(10) << "+Upgraded Amenities" << endl;
				cout << setw(10) << "+Enhanced Electronics" << endl;
				cout << setw(10) << "+Upscale Furnishings" << endl;
				cout << setw(10) << "+Better Views" << endl;
				cout << setw(10) << "+Enhanced Services" << endl;
				cout << setw(10) << "+breakfast,lunch and dinner included" << endl;
			}

		}
		if (yourchoice == 3)
		{
			cout << setw(45) << "GYMNASIUM OVERVIEW" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			int gymchoice;
			cout << "GYM CATAGORIES;" << endl;
			cout << "1.BASIC\n2.CLASSIC\n3.PREMIUM<<" << endl;
			cout << endl;
			do {
				cout << "ENTER YOUR CHOICE= ";
				cin >> gymchoice;
			} while (gymchoice < 1 || gymchoice>3);

			if (gymchoice == 2) {
				cout << "FEATURES" << setw(55) << "SHIFTS AVAILABLE" << setw(30) << "PRICE" << endl;
				cout << endl;
				cout << ">>Expanded  Cardiovascular exercise equipment" << setw(30) << ">>MORNING & NIGHT" << setw(40) << ">>RS.3000 PER MONTH" << endl;
				cout << ">>Strength training equipment" << endl;
				cout << ">>Group exercise classes" << endl;
				cout << ">>Locker rooms and showers" << endl;
				cout << ">>Cardio theater" << endl;
				cout << ">>Personal training services" << endl;
				cout << ">>Better locker room amenities" << endl;


			}
			if (gymchoice == 1) {
				cout << "FEATURES" << setw(55) << "SHIFTS AVAILABLE" << setw(30) << "PRICE" << endl;
				cout << endl;
				cout << ">>cardio and strength equipment" << setw(24) << ">>MORNING" << setw(40) << ">>RS.1000 PER MONTH" << endl;
				cout << ">>Personal training services" << endl;
				cout << ">>Enhanced ambiance" << endl;
				cout << ">>More amenities" << endl;
				cout << ">>Cardio theater" << endl;
				cout << ">>Limited personal training" << endl;
				cout << ">>Limited amenities" << endl;


			}
			if (gymchoice == 3) {
				cout << "FEATURES" << setw(55) << "SHIFTS AVAILABLE" << setw(30) << "PRICE" << endl;
				cout << endl;
				cout << ">>State-of-the-art equipment" << setw(35) << ">>MORNING & NIGHT" << setw(40) << ">>RS.5000 PER MONTH" << endl;
				cout << ">>Personal training and additional services" << endl;
				cout << ">>Luxurious locker rooms and spa-like amenities" << endl;
				cout << ">>Exclusive member perkS" << endl;
				cout << ">>Gourmet cafe or restaurant" << endl;
				cout << ">>Unique design and architecture" << endl;
				cout << ">>Diet Plans" << endl;


			}



		}
		if (yourchoice == 4)
		{
			cout << setw(45) << "POOL SITE OVERVIEW" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			int choiceofpool;
			do {

				cout << "SWIMMING POOL MEMBERSHIP DETAILS" << endl;
				cout << "1.WEEKLY MEMBERSHIP" << endl;
				cout << "2.MONTHLY MEMBERSHIP" << endl;
				cout << "3.YEARLY MEMBERSHIP" << endl;
				cout << endl;
				cout << "ENTER YOUR CHOICE TO KNOW DETAILS" << endl;
				cin >> choiceofpool;
				if (choiceofpool == 1) {
					cout << setw(10) << "CATAGORY" << setw(35) << "PRICE" << endl;
					cout << endl;
					cout << setw(10) << "WEEKLY MEMBERSHIP" << setw(35) << "RS.1000 FOR 1 PERSON";

				}
				if (choiceofpool == 2) {
					cout << setw(10) << "CATAGORY" << setw(35) << "PRICE" << endl;
					cout << endl;
					cout << setw(10) << "MONTHLY MEMBERSHIP" << setw(35) << "RS.4000 FOR 1 PERSON";

				}
				if (choiceofpool == 3) {
					cout << setw(10) << "CATAGORY" << setw(35) << "PRICE" << endl;
					cout << endl;
					cout << setw(10) << "YEARLY MEMBERSHIP" << setw(35) << "RS.48,000 FOR 1 PERSON";

				}
			} while (choiceofpool > 3 || choiceofpool < 0);

		}
		if (yourchoice == 5)
		{
			cout << setw(45) << "Welcome to the Resort!" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			int choice, tchoice, schoice, gchoice, ochoice;
			cout << setw(12) << " 1. Toursists portion (press 1) " << endl;
			cout << setw(12) << " 2. Sports option (press 2)" << endl;
			cout << setw(12) << " 3. Beach portion (press 3) " << endl;
			cout << setw(12) << " 4. Relaxment(Spa and massage) option" << endl;
			cout << setw(12) << " 5. Ocean Safari" << endl;
			do {
				cout << "Enter Your Choice ";
				cin >> choice;
			} while (choice < 1 || choice>5);



			if (choice == 1) {
				cout << touristf() << endl;
			}
			if (choice == 2) {
				cout << sportsf() << endl;
			}
			if (choice == 3) {
				cout << beachf() << endl;
			}
			if (choice == 4) {
				cout << spaf() << endl;
			}
			if (choice == 5) {
				cout << oceanf() << endl;
			}
			cout << " THANK U FOR VISITING PARADISE RESORT " << endl;
			cout << " HAVE A NICE TIME" << endl;
			cout << " COME AGAIN" << endl;

		}

		if (yourchoice == 6)
		{
			cout << setw(45) << "ABOUT US:" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "Surround yourself with serenity in the heart of the bustling city as we welcome you to Hotel of Lahore." << endl;
			cout << "Experience the comforts of home by staying in our modern rooms and suites." << endl;
			cout << "Enjoy delicious food at our signature restaurants serving both international andlocal cuisines." << endl;
			cout << "Relax in the fitness centre, spa or swimming pool. With our round-the-clock services, we ensure making your stay pleasant and comfortable." << endl;
		}
		if (yourchoice == 7)
		{
			cout << setw(45) << "CONTACT US:" << endl;
			cout << endl;
			for (int i = 0; i < 80; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << setw(45) << "RESERVATIONS" << endl;
			cout << endl;
			cout << "T: +92 (42) 111 505 505, 3636 0210 / F: +92 (42) 3636 2760, 3636 4362" << endl;
			cout << "E: hl@lhotels.com / W: lhotels.com / FB: www.facebook.com/hotel of Lahore/" << endl;
			cout << "IG: www.instagram.com/hotel_of_lahore" << endl;
		}
	} while (yourchoice != 8);
	cout << "GoodBye Sir/Maam " << "Take care";

	return 0;
}