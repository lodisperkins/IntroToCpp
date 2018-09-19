#include <iostream>
#include <string>
struct item
{
	std::string name;
	int cost;
};
struct stock
{
	item thing;
	int quantity;
};
struct shop
{
	
	void sell(stock&stock)
	{
		stock.quantity--;
		gold = gold + stock.thing.cost;
	}
	int gold;
	stock items[3];
};
int main()
{
	item armor = { "Grok Armor", 85 };
	item helper = { "TC-x3", 350 };
	item exHelper = { "O.N.E", 500 };

	stock armorStock = { armor, 3 };
	stock helperStock = { helper, 2 };
	stock exHelperStock = { exHelper, 1 };

	shop store = { 1500,{armorStock, helperStock, exHelperStock} };

	std::cout << " A.F.R: HELLO!! I am A.F.R. Your personal assistant for all your buying and selling needs! How can I be of assistance?" << std::endl;
	while (true)
	{
		std::cout << "(Press 1 to change prices of shop items)" << std::endl;
		std::cout << "(Press 2 to add to stock of shop items)" << std::endl;
		std::cout << "(Press 3 to sell stock)" << std::endl;
		std::string answer;
		int input;
		std::cin >> input;
		system("cls");
		switch (input)
		{
		case(1):
		{
			std::cout << "A.F.R: Ok which item do you wanna change the price of?" << std::endl;
			std::cout << "(Press 1 to change the price of Grok Armor.)" << std::endl;
			std::cout << "(Press 2 to change prices of the TC-x3 bots)" << std::endl;
			std::cout << "(Press 3 to change price of the O.N.E bot)" << std::endl;
			int input2;
			std::cin >> input2;
			system("cls");
			switch (input2)
			{
			case(1):
			{
				int newprice;
				std::cout << "A.F.R: What do you want the new price of Grok Armor to be?\n";
				std::cout << "New Price: "; std::cin >> newprice;
				armor.cost = newprice;
				std::cout << "The price of Grok Armor has now been changed to " << armor.cost << std::endl;
				system("pause");
				system("cls");
				break;
			}
			case(2):
			{
				int newprice;
				std::cout << "A.F.R: What do you want the new price of a TC-x3 bot to be?\n";
				std::cout << "New Price: "; std::cin >> newprice;
				helper.cost = newprice;
				std::cout << "The price of a TC-x3 bot has now been changed to " << helper.cost<<std::endl;
				system("pause");
				system("cls");
				break;
			}
			case(3):
			{
				int newprice;
				std::cout << "A.F.R: What do you want the new price of the O.N.E bot to be?\n";
				std::cout << "New Price: "; std::cin >> newprice;
				exHelper.cost = newprice;
				std::cout << "The price of the O.N.E bot has now been changed to " << exHelper.cost << std::endl;
				system("pause");
				system("cls");
				break;
			}
			}
		}
		break;
		case(2):
		{
			std::cout << "A.F.R: Ok which item do you wanna add stock to?" << std::endl;
			std::cout << "(Press 1 to get more Grok Armor.Costs 50 gold each)" << std::endl;
			std::cout << "(Press 2 to get more TC-x3 bots. Costs 120 gold each)" << std::endl;
			std::cout << "(Press 3 to get another O.N.E bot. Costs 320 gold)" << std::endl;
			int input2;
			std::cin >> input2;
			system("cls");
			switch (input2)
			{
			case(1):
			{
				int newstock;
				std::cout << "A.F.R:Alright boss how much more Grok Armor do you want?\n";
				std::cout << "Stock amount: "; std::cin >> newstock;
				armorStock.quantity = newstock + armorStock.quantity;
				if (store.gold <= 0)
				{
					std::cout << "Oof looks like you're broke boss. Maybe try selling things?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				store.gold = store.gold - (newstock * 50);
				std::cout << "The stock of Grok Armor has now been changed to " << armorStock.quantity << std::endl;
				std::cout << "Your remaining amount of gold is " << store.gold << std::endl;
				
				system("pause");
				system("cls");
				break;

			}
			case(2):
			{
				int newstock;
				std::cout << "A.F.R:Alright boss how many more TC-x3 bots do you want?\n";
				std::cout << "Stock amount: "; std::cin >> newstock;
				helperStock.quantity = newstock + helperStock.quantity;
				if (store.gold <= 0)
				{
					std::cout << "Oof looks like you're broke boss. Maybe try selling things?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				store.gold = store.gold - (newstock * 120);
				std::cout << "The stock of the TC-x3 bots has now been changed to " << helperStock.quantity<<std::endl;
				std::cout << "Your remaining amount of gold is " << store.gold << std::endl;
				system("pause");
				system("cls");
				break;

			}
			case(3):
			{
				int newstock;
				std::cout << "A.F.R:Alright boss how many more O.N.E bots do you want?\n";
				std::cout << "Stock amount: "; std::cin >> newstock;
				exHelperStock.quantity = newstock + exHelperStock.quantity;
				if (store.gold <= 0)
				{
					std::cout << "Oof looks like you're broke boss. Maybe try selling things?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				store.gold = store.gold - (newstock * 320);
				std::cout << "The stock of O.N.E bots has now been changed to " << exHelperStock.quantity << std::endl;
				std::cout << "Your remaining amount of gold is " << store.gold << std::endl;
				system("pause");
				system("cls");
				break;
			}

			}
		}
		break;
		case(3):
		{
			std::cout << "A.F.R: Got it boss! What are we putting up for sale today?" << std::endl;
			std::cout << "(Press 1 to sell Grok Armor.)" << std::endl;
			std::cout << "(Press 2 to sell a TC-x3 bot)" << std::endl;
			std::cout << "(Press 3 to sell the O.N.E bot)" << std::endl;
			int input3;
			std::cin >> input3;
			system("cls");
			switch (input3)
			{
			case(1):
			{
				if (armorStock.quantity <= 0)
				{
					std::cout << "Can't sell stuff we ain't got. Maybe try buying things to sell?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				std::cout << "Ok I'll put this item up for sale give me a sec....\n";
				system("pause");
				store.sell(armorStock);
				std::cout << "Sold! The amount of gold you have is now " << store.gold <<std::endl;
				system("pause");
				system("cls");
				break;
			}
			case(2):
			{
				if (helperStock.quantity <= 0)
				{
					std::cout << "Can't sell stuff we ain't got. Maybe try buying things to sell?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				std::cout << "Ok I'll put this item up for sale give me a sec....\n";
				system("pause");
				store.sell(helperStock);
				std::cout << "Sold! The amount of gold you have is now " << store.gold <<std::endl;
				system("pause");
				system("cls");
				break;
			}
			case(3):
			{
				if (exHelperStock.quantity <= 0)
				{
					std::cout << "Can't sell stuff we ain't got. Maybe try buying things to sell?\n";
					std::cout << "Because, ya know, that's kinda how a store works.....\n";
					system("pause");
					system("cls");
					break;
				}
				std::cout << "Ok I'll put this item up for sale give me a sec....\n";
				system("pause");
				store.sell(exHelperStock);
				std::cout << "Sold! The amount of gold you have is now " << store.gold<<std::endl;
				system("pause");
				system("cls");
				break;
			}
			}
		}
		break;
		}
		std::cout << "Anything else I can do for you? You can tell me 'yes' or 'no'.\n";
		std::cin >> answer;
		if (answer == "yes" || answer == "Yes")
		{
			system("cls");
			std::cout << "A.F.R: Okay what do you want to do?" << std::endl;
			continue;
		}
		else if (answer == "no" || answer == "No")
		{
			std::cout << "A.F.R: Alright see you later boss!!" << std::endl;
			break;
		}
		else
		{
			std::cout << "What? That's not an input I asked for. That's dumb. You're dumb. I quit.\n";
			break;
		}
	}
	system("pause");
}
//example
//struct Item
//{
//	std::string name;
//	int cost;
//};
//struct Stock
//{
//	Item item;
//	int quantity;
//};
//struct Buyer
//{
//	int money;
//	void Buy(Stock &stock)
//	{
//		stock.quantity--;
//		money = money - stock.item.cost;
//
//	}
//
//};
//struct Store
//{
//	Stock stock[10];
//	Buyer buyer;
//};
//
//int main()
//{
//	Item shoes = { "Shoes", 10 };
//	Item shirt = { "Shirt", 5 };
//	Item pants = { "Pants", 11 };
//	Item hats = { "Hats", 4 };
//
//	Stock shoeStock = { shoes, 8 };
//	Stock shirtStock = { shirt, 10 };
//	Stock pantsStock = { pants, 6 };
//	Stock hatStock = { hats, 5 };
//
//	Store CVS = { {pantsStock} , 15 };
//	Store Walgreens = { {shoeStock,pantsStock} };
//	Store warehouse = { {shoeStock}, 100 };
//
//	Buyer player = { 100 };
//	player.Buy(warehouse.stock[0]);
//
//	CVS.buyer = player;
//	/*Teacher me;
//	Student you;
//	Job j;
//	j.worker = me;
//	j.worker = you;
//	
//
//
//}
//
//
//struct Job
//{
//	Worker worker;
//};
//
//struct Worker
//{
//	virtual void DoWork() {}
//};
//
//struct Student : Worker
//{
//	virtual void DoWork()
//	{
//		std::cout << ":im worker";
//	}
//};
//
//struct Teacher : Worker
//{
//	virtual void DoWork()
//	{
//		std::cout << "Im more useful";
//	}
//};*/