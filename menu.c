#include<stdio.h>
void main()
{
	int a,op,s,c,q,total;
	printf("enter your choice :(1 for punjabi, 2 for deserts ,3 for starter:\n)");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n you choose punjabi \n select your choice (1for panner sabzi and roti ,2 for dalfry and jeera rice and 3 for lassi)");
			scanf("%d",&op);
		
			switch(op)
			{
				case 1:
					printf("you have ordered panner sabzi and roti");
					printf("How many plate?");
					scanf("%d",&q);
					total=150*q;
						printf("Your total is:%d",total);
					break;
					case 2:
					printf("you have orderded dalfry and jeera rice");
					printf("How many plate?");
					scanf("%d",&q);
					total=75*q;
						printf("Your total is:%d",total);
					break;
					 case 3:
					 	printf("you have orderded lassi");
					 	printf("How many glass?");
					    scanf("%d",&q);
					    total=20*q;
					    	printf("Your total is:%d",total);
					 	break;
						
			}
			break;
			case 2:
				printf("you  choose deserts\n select your choice(1 for brownies 2 for icecream and 3 for waffles):");
				scanf("%d",&s);
			    switch(s)
			    {
			    	case 1:
			    		printf("you have orderded  brownies");
			    			printf("How many plate?");
					scanf("%d",&q);
					total=200*q;
						printf("Your total is:%d",total);
			    		break;
			    			case 2:
			    		printf("you have orderded icecream");
			    			printf("How many cup?");
					scanf("%d",&q);
					total=50*q;
					printf("Your total is:%d",total);
			    		break;
			    			case 3:
			    		printf("you have orderded waffles");
			    			printf("How many?");
					scanf("%d",&q);
					total=175*q;
						printf("Your total is:%d",total);
			    		break;
				}
				break;
				case 3:
					printf("you  choose starter\n select your choice(1 for paneer chilli 2 for Manchurian Dry 3 for Chilli Potato):");
					scanf("%d",&c);
					switch(c)
					{
						case 1:
			    		printf("you have orderded  Paneer Chilli");
			    			printf("How many plate?");
					scanf("%d",&q);
					total=120*q;
						printf("Your total is:%d",total);
			    		break;
			    			case 2:
			    		printf("you have orderded Manchurian Dry");
			    			printf("How many plate?");
					scanf("%d",&q);
					total=130*q;
						printf("Your total is:%d",total);
			    		break;
			    			case 3:
			    		printf("you have orderded Chilli Potato");
			    			printf("How many plate?");
					scanf("%d",&q);
					total=110*q;
						printf("Your total is:%d",total);
			    		break;
					}
					break;
					default:
						printf("wrong item selected");
						break;
				
	}
}
