#include"Func.h"
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<arpa/inet.h>

char mainMenu()
{
	char choice;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << " (1) Registration" << std::endl;
	std::cout << " (2) Enter" << std::endl;
	std::cout << " (3) Exit" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "Choice -  ";
	std::cin >> choice;
	std::cin.ignore(1, '\n');
	return choice;
}

char menuMessage()
{
	std::cout << "******************************" << std::endl;
	std::cout << " *1* Get messages from a general chat." << std::endl;
	std::cout << " *2* Get private messages." << std::endl;
	std::cout << " *3* Write a message." << std::endl;
	std::cout << " *4* Log out." << std::endl;
	std::cout << "******************************" << std::endl;

	std::cout << " Choice -  ";
	char choice;
	std::cin >> choice;
	std::cin.ignore(100, '\n');
	return choice;
}

std::string inputName()
{
	std::string str;
	std::cout << "Èìÿ - ";
	std::cin >> str;
	return str;
}

std::string inputLogin()
{
	std::string str;
	std::cout << "Login - ";
	std::cin >> str;
	return str;
}

std::string inputPass()
{
	std::string str;
	std::cout << "Password - ";
	std::cin >> str;
	return str;
}

std::string inputTo()
{
	std::string str;
	std::cout << std::endl;
	std::cout << "To whom - ";
	/*std::cin.ignore();
	std::getline(std::cin, str);*/
	std::cin >> str;
	return str;
}

std::string massageText()
{
	std::string text;
	std::cout << ">>  ";
	std::cin.ignore();
	std::getline(std::cin, text);
	return text;
}

void incorrectInputMenuMessage()
{
	std::cout << "Invalid input. Try again." << std::endl;

}

bool incorrectInputMenu(char choice_menu)
{
	if (choice_menu < 49 || choice_menu > 52)
	{
		std::cout << std::endl;
		std::cout << "Invalid input. Try again." << std::endl;
		return false;
	}
	return true;
}

/*void noMessages()
{
	std::cout << "No private messages for you." << std::endl;
}*/