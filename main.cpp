#include <iostream>
using namespace std;
 
int main()
{
    int selection;
    double value_n, constant_a, constant_b, derivate;
    try_again:
    cout<< "_____________________________________________________________" << endl;
    cout << "1. Form: a(x)^n                            2. Form: a(b)^x\n";
    cout << "3. Form: aln(x)                            4. Form: asin(x)\n";
    cout << "5. Form: acos(x)                           6. Form:atan(x)\n";
    cout << "7. EXIT\n\n";
    cout << "Select an option: ";
    if (selection >= 1 && selection <= 6)
    {
    	switch (selection)
    	{
    		case 1:
    		
    				cout << "Enter the value for a (constant) and the value for n.\n";
    				cout << "| a: "; cin >> constant_a;
    				cout << "| n: "; cin >> value_n; cout << endl;
    				cout << "The derivate is: " << constant_a * value_n << "(x)^" << value_n - 1 << endl;
    				cout << "FORM: n(x)^(n-1)\n\n";
    				break;
			
			case 2:
			
					cout << "Enter the value for a (constant) and the value for b.\n";
    				cout << "| a: "; cin >> constant_a;
    				cout << "| b: "; cin >> constant_b; cout << endl;
    				cout << "The derivate is: " << constant_a << "ln(" << constant_b << ")(" << constant_b << ")^(x)" << endl;
    				cout << "FORM: aln(b)b^x\n\n";
    				break;
    	
    		case 3:
    		
    				cout << "Enter the value for a (constant).\n";
    				cout << "| a: "; cin >> constant_a; cout << endl; 
    				cout << "The derivate is: " << constant_a << "/x" << endl;
    				cout << "FORM: a/x\n\n";
    				break;
			
			case 4:
			
					cout << "Enter the value for a (constant).\n";
    				cout << "| a: "; cin >> constant_a; cout << endl; 
    				cout << "The derivate is: " << constant_a << "cos(x)" << endl;
    				cout << "FORM: acos(x)\n\n";
    				break;
    		
    		case 5:
    		
    				cout << "Enter the value for a (constant).\n";
    				cout << "| a: "; cin >> constant_a; cout << endl; 
    				cout << "The derivate is: -" << constant_a << "sin(x)" << endl;
    				cout << "FORM: -asin(x)\n\n";
    				break;
			
			case 6:
			
					cout << "Enter the value for a (constant).\n";
    				cout << "| a: "; cin >> constant_a; cout << endl; 
    				cout << "The derivate is: " << constant_a << "(sec(x))^2" << endl;
    				cout << "FORM: a(sec(x))^2\n\n";
    				break;
    		
			
    		
		}
	}
	else if (selection == 7)
	{
		cout << "EXIT" << endl;
		goto exit;
	}
	else
	{
		cout << "ERROR" << endl;
		goto try_again;
	}
	cout << "DONE" << endl;
	
	exit:
		system("pause");
		return 0;
	}
