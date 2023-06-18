#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream> 
 
using namespace std;

class vehicle
{
private:
	string search_name;
	string see_name;
	string username;
	string password;
	string licenceNo[6];
	string tokentax[6];
	int Modelno[6];
	string color[6];
	long long regno[6];
	string name[6];
	string engine_size;
	string upname;

public:
	void login()
	{
		cout << "\t\t\t\t\t  =====================================\n";
		cout << "\t\t\t\t\t  |           >>> login <<<           |\n";
		cout << "\t\t\t\t\t  =====================================\n";
		cout << "\t\t\t\t\t            username : ";
		for (int i = 1; i > 0; i++)
		{

			cin >> username;
			if (username != "admin")
			{
				cout << "\n\t\t\t\t\t  | Invalid Username. Please Re-enter |" << endl;
				cout << "\t\t\t\t\t            username : ";
			}
			else { break; }
		}
		cout << "\t\t\t\t\t            Password : ";
		for (int i = 1; i > 0; i++)
		{

			cin >> password;
			if (password != "0000")
			{
				cout << "\n\t\t\t\t\t  | Invalid Password. Please Re-enter |" << endl;
				cout << "\t\t\t\t\t            Password : ";
			}
			else { break; }

		}
		cout << "\n";
		cout << "\t\t\t\t\t  |       >>> Access Granted <<<      |\n";
		cout << "\t\t\t\t\t  =====================================\n";
		
		/////BEEP///////////////////////////////////////////////
		cout << "\n";

		
	}
	

	

	

	void additional_feature()
	{
		int choice;
		int choice2;
		char condition = 'Y';
		do
		{
			cout << "\t\t\t\t\t         =======================\n";
			cout << "\t\t\t\t\t         |     >>> MENU <<<    |\n";
			cout << "\t\t\t\t\t         =======================\n";
			cout << "\t\t\t\t\t         |   >>> OPTION <<<    |\n"
				<< "\t\t\t\t\t         | 1. Register Vehicle |\n"
				<< "\t\t\t\t\t         | 2. Update Vehicle   |\n"
				<< "\t\t\t\t\t         | 3. Token Tax Detail |\n"
				<< "\t\t\t\t\t         | 4. Search Vehicle   |\n"
				<< "\t\t\t\t\t         | 5. Exit             |\n";
			cout << "\t\t\t\t\t         =======================\n\n";
			string upname;
			long long upregnum;
			int j = 0;
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				int n;
				cout << " \t\t\t\t       ===========================================\n";
				cout << " \t\t\t\t       |                                         |\n";
				cout << " \t\t\t\t           Number of Cars want to register : ";
				cin >> n;
				cout << " \t\t\t\t       |                                         |\n";
				cout << " \t\t\t\t       ===========================================\n\n";

				for (int i = 0; i < n; i++)
				{

					cout << "============================================\n";
					cout << "|                Car no." << i + 1 << "  \t\t   |\n";
					cout << "============================================\n";
					cout << " Registration No.                       : ";
					cin >> regno[i];
					cout << " Name                                   : ";
					cin >> name[i];
					cout << " License Number                         : ";
					cin >> licenceNo[i];
					cout << " Model Number                           : ";
					cin >> Modelno[i];
					cout << " Color                                  : ";
					cin >> color[i];
					cout << " Token Tax Status (Lifetime / Annually) : ";
					cin >> tokentax[i];
					cout << "\n >>> REGISTERED <<< \n\n";

					ofstream myfile;
					myfile.open("Registered Vehicle Data.csv", ios::out | ios::app);
					myfile << " Reg Num " << "  , " << " Name " << "  , " << "Lsn Num" << "  ," << "Model No" << " ," << "Color " << "\n";
					myfile << regno[i] << "," << name[i] << "," << licenceNo[i] << "," << Modelno[i] << "," << color[i] << endl;

				}
				break;
			case 2:
			
					cout << "============================================\n";
					cout << " ENTER NAME YOU WANT TO UPDATE : ";
					cin >> upname;
					cout << " ENTER REG NUMBER OF VEHICLE   : ";
					cin >> upregnum;
					cout << "============================================\n";
					{
						if (upname == name[j] && upregnum == regno[j])
						{

							cout << " Enter Updated Car                                     : ";
							cin >> name[j];
							cout << " Enter Updated Registration Number                     : ";
							cin >> regno[j];
							cout << " Enter Updated License Number                          : ";
							cin >> licenceNo[j];
							cout << " Enter Updated Model Number                            : ";
							cin >> Modelno[j];
							cout << " Enter Updated Color                                   : ";
							cin >> color[j];
							cout << " Enter Updated Token Tax Status (Lifetime / Annually)  : ";
							cin >> tokentax[j];
							cout << " >>> SLOT UPDATED <<< \n\n";
							cout << " UPDATED DETAILS => \n";
							cout << " UPDATED NAME                 : " << name[j] << "\n";
							cout << " UPDATED REGISTRATION NUMBER  : " << regno[j] << "\n";
							cout << " UPDATED LICENSE NUMBER       : " << licenceNo[j] << "\n";
							cout << " UPDATED MODEL NUMBER         : " << Modelno[j] << "\n";
							cout << " UPDATED COLOR                : " << color[j] << "\n";
							cout << " UPDATED TOKEN TAX STATUS     : " << tokentax[j] << "\n";

						}

						else
						if (upname != name[j] && upregnum != regno[j])
						{
							cout << " \nNOT FOUND.... \n\n";
							break;

						}
					}
				break;

			case 3:
				cout << "\t\t\t\t\t         ======================\n";
				cout << "\t\t\t\t\t         |    >>> Sizes <<<   |\n";
				cout << "\t\t\t\t\t         ======================\n";
				cout << "\t\t\t\t\t         | >> 1000 to 1300 CC |\n"
					<< "\t\t\t\t\t         | >> 1301 to 1500 CC |\n"
					<< "\t\t\t\t\t         | >> 1501 to 2000 CC |\n"
					<< "\t\t\t\t\t         | >> 2001 to 2500 CC |\n"
					<< "\t\t\t\t\t         | >> 2500 CC Above   |\n";
				cout << "\t\t\t\t\t         ======================\n\n";
				cout << " Engine Size      : ";
				{
					cin >> engine_size;

					if (engine_size >= "1000" || engine_size <= "1300")
					{
						cout << "=======================\n";
						cout << " Token Tax = Rs. 1,800 \n";
						cout << "=======================\n";
						break;
					}
					else if (engine_size >= "1301" || engine_size <= "1500")
					{
						cout << "=======================\n";
						cout << " Token Tax = Rs. 6,000 \n";
						cout << "=======================\n";
						break;
					}
					else if (engine_size >= "1501" || engine_size <= "2000")
					{
						cout << "=======================\n";
						cout << " Token Tax = Rs. 9,000 \n";
						cout << "=======================\n";
					}
					else if (engine_size >= "2001" || engine_size <= "2500")
					{
						cout << "========================\n";
						cout << " Token Tax = Rs. 12,000 \n";
						cout << "========================\n";
						break;
					}
					else if (engine_size >= "2500")
					{
						cout << "========================\n";
						cout << " Token Tax = Rs. 15,000 \n";
						cout << "========================\n";
						break;
					}
					else if (engine_size < "1000")
					{
						cout << "======================\n";
						cout << " Invalid Input ... :/\n\n";
						cout << "======================\n";
						break;
					}
				}
				break;

			case 4:

				cout << " Enter Name (Car) : ";
				cin >> search_name;
				////////////////////////////////////////////////////////////////////////
				Beep(2020, 1100);                                      // causes the computer to beep
				char l = 219;                                          //for loading bar
				cout << "Searching ... \n";
				cout << "----------------\n";
				for (int i = 0; i < 10; i++)
				{
					Beep(2000, 500);

					cout << l;
				}
				cout << " 100%|\n";

				cout << "----------------\n";
				cout << endl;
				///////////////////////////////////////////////////////////////////////
				for (int i = 0; i < 5; i++)
				{

					if (search_name == name[i])
					{
						cout << " \n\nFoundddd....\n";
						cout << " Registration No. : " << regno[i] << "\n";
						cout << " Name             : " << name[i] << "\n";
						cout << " License Number   : " << licenceNo[i] << "\n";
						cout << " Model Number     : " << Modelno[i] << "\n";
						cout << " Color            : " << color[i] << "\n";
						cout << " Token Tax Status : " << tokentax[i] << "\n";
					}
					else {
						cout << " \nNot found..\n\n ";
						break;
					}
					break;
				}




			}


			cout << "===============================\n";
			cout << "|Do you want to operate again:|\n";
			cout << "| => (Y)es                    |\n";
			cout << "| => (N)o                     |\n";
			cout << "===============================\n";
			cin >> condition;
		} while (condition == 'Y' || condition == 'y');


	}

	~vehicle()//destructor called at the end
	{
		cout << "\n";
		{
			cout << "===============================\n";
			cout << "|    Thankyou for Availing    |\n";
			cout << "===============================\n";
			Beep(2020, 1100);                                      // causes the computer to beep
			char l = 219;                                          //for loading bar
			cout << "Logging out... \n";
			cout << "----------------\n";
			for (int i = 0; i < 10; i++)
			{
				Beep(2000, 500);

				cout << l;
			}
			cout << " 100%|\n";

			cout << "----------------\n";
		}
		cout << "Successfully logged out..\n";
		cout << "\n";
		return;

		cout << "\n\n";
	}
};

class notice
{
	                                                              
public:
	void display1()
	{
		cout << "\n\n";
		cout << "                              =============================================================\n";
		cout << "                              =======>                                              <======\n";
		cout << "                              ||>     EXCISE, TAXATION AND NARCOTICS CONTROL (ET&NC)    <||\n";
		cout << "                              =======>                                              <======\n";
		cout << "                              =============================================================\n\n\n";
	}
	void display2()
	{
		cout << "                   =================================================================================\n";
		cout << "                   |                              <<< ALERT NOTICE >>>                             |\n";
		cout << "                   =================================================================================\n";
		cout << "                   |The Excise, Taxation and Narcotics Control (ET&NC) Department has decided to   |\n                   |crackdown against the defaulters of vehicle token taxes, warning of a widescale|\n                   |operation if token tax is not submitted. ET&NC sources informed this scribe    |\n                   |that even before the lockdown, a campaign was launched for the submission of   |\n                   |token taxes on vehicles with the aim of enabling citizens to pay token taxes   | \n                   |on time. \t\t\t\t\t\t\t\t\t   |\n";
		cout << "                   |                                                                               |\n";
		cout << "                   =================================================================================\n\n\n";
	}
};

int main()
{
	notice s1;
	s1.display1();
	s1.display2();

	vehicle s2;
	s2.login();
	s2.additional_feature();



	system("pause");
	return 0;

}
