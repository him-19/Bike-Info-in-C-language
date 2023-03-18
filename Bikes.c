#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int ch1,ch2,ch3;
	
	start:
	printf("-----------------Welcome to Bikes Duniya---------------------");
	printf("\nBikes Brands");
	printf("\n\n1-Royal Enfield\n2-KTM\n3-Yamaha\n4-Bajaj\n5-JAWA\n\n6-EXIT");
	printf("\nPlease select the Bike Brand you want to visit :");
	scanf("%d",&ch1);
	
	switch (ch1)
	{
		case 1:
			RE:
			printf("\n--------------**Royal Enfield Bikes**---------------");
			printf("\n1-Royal Enfield Classic 350");
			printf("\n2-Royal Enfield Bullet 350");
			printf("\n3-Royal Enfield Continental GT 650");
			printf("\n4-Royal ENfield Himalayan");
			printf("\n5-Royal Enfield Meteor");
			printf("\n6-Royal Enfield Hunter 350\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("\n----------Royal Enfield Classic 350---------");
					printf("\nPrice\t-\t1.90-2.20 Lakh");
					printf("\nEngine\t-\t349.34cc");
					printf("\nPower\t-\t20.21 PS");
					printf("\nMileage\t-\t41.55 kmpl");
					printf("\nTorque\t-\t27 Nm");
					printf("\nWeight\t-\t195 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)\n");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
					
				case 2:
					printf("\n----------Royal Enfield Bullet 350---------");
					printf("\nPrice\t-\t1.51-1.66 Lakh");
					printf("\nEngine\t-\t346cc");
					printf("\nPower\t-\t19.36 PS");
					printf("\nMileage\t-\t38 kmpl");
					printf("\nTorque\t-\t28 Nm");
					printf("\nWeight\t-\t186 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)\n");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
					
				case 3:
					printf("\n----------Royal Enfield Continental GT 650---------");
					printf("\nPrice\t-\t3.19-3.45 Lakh");
					printf("\nEngine\t-\t650cc");
					printf("\nPower\t-\t47.4 PS @7250 rpm");
					printf("\nMileage\t-\t27 km/l");
					printf("\nTorque\t-\t52.3 Nm");
					printf("\nWeight\t-\t214 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
					
				case 4:
					printf("\n----------Royal Enfield Himalayan---------");
					printf("\nPrice\t-\t2.19-2.24 Lakh");
					printf("\nEngine\t-\t411cc");
					printf("\nPower\t-\t21.31 PS");
					printf("\nMileage\t-\t32.04 km/l");
					printf("\nTorque\t-\t32 Nm");
					printf("\nWeight\t-\t199 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
					
				case 5:
					printf("\n----------Royal Enfield Meteor---------");
					printf("\nPrice\t-\t2.01-2.19 Lakh");
					printf("\nEngine\t-\t349cc");
					printf("\nPower\t-\t20.4 PS");
					printf("\nMileage\t-\t41.88 km/l");
					printf("\nTorque\t-\t27 Nm");
					printf("\nWeight\t-\t191 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
					
				case 6:
					printf("\n----------Royal Enfield Hunter 350---------");
					printf("\nPrice\t-\t1.50-1.72 Lakh");
					printf("\nEngine\t-\t349.34cc");
					printf("\nPower\t-\t20.4 PS");
					printf("\nMileage\t-\t36.2 km/l");
					printf("\nTorque\t-\t27 Nm");
					printf("\nWeight\t-\t177 Kg");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Royal Enfield Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto RE;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto RE;
					}
					break;
				default:
					printf("\nInvalid Choice..... \n");
					goto start;
			}
		case 2:
			KTM:
			printf("\n--------------**KTM Bikes**---------------");
			printf("\n1-KTM Duke 390");
			printf("\n2-KTM Duke 200");
			printf("\n3-KTM Duke 250");
			printf("\n4-KTM RC 390");
			printf("\n5-KTM RC 200");
			printf("\n6-KTM Adventure 390\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("\n----------KTM Duke 390---------");
					printf("\nPrice\t-\t2.96 Lakh");
					printf("\nEngine\t-\t373.27cc");
					printf("\nPower\t-\t43.5 PS");
					printf("\nMileage\t-\t29 kmpl");
					printf("\nTorque\t-\t37 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
				case 2:
					printf("\n----------KTM Duke 200---------");
					printf("\nPrice\t-\t1.90 Lakh");
					printf("\nEngine\t-\t199.5cc");
					printf("\nPower\t-\t25 PS");
					printf("\nMileage\t-\t33 kmpl");
					printf("\nTorque\t-\t19.3 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
				case 3:
					printf("\n----------KTM Duke 250---------");
					printf("\nPrice\t-\t2.35 Lakh");
					printf("\nEngine\t-\t248.76cc");
					printf("\nPower\t-\t30 PS");
					printf("\nMileage\t-\t41 kmpl");
					printf("\nTorque\t-\t24 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
				case 4:
					printf("\n----------KTM RC 390---------");
					printf("\nPrice\t-\t3.14 - 3.16 Lakh");
					printf("\nEngine\t-\t373.27cc");
					printf("\nPower\t-\t43.5 PS");
					printf("\nMileage\t-\t25.89 kmpl");
					printf("\nTorque\t-\t37 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
				case 5:
					printf("\n----------KTM RC 200---------");
					printf("\nPrice\t-\t2.13 - 2.15 Lakh");
					printf("\nEngine\t-\t199.5cc");
					printf("\nPower\t-\t25 PS");
					printf("\nMileage\t-\t35 kmpl");
					printf("\nTorque\t-\t19.2 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
				case 6:
					printf("\n----------KTM Adventure 390---------");
					printf("\nPrice\t-\t3.35 Lakh");
					printf("\nEngine\t-\t373cc");
					printf("\nPower\t-\t43.5 PS");
					printf("\nMileage\t-\t30 kmpl");
					printf("\nTorque\t-\t37 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in KTM Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto KTM;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto KTM;
					}
					break;
					default:
					printf("\nInvalid Choice..... \n");
					goto start;
				}
		case 3:
			Yamaha:
			printf("\n--------------**Yamaha Bikes**---------------");
			printf("\n1-MT 15 V2");
			printf("\n2-R15 V4");
			printf("\n3-R15 S");
			printf("\n4-FZS-FI V3");
			printf("\n5-FZ-FI V3\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("\n----------MT 15 V2---------");
					printf("\nPrice\t-\t1.68 Lakh");
					printf("\nEngine\t-\t155cc");
					printf("\nPower\t-\t18.4 PS");
					printf("\nMileage\t-\t56.87 kmpl");
					printf("\nTorque\t-\t14.1 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Yamaha Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto Yamaha;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto Yamaha;
					}
					break;
				case 2:
					printf("\n----------R15 V4---------");
					printf("\nPrice\t-\t1.81 - 1.94 Lakh");
					printf("\nEngine\t-\t155cc");
					printf("\nPower\t-\t18.4 PS");
					printf("\nMileage\t-\t55.20 kmpl");
					printf("\nTorque\t-\t14.2 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Yamaha Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto Yamaha;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto Yamaha;
					}
					break;
				case 3:
					printf("\n----------R15 S---------");
					printf("\nPrice\t-\t1.63 Lakh");
					printf("\nEngine\t-\t155cc");
					printf("\nPower\t-\t18.6 PS");
					printf("\nMileage\t-\t40 kmpl");
					printf("\nTorque\t-\t14.2 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Yamaha Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto Yamaha;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto Yamaha;
					}
					break;
				case 4:
					printf("\n----------FZS-FI V3---------");
					printf("\nPrice\t-\t1.21 - 1.27 Lakh");
					printf("\nEngine\t-\t149cc");
					printf("\nPower\t-\t12.4 PS");
					printf("\nMileage\t-\t46 kmpl");
					printf("\nTorque\t-\t13.3 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Yamaha Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto Yamaha;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto Yamaha;
					}
					break;
				case 5:
					printf("\n----------FZ -FI V3---------");
					printf("\nPrice\t-\t1.15 Lakh");
					printf("\nEngine\t-\t149cc");
					printf("\nPower\t-\t12.4 PS");
					printf("\nMileage\t-\t49.3 kmpl");
					printf("\nTorque\t-\t13.3 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Yamaha Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto Yamaha;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto Yamaha;
					}
					break;
				
				default:
					printf("\nInvalid Choice..... \n");
					goto start;
			}
		case 4:
			bajaj:
			printf("\n--------------**Bajaj Bikes**---------------");
			printf("\n1-Pulsar NS200");
			printf("\n2-Pulsar 150");
			printf("\n3-Pulsar N160");
			printf("\n4-Pulsar RS200");
			printf("\n5-Dominar 400\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("\n----------Pulsar NS200---------");
					printf("\nPrice\t-\t1.14 - 1.47 Lakh");
					printf("\nEngine\t-\t199cc");
					printf("\nPower\t-\t24.5 PS");
					printf("\nMileage\t-\t40.84 kmpl");
					printf("\nTorque\t-\t18.74 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Bajaj Bikes\t\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto bajaj;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto bajaj;
					}
					break;
				case 2:
					printf("\n----------Pulsar 150---------");
					printf("\nPrice\t-\t1.17 - 1.20 Lakh");
					printf("\nEngine\t-\t149cc");
					printf("\nPower\t-\t14 PS");
					printf("\nMileage\t-\t47.5 kmpl");
					printf("\nTorque\t-\t13.25 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Bajaj Bikes\t\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto bajaj;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto bajaj;
					}
					break;
				case 3:
					printf("\n----------Pulsar N160---------");
					printf("\nPrice\t-\t1.23 - 1.30 Lakh");
					printf("\nEngine\t-\t164.82cc");
					printf("\nPower\t-\t16 PS");
					printf("\nMileage\t-\t59.11 kmpl");
					printf("\nTorque\t-\t14.65 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Bajaj Bikes\t\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto bajaj;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto bajaj;
					}
					break;
				case 4:
					printf("\n----------Pulsar RS200---------");
					printf("\nPrice\t-\t1.71 Lakh");
					printf("\nEngine\t-\t199.5cc");
					printf("\nPower\t-\t24.5 PS");
					printf("\nMileage\t-\t35 kmpl");
					printf("\nTorque\t-\t18.7 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Bajaj Bikes\t\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto bajaj;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto bajaj;
					}
					break;
				case 5:
					printf("\n----------Dominar 400---------");
					printf("\nPrice\t-\t2.25 Lakh");
					printf("\nEngine\t-\t373.3cc");
					printf("\nPower\t-\t40 PS");
					printf("\nMileage\t-\t27 kmpl");
					printf("\nTorque\t-\t35 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in Bajaj Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto bajaj;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto bajaj;
					}
					break;
				default:
					printf("\nInvalid Choice..... \n");
					goto start;
			}
		case 5:
			jawa:
			printf("\n--------------**JAWA Bikes**---------------");
			printf("\n1-JAWA 42 Bobber");
			printf("\n2-JAWA Forty Two");
			printf("\n3-JAWA 42 2.1");
			printf("\n4-JAWA Perak\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("\n----------JAWA 42 Bobber---------");
					printf("\nPrice\t-\t2.09 Lakh");
					printf("\nEngine\t-\t334cc");
					printf("\nPower\t-\t30.56 PS");
					printf("\nMileage\t-\t30.56 kmpl");
					printf("\nTorque\t-\t32.74 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in JAWA Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto jawa;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto jawa;
					}
					break;
				case 2:
					printf("\n----------JAWA Forty Two---------");
					printf("\nPrice\t-\t1.67 - 1.81 Lakh");
					printf("\nEngine\t-\t293cc");
					printf("\nPower\t-\t27.33 PS");
					printf("\nMileage\t-\t35 kmpl");
					printf("\nTorque\t-\t27.02 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in JAWA Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto jawa;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto jawa;
					}
					break;
				case 3:
					printf("\n----------JAWA 42 2.1---------");
					printf("\nPrice\t-\t1.92 - 2.17 Lakh");
					printf("\nEngine\t-\t293cc");
					printf("\nPower\t-\t27.33 PS");
					printf("\nMileage\t-\t33 kmpl");
					printf("\nTorque\t-\t27.02 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in JAWA Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto jawa;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto jawa;
					}
					break;
				case 4:
					printf("\n----------JAWA Perak---------");
					printf("\nPrice\t-\t2.09 Lakh");
					printf("\nEngine\t-\t334cc");
					printf("\nPower\t-\t30.64 PS");
					printf("\nMileage\t-\t34.05 kmpl");
					printf("\nTorque\t-\t32.74 Nm");
					printf("\n---------------------------------------------------");
					printf("\nDo you want to continue in JAWA Bikes\t(Press 1)");
					printf("\nDO you want to Go on the Main menu\t(Press 2)");
					scanf("%d",&ch3);
					if (ch3==1)
					{
						goto jawa;
					}
					else if (ch3==2)
					{
						goto start;
					}
					else
					{
						printf("\nInvalid Choice");
						goto jawa;
					}
					break;
				default:
					printf("\nInvalid Choice..... \n");
					goto start;
			}
			case 6:
				{
				printf("\n-------------------THANK YOU--------VISIT AGAIN-------------------------");
				}
				break;
			default:
				printf("\nInvalid Choice...........");
	}
	
	
	return 0;
}
