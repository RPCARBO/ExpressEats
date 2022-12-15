/* 
Program Title: Food Ordering and Receipt Program : EXPRESS EATS 

Submitted by: Kyle Eron P. Hallares & Ralph Pablo O. Carbo

// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 

Program Description: This is the new EXPRESS EATS food ordering program developed by Mr. Hallares & Mr. Carbo from HALLARES & CARBO FOOD, INC. 
This program uses many features such as displaying the food menu to its customer, giving the ability to choose from different choices when prompted, 
totaling and displaying the final amount at checkout, while finally automatically creates and opens a receipt.txt file for the user to go over and review
their final order complete with all information needed such as items, drinks, unit price, quantity of items , and total amount required to pay, with total change and VAT tax included, a full fledged receipt for the customer after ordering.

// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
*/

#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<ctime>
#include <iomanip>
#include <time.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

void loadingScreen(); // loading screen function

int main()
{
	// Functions
	double vat;
	int again = 1;
	int orderSequence;
	int order, drinks, quantity,a , i = 0, itemPurchased = 0;
	int choice, limit = 0, pay, change = 0;
	int total = 0, orderAgain = 1, totalQuantity [100], totalOrder [100];
	string drinksQuantity [100], price [100];
	string orderName [100];
	
	loadingScreen();
	
	start:

	do
	{
		i++;
		limit++;
		again++;
		itemPurchased++;

		cout <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl; // Company/Receipt Banner
		cout <<"::::########'##::::'##'########:'########:'########:'######::'######:::'########:::'###:::'########:'######::::::" << endl;
		cout <<"::::##::::::: ##::'##::##:::: ##:##:::: ##:##::::::'##::: ##'##::: ##:::##::::::::'## ##::::: ##:::'##::: ##:::::" << endl;
		cout <<"::::##:::::::: ##'##:::##:::: ##:##:::: ##:##:::::::##:::::::##:::::::::##:::::::'##:: ##:::: ##::::##:::::::::::" << endl;
		cout <<"::::######::::: ###::::########::########::######::: ######:: ######::::######::'##:::: ##::: ##:::: ######::::::" << endl;
		cout <<"::::##:::::::: ## ##:::##::::::::##:: ##:::##:::::::::::: ##:::::: ##:::##:::::::#########::: ##::::::::: ##:::::" << endl;
		cout <<"::::##::::::: ##:: ##::##::::::::##::: ##::##::::::'##::: ##'##::: ##:::##:::::::##:::: ##::: ##:::'##::: ##:::::" << endl;
		cout <<"::::########:##:::: ##:##::::::::##:::: ##:########: ######:: ######::::########:##:::: ##::: ##:::: ######::::::" << endl;
		cout <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "=================================================================================================================" << endl;
		cout << endl;
		cout << setfill(' ') << setw(65) << "Welcome to EXPRESS EATS !" << endl;
		cout << setfill(' ') << setw(75) << right << "Please input a number below to choose your order" << endl;
		cout << endl;
		cout << "=================================================================================================================" << endl; // These are dividers to cleanly seperate each section 
		cout << endl;
    	cout << setw(12) << "[1] Burgers" << endl;
    	cout << setw(15) << "[2] Chickenjoy" << endl;
    	cout << setw(15) << "[3] Rice Meals" << endl;
    	cout << setw(14) << "[4] Spaghetti" << endl;
   	 	cout << setw(23) << "[5] Chicken Joy Bucket" << endl;
    	cout << setw(23) << "[6] Family Super Meals" << endl;
		cout << endl;
		cout << setw(16) << "Enter Choice : ";
		cin >> choice;
		
		if(choice == 1) //Burger menu interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Burgers Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(36) << "[1] Burger Value Meal         | P86"<< endl;
			cout << setw(36) << "[2] Burger Cheese Value Meal  | P96"<< endl;
			cout << setw(37) << "[3] Bacon Cheese Burger Meal  | P110"<< endl;
			cout << setw(37) << "[4] Burger Cheese Deluxe Meal | P120"<< endl;
			cout << endl;

			cout << " Enter Choice : ";
			cin >> orderSequence;
			cout << endl;
		
				if(orderSequence == 1|| orderSequence == 2 || orderSequence == 3 || orderSequence == 4) // Dynamic order choices 
				{
					cout << endl;
					cout << "=================================================================================================================" << endl;
					cout << endl;
					cout << setw(9) <<  "[1] Coke"<< endl;
					cout << setw(11) <<  "[2] Sprite"<< endl;
					cout << setw(10) <<  "[3] Royal"<< endl;
					cout << endl;
					cout << " Enter Drinks : ";
	
					cin >> drinks; 
					cout << endl;
				
					// drink choices
					switch(drinks)
					{
						case 1:
							drinksQuantity [i] = "  Coke  ";
							break;
						
						case 2:
							drinksQuantity [i] = " Sprite ";
							break;
					
						case 3:
							drinksQuantity [i] = " Royal  ";
							break;
						
						default:
							drinksQuantity [i] = " None ";
					}
				}
					
						cout << " Enter Quantity : ";
						cin  >> quantity;
						cout << endl;	
						cout << "=================================================================================================================" << endl;
				
						switch(orderSequence) // Burger menu prices
						{
						case 1:
							orderName [i] = "Burger Value Meal                                ";
							price [i] = "     86     ";
							totalQuantity [i] = quantity;
							totalOrder [i] = 86 * quantity;
							break;
				
						case 2:
							orderName [i] = "Burger Cheese Value Meal                         ";
							price [i] = "     96     ";
							totalQuantity [i] = quantity;
							totalOrder [i] = 96 * quantity;
							break;
					
						case 3:
							orderName [i] = "Bacon Cheese Burger Meal                         ";
							price [i] = "     110    ";
							totalQuantity [i] = quantity;
							totalOrder [i] = 110 * quantity;
							break;
					
						case 4:
							orderName [i] = "Burger Cheese Deluxe Meal                        ";
							price [i] = "    120     ";
							totalQuantity [i] = quantity;
							totalOrder [i] = 120 * quantity;
							break;
			}
		}
		
		
		
		if(choice == 2) // Chickenjoy menu interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Chickenjoy Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(49) << "[1] 1 pc Chickenjoy w/ Rice & Drink        | P65"<< endl;
			cout << setw(49) << "[2] 1 pc Chickenjoy w/ Double Rice & Drink | P95"<< endl;
			cout << setw(49) << "[3] 1 pc Chickenjoy w/ Spaghetti & Drink   | P95"<< endl;
			cout << setw(50) << "[4] 1 pc Chickenjoy w/ Palabok & Drink     | P110"<< endl;
			
			cout << endl;
			cout << " Enter Choice : ";
			cin >> orderSequence;
			
			
			if(orderSequence == 1 || orderSequence == 2 || orderSequence == 3 || orderSequence == 4)
			{
				cout << endl;
				cout << "=================================================================================================================" << endl;
				cout << endl;
				cout << setw(9) <<  "[1] Coke"<< endl;
				cout << setw(11) <<  "[2] Sprite"<< endl;
				cout << setw(10) <<  "[3] Royal"<< endl;
				cout << endl;
				cout << " Enter Drinks : ";

				cin >> drinks; 
				cout << endl; 
			
			
				switch(drinks)
				{
					case 1:
						drinksQuantity [i] = "  Coke  ";
						break;
					
					case 2:
						drinksQuantity [i] = " Sprite ";
						break;
				
					case 3:
						drinksQuantity [i] = " Royal  ";
						break;
					
					default:
						cout << " None ";	
				}


				cout << " Enter Quantity : ";
				cin  >> quantity;
				cout << endl;	
				cout << "=================================================================================================================" << endl;
			
			
				switch(orderSequence) // Chicken menu prices located below
				{
					case 1:
						orderName [i] = "1 pc Chickenjoy w/ Rice & Drink                  ";
						price [i] = "     95     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 95 * quantity;
						break;
			
					case 2:
						orderName [i] = "1 pc Chickenjoy w/ Double Rice & Drink           ";
						price [i] = "     99     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 99 * quantity;
						break;
				
					case 3:
						orderName [i] = "1 pc Chickenjoy w/ Spaghetti & Drink             ";
						price [i] = "    125     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 125 * quantity;
						break;
				
					case 4:
						orderName [i] = "1 pc Chickenjoy w/ Palabok & Drink               ";
						price [i] = "    125     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 125 * quantity;
						break;
				}
			}	
		}

		
		
		if(choice == 3) // Rice Meals Menu interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Rice Meals Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(57) << "[1] 1 pc Burger Steak w/ Drink                     | P65"<< endl;
			cout << setw(57) << "[2] 2 pc Burger Steak w/ Drink                     | P90"<< endl;
			cout << setw(58) << "[3] 1 pc Burger Steak with 3 pcs Shanghai w/ Drink | P109"<< endl;
			cout << setw(57) << "[4] 1 pc Burger Steak w/ Fries & Drink             | P79"<< endl;
			
			cout << endl;
			cout << "  Enter Choice : ";
			cin >> orderSequence;
			
			
			if(orderSequence == 1 || orderSequence == 2 || orderSequence == 3 || orderSequence == 4)
			{
				cout << endl;
				cout << "=================================================================================================================" << endl;
				cout << endl;
				cout << setw(9) <<  "[1] Coke"<< endl;
				cout << setw(11) <<  "[2] Sprite"<< endl;
				cout << setw(10) <<  "[3] Royal"<< endl;
				cout << endl;
				cout << "  Enter Drinks : ";

				cin >> drinks; 
				cout << endl; 
			
			
				switch(drinks)
				{
				
				
					case 1:
						drinksQuantity [i] = "  Coke  ";
						break;
					
					case 2:
						drinksQuantity [i] = " Sprite ";
						break;
				
					case 3:
						drinksQuantity [i] = " Royal  ";
						break;
					
					default:
						cout << " None ";
				}
			
			
				cout << " Enter Quantity : ";
				cin  >> quantity;
				cout << endl;	
				cout << "=================================================================================================================" << endl;
			
			
				switch(orderSequence) // prices located below
				{
					case 1:
						orderName [i] = "1 pc Burger Steak w/ Drink                       ";
						price [i] = "     65     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 65 * quantity;
						break;
					
					case 2:
						orderName [i] = "2 pc Burger Steak w/ Drink                       ";
						price [i] = "     90     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 90 * quantity;
						break;
					
					case 3:
						orderName [i] = "1 pc Burger Steak with 3 pcs Shanghai w/ Drink   ";
						price [i] = "    109     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 109 * quantity;
						break;
					
					case 4:
						orderName [i] = "1 pc Burger Steak w/ Fries & Drink               ";
						price [i] = "     79     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 79 * quantity;
				}		
			}	
		}



		if(choice == 4) //interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Spaghetti Meals Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(45) << "[1] Spaghetti w/ Drink                 | P65"<< endl;
			cout << setw(45) << "[2] Spaghetti w/ Fries & Drink         | P95"<< endl;
			cout << setw(45) << "[3] Spaghetti w/ Burger & Drink        | P95"<< endl;
			cout << setw(46) << "[4] Spaghetti w/ Cheesy Burger & Drink | P110"<< endl;
			cout << endl;
			
			cout << " Enter Choice : ";
			cin >> orderSequence;
			
			
			if(orderSequence == 1 || orderSequence == 2 || orderSequence == 3 || orderSequence == 4)
			{
				cout << endl;
				cout << "=================================================================================================================" << endl;
				cout << endl;
				cout << setw(9) <<  "[1] Coke"<< endl;
				cout << setw(11) <<  "[2] Sprite"<< endl;
				cout << setw(10) <<  "[3] Royal"<< endl;
				cout << endl;
				cout << " Enter Drinks : ";

				cin >> drinks; 
				cout << endl;
		
				switch(drinks)
				{
				
				
					case 1:
						drinksQuantity [i] = "  Coke  ";
						break;
					
					case 2:
						drinksQuantity [i] = " Sprite ";
						break;
				
					case 3:
						drinksQuantity [i] = " Royal  ";
						break;
					
					default:
						cout << " None ";
					
				}
			
			
				cout << " Enter Quantity : ";
				cin  >> quantity;
				cout << endl;	
				cout << "=================================================================================================================" << endl;	
			
			
				switch(orderSequence) // prices located below
				{
					case 1:
						orderName [i] = "Spaghetti w/ Drink                               ";
						price [i] = "     65     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 65 * quantity;
						break;
			
					case 2:
						orderName [i] = "Spaghetti w/ Fries & Drink                       ";
						price [i] = "     95     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 95 * quantity;
						break;
				
					case 3:
						orderName [i] = "Spaghetti w/ Burger & Drink                      ";
						price [i] = "     95     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 95 * quantity;
						break;
				
					case 4:
						orderName [i] = "Spaghetti w/ Cheesy Burger & Drink               ";
						price [i] = "    110     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 110 * quantity;
						break;
				}
			}
		}
		
		

		if(choice == 5)// interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Chicken Joy Bucket Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(34) << "[1] 6 pc Chickenjoy Bucket | P399"<< endl;
			cout << setw(34) << "[2] 8 pc Chickenjoy Bucket | P499"<< endl;
			
			cout << endl;
			cout << " Enter Choice : ";
			cin >> orderSequence;
			
			
			if(orderSequence == 1 || orderSequence == 2)
			{
				cout << endl;
				cout << "=================================================================================================================" << endl;
				cout << endl;
				cout << setw(9) <<  "[1] Coke"<< endl;
				cout << setw(11) <<  "[2] Sprite"<< endl;
				cout << setw(10) <<  "[3] Royal"<< endl;
				cout << endl;
				cout << "  Enter Drinks : ";

				cin >> drinks; 
				cout << endl; 
		
				switch(drinks)
				{
					case 1:
						drinksQuantity [i] = "  Coke  ";
						break;
					
					case 2:
						drinksQuantity [i] = " Sprite ";
						break;
				
					case 3:
						drinksQuantity [i] = " Royal  ";
						break;
					
					default:
						cout << " None ";
				}
				
				cout << " Enter Quantity : ";
				cin  >> quantity;
				cout << endl;	
				cout << "=================================================================================================================" << endl;	
			
			
				switch(orderSequence) //prices located below
				{
					case 1:
						orderName [i] = "6 pc Chickenjoy Bucket                           ";
						price [i] = "    399     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 399 * quantity;
						break;
			
					case 2:
						orderName [i] = "8 pc Chickenjoy Bucket                           ";
						price [i] = "    499     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 499 * quantity;
						break;
				}
			}	
		}
		
		
		if(choice == 6) // interface below
		{
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setfill(' ') << setw(55)<< "Family Super Meals Menu" << endl;
			cout << endl;
			cout << "=================================================================================================================" << endl;
			cout << endl;
			cout << setw(93) << "[1] Family Meal A1 - 6 pieces Chickenjoy Bucket, 3 rice, 3 sides, 3 sundaes, 3 drinks | P599"<< endl;
			cout << setw(93) << "[2] Family Meal A2 - 8 pieces Chickenjoy Bucket, 4 rice, 4 sides, 4 sundaes, 4 drinks | P799"<< endl;
			cout << setw(93) << "[3] Family Meal B1 - 6 pieces Chickenjoy Bucket, 3 spaghetti, 3 rice, 3 drinks        | P550"<< endl;
			cout << setw(93) << "[4] Family Meal B2 - 8 pieces Chickenjoy Bucket, 4 spaghetti, 4 rice, 4 drinks        | P799"<< endl;
			
			cout << endl;
			cout << "Enter Choice : ";
			cin >> orderSequence;
			
			
			if(orderSequence == 1 || orderSequence == 2 || orderSequence == 3 || orderSequence == 4)
			{
				cout << endl;
				cout << "=================================================================================================================" << endl;
				cout << endl;
				cout << setw(9) <<  "[1] Coke"<< endl;
				cout << setw(11) <<  "[2] Sprite"<< endl;
				cout << setw(10) <<  "[3] Royal"<< endl;
				cout << endl;
				cout << "Enter Drinks : ";

				cin >> drinks; 
				cout << endl; 		
				
				switch(drinks)
				{
					case 1:
						drinksQuantity [i] = "  Coke  ";
						break;
					
					case 2:
						drinksQuantity [i] = " Sprite ";
						break;
				
					case 3:
						drinksQuantity [i] = " Royal  ";
						break;
					
					default:
						cout << " None ";
				}
				
				
				cout << "Enter Quantity : ";
				cin  >> quantity;
				cout << endl;	
				cout << "=================================================================================================================" << endl;	
				
				
				switch(orderSequence) //prices located below
				{
					case 1:
						orderName [i] = "Family Meal A1                                   ";
						price [i] = "    599     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 599 * quantity;
						
					case 2:
						orderName [i] = "Family Meal A2                                   ";
						price [i] = "    799     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 799 * quantity;
							
					case 3:
						orderName [i] = "Family Meal B1                                   ";
						price [i] = "    550     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 550 * quantity;
						
					case 4:
						orderName [i] = "Family Meal B2                                   ";
						price [i] = "    799     ";
						totalQuantity [i] = quantity;
						totalOrder [i] = 799 * quantity;
				}
			}
		}
		
		
	cout << endl;		
	cout << "Order Again? [1] Yes [0] No? : ";	
	cin >> orderAgain;
	cout << endl;	
		
	} //do bracket
	
	while((orderAgain == 1 || orderAgain != 0)); // While loop that dictates whether to go back from the beginning to make the customer order again or continue.
	
	cout << "Generating";

	for(a = 1; a <= 2; a++)
	{
		Sleep(1000);
		cout << "...";		
	}
{
	// SHOWN IN PROGRAM
	// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
		cout << endl; //10th line	
	cout << setw(57) << "::::........::::.......:::..::::..::........::::" << endl; //Design choice of notifying order
	cout << setw(57) << "::::'########:::'#######::'##::: ##:'########:::" << endl;	// NOTE : PLEASE DO NOT TOUCH THE FILE ART OR IT MAY RUIN THE OUTPUT. THANK YOU
	cout << setw(57) << ":::::##.... ##:'##.... ##: ###:: ##: ##.....::::" << endl;	// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
	cout << setw(57) << ":::::##:::: ##: ##:::: ##: ####: ##: ##:::::::::" << endl;
	cout << setw(57) << ":::::##:::: ##: ##:::: ##: ## ## ##: ######:::::" << endl;
	cout << setw(57) << ":::::##:::: ##: ##:::: ##: ##. ####: ##...::::::" << endl;
	cout << setw(57) << ":::::##:::: ##: ##:::: ##: ##:. ###: ##:::::::::" << endl;
	cout << setw(57) << ":::::########::. #######:: ##::. ##: ########:::" << endl;
	cout << setw(57) << "::::........::::.......:::..::::..::........::::" << endl;
	cout <<":::::::::......::::........::..::::..::........::..:::::..::..:::::..:::::..:::::....::..::::..:::......::::::::::::" << endl;
	cout <<":::::::::'######:::'########:'##::: ##:'########:'########:::::'###::::'########:'####:'##::: ##::'######:::::::::::" << endl;
	cout <<"::::::::'##... ##:: ##.....:: ###:: ##: ##.....:: ##.... ##:::'## ##:::... ##..::. ##:: ###:: ##:'##... ##::::::::::" << endl;
	cout <<":::::::::##:::..::: ##::::::: ####: ##: ##::::::: ##:::: ##::'##:. ##::::: ##::::: ##:: ####: ##: ##:::..:::::::::::" << endl;
	cout <<":::::::::##::'####: ######::: ## ## ##: ######::: ########::'##:::. ##:::: ##::::: ##:: ## ## ##: ##::'####:::::::::" << endl;
	cout <<":::::::::##::: ##:: ##...:::: ##. ####: ##...:::: ##.. ##::: #########:::: ##::::: ##:: ##. ####: ##::: ##::::::::::" << endl;
	cout <<":::::::::##::: ##:: ##::::::: ##:. ###: ##::::::: ##::. ##:: ##.... ##:::: ##::::: ##:: ##:. ###: ##::: ##::::::::::" << endl;
	cout <<"::::::::.:######::: ########: ##::. ##: ########: ##:::. ##: ##:::: ##:::: ##::::'####: ##::. ##:. ######:::::::::::" << endl;
	cout <<":::::::::......::::........::..::::..::........::..:::::..::..:::::..:::::..:::::....::..::::..:::......::::::::::::" << endl;									
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
		cout << endl; //10th line
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
		cout << endl; //10th line
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
	
		// This is a hidden timer to count down to the creation of the receipt
		int time_interval = 5000;
	   	clock_t start_time = clock();
	 	while (clock() < start_time + time_interval);
	}
		//Receipt Code below
		// Create an ofstream object to write to a file
		ofstream File;	
		File.open("receipt.txt");
		//Opens the receipt file for the customer to see and review
	 	std::ifstream inputFile("receipt.txt");
	 	
	 	// Company Banner specifically designed to be seen on the TERMINAL
	 	cout << "=================================================================================================================" << endl;	
		cout << endl;
		cout <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout <<"::::########'##::::'##'########:'########:'########:'######::'######:::'########:::'###:::'########:'######::::::" << endl;
		cout <<"::::##::::::: ##::'##::##:::: ##:##:::: ##:##::::::'##::: ##'##::: ##:::##::::::::'## ##::::: ##:::'##::: ##:::::" << endl;
		cout <<"::::##:::::::: ##'##:::##:::: ##:##:::: ##:##:::::::##:::::::##:::::::::##:::::::'##:: ##:::: ##::::##:::::::::::" << endl;
		cout <<"::::######::::: ###::::########::########::######::: ######:: ######::::######::'##:::: ##::: ##:::: ######::::::" << endl;
		cout <<"::::##:::::::: ## ##:::##::::::::##:: ##:::##:::::::::::: ##:::::: ##:::##:::::::#########::: ##::::::::: ##:::::" << endl;
		cout <<"::::##::::::: ##:: ##::##::::::::##::: ##::##::::::'##::: ##'##::: ##:::##:::::::##:::: ##::: ##:::'##::: ##:::::" << endl;
		cout <<"::::########:##:::: ##:##::::::::##:::: ##:########: ######:: ######::::########:##:::: ##::: ##:::: ######::::::" << endl;
		cout <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		
		cout <<"\n";
		cout << "                                                 Express Eats" << endl;
		cout << "                                         HALLARES & CARBO FOOD, INC." << endl;
		cout << "                                         TABUC SUBA JARO ILOILO CITY" << endl;
		cout << "                                       VAT Reg TIN: 484-880-607-011VAT\n";
		cout << "                                           MIN#18052315514279650\n\n";
		
		cout << "=================================================================================================================\n";
		cout << "\n";                                                                                                                                               	
		cout << " Cashier: I.D #05555551 - KURUMI TOKISAKI\n";
		cout << "\n";
		cout << "=================================================================================================================\n";
		cout << "\n";
		cout << " Date : "<<__DATE__ << endl;
		cout << " Time : "<<__TIME__ << endl;
		cout << "\n";
		cout << " ORDER # 01065280 \n";    
		        // NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY                                                                     
				// NOTE : PLEASE DO NOT TOUCH THE FILE ART OR IT MAY RUIN THE RECEIPT OUTPUT. THANK YOU
				// Company Banner specifically designed to be seen on the RECEIPT
				File <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				File <<"::::::::########':::##::::'::::::::::##'::::########:'.....########:':::::########:'::::::######::'::::::::::######:::'::::::::::########:::'::::::::::###:::'::::::############::::::######:::::::::" << endl;
				File <<"::::::::##.....:........:::##::'::::::##:::::::##..........##::::##........::##::::##.....::::::::::'##... ::::::##'::::##... :::::::::##:::::::::##.....:::':::::::::::::##::::##::...::::::::::##..:':::::::##::::::::::##:::::::" << endl;
				File <<"::::::::##:::::::.::::::::::::##.'.##::::::::::##:::: :::::##::::##::::::::::##::::##::::::::::::::::##:::..:::::::::::::##:::..::::::::::::::::::::##:::::::':::::::::::##:::::::::##::::::::::::##:::::::::::##:::..::::::::::::::::" << endl;
				File <<"::::::::######::::.::::::::::###::::::::::::########:::::::########:::::::######::.:::::::::######:. :::::::::######::::::::::::::######::':::::::##:::.::::::::::##:::::::::##:::.::::::::::######::::::::::::" << endl;
				File <<"::::::::##...:::::::::::::::::##::##::::::::::##.....::::::::::::##.. ::##::::::::::##...::::..... ::::::::::::::::##:....::::::::::::::##:::::::::::##...:::::::::::::#############::::::::##::::.....::::::::::::::::##::::::::" << endl;
				File <<"::::::::##::::::::::::::::::##:.:::::##:::::::##::::::::::::::::##::. ::::##:::::::##::::::'::::::::::##:::::::::##'::::::##:::::::::##:::::::::::##::::::::::::::::##....:::::::::::##::: ::::##:::::::::::'##::::::::::##:::::::::" << endl;
				File <<"::::::::########::::##:::. :::::::::##::::##:::::::::::::::##:::.:::::::##::::########.::::::::######:.::::::::::######::::::::::::::########:::::##::::::::::::::::##:::::::##:::.:::::::::::######:::::::::::::" << endl;
				File <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "::::::::                                                                                                                                       EXPRESS EATS                                                                                                                                                        ::::::::\n";
				File << "::::::::                                                                                                                         HALLARES & CARBO FOOD, INC.                                                                                                                                  ::::::::\n";
				File << "::::::::                                                                                                                          TABUC SUBA JARO ILOILO CITY                                                                                                                                    ::::::::\n";
				File << "::::::::                                                                                                                         VAT Reg TIN: 484-880-607-011VAT                                                                                                                               ::::::::\n";
				File << "::::::::                                                                                                                               MIN#18052315514279650                                                                                                                                          ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "================================================================================================================================================\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "::::::::    Cashier: I.D #05555551 - KURUMI TOKISAKI                                                                                                                                                                                                                                 ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "================================================================================================================================================\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "::::::::    Date : " <<__DATE__ <<"                                                                                                                                                                                                                                                                                   ::::::::"<<endl;
				File << "::::::::    Time : " <<__TIME__ <<"                                                                                                                                                                                                                                                                                         ::::::::"<<endl;
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "::::::::    ORDER # 01065280                                                                                                                                                                                                                                                                                  ::::::::" << endl;
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "================================================================================================================================================\n";
	
	cout << "\nYour order: " << "\t\t\t\t\t\t\t\t\t Transaction # " << again << "\n\n";
	cout << "--------------------------------------------------------------------------------------------------------------------------\n";
	cout << "                       ITEM                       |     DRINKS     |     UNIT PRICE     |     QUANTITY     |     AMOUNT   \n";
	cout << "--------------------------------------------------------------------------------------------------------------------------\n";
	
	for(i = 1; i <= limit; i++)
	{
		cout << orderName [i] << " |   " << drinksQuantity [i] << "     |     "<<price [i] << "   |         "<< totalQuantity [i] <<    "        |     P "<< totalOrder [i] <<"            " << endl;	
	}
	
	cout << "--------------------------------------------------------------------------------------------------------------------------\n";
	
	for(i = 1; i <= limit; i++)
	{
		total = total + totalOrder [i];
	}
	
	do
	{
		cout << endl;
		cout << "\n                                                                                    Total: P " << total << "\n";
		cout << "Enter your money    : ";
		cin >> pay;
		cout << endl;
//If pay is not enough		
		if (pay < total)
		{
			cout << "================================================================================================================================================\n";
			cout << endl;
			cout << "  DECLINED DECLINED DECLINED DECLINED    NOT ENOUGH MONEY     DECLINED DECLINED DECLINED DECLINED  \n";
			cout << endl;
			cout << "================================================================================================================================================\n";
		}
//Receipt to be shown on .txt file		
		else
		{
			// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
			// NOTE : PLEASE DO NOT TOUCH THE FILE ART OR IT MAY RUIN THE RECEIPT OUTPUT. THANK YOU
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "::::::::    Your order: " << "                                                                                                                                                                                                                Transaction # " << again << "                                                  ::::::::" <<endl;
				File << "::::::::                                                                                                                                                                                                                                                                                                                           ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << setw(6) << "::::::::    ITEM                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				
				for (i = 1; i <= limit; i++)
				{
					File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				    File << std::right << std::setw(70) << orderName[i] << endl;
					File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";

				}
			
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << setw(7) << "::::::::    DRINKS                                                                                                                                                                                                                                                                                                          ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";				
				for (i = 1; i <= limit; i++)
				{
					File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				    File << std::right << std::setw(50) << drinksQuantity[i] << endl;
					File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";

				}
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << setw(12) << "::::::::    UNIT PRICE                                                                                                                                                                                                                                                                                                  ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				for (i = 1; i <= limit; i++)
				{
					File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
					File << std::right << std::setw(50) << price[i] << endl;
					File << "::::::::                                                                                                                                                                                                                                                                                                                            ::::::::\n";

				}
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << setw(10) << "::::::::    QUANTITY                                                                                                                                                                                                                                                                                                     ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				
				for (i = 1; i <= limit; i++)
				{
				    File << "::::::::                                                                                                                                                                                                                                                                                                                            ::::::::\n";
					File << std::right << std::setw(50) << totalQuantity[i] << endl;
					File << "::::::::                                                                                                                                                                                                                                                                                                                            ::::::::\n";
				}
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << setw(8) << "::::::::    AMOUNT                                                                                                                                                                                                                                                                                                       ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				
				for (i = 1; i <= limit; i++)
				{
				    File << "::::::::                                                                                                                                                                                                                                                                                                                            ::::::::\n";
					File << std::right << std::setw(50) << "P " << totalOrder[i] << endl;
					File << "::::::::                                                                                                                                                                                                                                                                                                                            ::::::::\n";
					}	
				
				
				File << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				change = pay - total;
				File << "::::::::                                                                                                                                                                                                                                                                                                                             ::::::::\n";
				File << "::::::::    Changed Due             : "    << change       <<"                                                                                                                                                                                                                                                                          ::::::::\n";
				File << "::::::::    Items Purchased      : "    << itemPurchased << "                                                                                                                                                                                                                                                                              ::::::::"<<endl;
									vat = total * 0.12;
				File << "::::::::    12% VAT Included    : " << vat << "                                                                                                                                                                                                                                                                      ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::\n";
				File << "::::::::                      Customer Name : _______________________________________________________________________________                                                                           ::::::::\n";
				File << "::::::::                                      Address : _______________________________________________________________________________                                                                            ::::::::\n";
				File << "::::::::                                               TIN : _______________________________________________________________________________                                                                             ::::::::\n";
				File << "::::::::                                    Bus Style : _______________________________________________________________________________                                                                            ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                              ::::::::" << endl;
				File << "==================================================================================================================================================\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                                ::::::::" << endl;
				File << "::::::::                                                                                                                    Tell us about your experience                                                                                                                                               ::::::::\n";
				File << "::::::::                                                                                       Send us feedback at www.facebook.com/Emrakul.Promising.End                                                                                                   ::::::::\n";
				File << "::::::::                                                                                                  Visit us also at www.facebook.com/pakyopakyopakyo                                                                                                               ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                                ::::::::" <<endl;
				File << "::::::::                                                                                                          THANK YOU,  AND PLEASE COME AGAIN                                                                                                                                     ::::::::\n";
				File << "::::::::                                                                                                                 This serves as OFFICIAL RECEIPT                                                                                                                                             ::::::::\n";
				File << "::::::::                                                                                                                       K&R Information Systems                                                                                                                                                     ::::::::\n";
				File << "::::::::                                                                                                                                     Jaro,  Iloilo                                                                                                                                                                    ::::::::\n";
				File << "::::::::                                                                                                                                                                                                                                                                                                                                ::::::::" << endl;
				File <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;

		// NOTE THAT THE .TXT FILE FONT AND SIZE SHOULD BE CALIBRI, REGULAR, 11 FOR IT TO PROPERLY DISPLAY 
		}
		
		
		
		
		
		
	}
	//This asks if they want to order again
	while(pay < total);
	
	cout << "\n\nNew Transaction? [1] Yes [0] No? : ";
	cin  >> again;
	
	if (again == 1)
	{
		// Goes back to the beginning of the code to repeat if chosen 
		goto start;
	}
		
	if (again == 0)
	{
		cout << "Thank you Come again"; 
		//  This closes the file to save it
		File.close();
			//	This will open the receipt.txt file to show the user their full bill
			system("start receipt.txt");

	}
	
	
} //int bracket

// loading screen function again, edit if needed

void loadingScreen()
{
    system("cls"); // clear the console screen
    printf("\e[?25l"); // hide the cursor

	// set the input and output code pages to 437 (used for displaying certain special characters)
    SetConsoleCP(437); 
    SetConsoleOutputCP(437);  
  
    int loadingBar1 = 177, loadingBar2 = 219; // define variables for the loading bar characters
    
    // output some text to the console
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\tHALLARES & CARBO FOOD, INC.";
	cout << "\n\n\t\t\t\t\t\tExpress Eats";
    cout << "\n\n\n\t\t\t\t\t\tLoading...";
    cout << "\n\n\n\t\t\t\t\t";		
    
    for(int i = 0; i < 25; i++) // output 25 loadingBar1 characters to the console
    cout << (char)loadingBar1; // this is the loading bar 1

	// move the cursor back to the beginning of the line and output 25 loadingBar2 characters
    cout <<"\r";
    cout <<"\t\t\t\t\t";
    for(int i = 0; i < 25; i++) 
    {
    	// output a loadingBar2 character 
        cout << (char)loadingBar2; // this is the loading bar 2
        Sleep(125); //pause for 125 milliseconds
    }

    cout<<"\n\t\t\t\t\t";
    system("Pause");
	system("cls");
}



