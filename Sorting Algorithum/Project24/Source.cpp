#include <iostream>
#include <string>
using namespace std;

class postalcode
{
public :
	
	int code [900] ;
	string country [100]  ;
	int validation ;
    CANADAZIPCODE obj1;
    USZIPCODE obj2;
    BRITANZIPCODE obj3;
	postalcode(int coode[] , string contry[] );
	void tostring(int code ,string &value);
	void getcode(string coode);
	string getDestination(int code);
	bool validate(int code , string country);
	string	getCountry(int code);

};
string postalcode::getCountry(int code)
{
    string name;
    if (obj1.validat(code) )
    {
        name = "canada";
    }
    else if (obj2.validat(code))
    {
        name = "usa";
    }
    else if (obj3.validat(code))
    {
        name = "britan";
    }
    else
    {
        name = "na";
    }
    return name;
}
bool postalcode::validate(int code, string country)
{
    
    static int y = code;
    if( country == "CANADA")
    {
        return obj1.validat(code);
    }
    else if (country == "USA")
    { 
        return obj2.validat(code);
    }
    else if (country == "BRITAN" )
    {
        return obj3.validat(code);
    }
}


string postalcode::getDestination(int code)
{
    bool flagq = false;
    for (int i = 0; i < sizeof(code); i++)
    {
        if (code == USZIPCODE::zipcode[i])
        {
            cout << "/n its in the us area destination " << USZIPCODE::area1[i] << "\n";
            flagq = true;
        }
        else if (code == CANADAZIPCODE::zipcode1[i])
        {
            cout << "/n its in the CANADA area destination " << CANADAZIPCODE::area2[i] << "\n";
            flagq = true;
        }
        else if (code == BRITANZIPCODE::zipcode2[i])
        {
            cout << "/n its in the CANADA area destination " << BRITANZIPCODE::area3[i] << "\n";
            flagq = true;
        }
        
    }
    if (flagq == true)
    {
        cout << " \n destination found ";
    }
    else
    {
        cout << "\n XIP CODE NOT IN OUR DATA BASE";
    }
}
class USZIPCODE : public postalcode {

public:
    static int zipcode[];
    static string area1[];
    const bool validate(int code)
    {
        if (to_string(code).length() == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string getcoutry(int cde)
    {
        if (to_string(cde).length() == 4)
        {
            string n = "\n IT's USA ";
            return n;
        }
        else
        {

            string n = "\n IT's not USA ";
            return n;

        }
    }
};
class CANADAZIPCODE : public postalcode {
   
public:
    static int zipcode1[];
    static string area2[];
    
    const bool validat(int code)
    {
        if (to_string(code).length() == 6)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    string getcoutry(int cde)
    {
        if (to_string(cde).length() == 6)
        {
            string n = "\n IT's CANADA ";
            return n;
        }
        else
        {

            string n = "\n IT's not CANADA ";
            return n;

        }
    }
};
class BRITANZIPCODE : public postalcode {


public:
    static int zipcode2[];
    static string area3[];
    bool validate(int code)
    {
        if(to_string(code).length() == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string getcoutry(int cde)
    {
        if (to_string(cde).length() == 5)
        {
            string n = "\n IT's BRITAN ";
            return n;
        }
        else
        {

            string n = "\n IT's not britan ";
            return n;
            
        }
    }
};

postalcode::postalcode( int coode[] , string contry[])
{ 
	
	validation = 0;
	for(int i =0 ;i<sizeof(coode);i++)
	{
		code[i] = coode[i];
		country[i] = contry[i];
	}
}
void postalcode:: getcode(string coode )
{
    

    if( coode =="US")
    {

        for(int i=0 ;i<sizeof(code);i++)
        {
            if (to_string(code[i]).length() == 4)
            {
                USZIPCODE::zipcode[i] = code[i];
                USZIPCODE::area1[i] = to_string(USZIPCODE::zipcode[i]) + to_string(code[i]);
            }
        }

    }
    else if (coode == "CANADA")
    {
        for (int i = 0; i < sizeof(code); i++)
        {
            if (to_string(code[i]).length() == 6)
            {
                CANADAZIPCODE::zipcode1[i] = code[i];
                CANADAZIPCODE::area2[i] = to_string(CANADAZIPCODE::zipcode1[i]) + to_string(code[i]);
            }
        }

    }
    else if (coode == "BRITAN")
    {
        for (int i = 0; i < sizeof(code); i++)
        {
            if (to_string(code[i]).length() == 5)
            {
                BRITANZIPCODE::zipcode2[i] = code[i];
                BRITANZIPCODE::area3[i] = to_string(BRITANZIPCODE::zipcode2[i]) + to_string(code[i]);
            }
        }


    }
    else
    {
        cout << "\n Enter US CANADA OR BRITAN TO GET CODE LIST Wrong entry";
    }
    
}
void postalcode::tostring(int code, string& value)
{ 
    value = "";

    int num = 0;
    while (code != 0) {
        num = (num * 10) + (code % 10);
        code /= 10;
    }
    for (int i = num; i > 0; i = i / 10) {

        switch (i % 10) {
        case 0:
            cout << "Zero ";
            value += "Zero";
            break;
        case 1:
            cout << "One ";
            value += "One";
            break;
        case 2:
            cout << "Two ";
            value += "Two";
            break;
        case 3:
            cout << "Three ";
            value += "Three";
            break;
        case 4:
            cout << "Four ";
            value += "Four";
            break;
        case 5:
            cout << "Five ";
            value += "Five";
            break;
        case 6:
            cout << "Six ";
            value += "Six";
            break;
        case 7:
            cout << "Seven ";
            value += "Seven";
            break;
        case 8:
            cout << "Eight ";
            value += "Eight";
            break;
        case 9:
            cout << "Nine ";
            value += "Nine";
            break;
        }
    }
}
void main()
{
	cout << "\n Postal Code System \n";

	system("pause");
}