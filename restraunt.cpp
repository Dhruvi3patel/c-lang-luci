#include<iostream>
using namespace std;
int main()
{
	int ch,punjabi,cldrk,icecm;
	cout<<"1. punjabi\n2.cold-drink\n3.IceCream\nEnter your choice :-";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\n\n\nYou selected PUNJABI\n1. punjabi thali-1\n2. punjabi thali-2\nEnter YOur choice :- ";
			cin>>punjabi;
	     
		 switch(punjabi)
		 {
		 	case 1:
		 		cout<<"\n\nYou selectd THALI NO 1\nCONTENTS OF THALI 1\nKaju kurry\npanner kadhai\nRoti";
		 		break;
		 		case 2:
		 		cout<<"\n\nYou selected Thali no 2";
		 		cout<<"\n Contents for thali no 2 are :-";
		 		cout<<"\n paneer pasanda\nmutter paneer\n roti";
				 }		
			break;
			
			case 2:
				cout<<"\n\nYou selected COLD-DRINK\n1.beverages2.lassi";
				cout<<"\nENTER YOU CHOICE:- ";
				cin>>cldrk;
				switch(cldrk){
					
					case 1:
						cout<<"\n\nYou selected beverages\n you get SODA\nCOKE\nPEPSI";
						break;
						
						case 2:
							cout<<"\n\nYou selected LASSI\nYOU GET \nMANGO LASSI\nDRYFRUIT LASSI";
				}
				break;
				
				case 3:
					{
						cout<<"\n\nYOu selected ICECREAM\n1.CUPS\n2.CONES";
						cout<<"\nENTER YOU CHOICE:- ";
						cin>>icecm;
						
						switch(icecm)
						{
							case 1:
								cout<<"\n\nYou selected CUP ICECREAM\n YOU GET\nMANGO CUP ICECREAM\nKIWI CUP ICECREAM";
								break;
								
								case 2:
									cout<<"\n\nYou selected CONES\nYOU GET\nCHOCOLATE CONE\nVANILLA CONE";
									
						}
						break;
					}
	}
}
