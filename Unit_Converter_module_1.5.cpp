#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	
	printf("\n Options");
	printf("\n 1 Temperature");
	printf("\n 2 Length");
	printf("\n 3 Area");
	printf("\n 4 Volume");
	printf("\n 5 Weight");
	int x;
	printf("\n SELECT your Choice:");
	scanf("%d",&x);           
	switch(x)
	{
	case 1:
	printf("\n  1  Celsius --> Fahrenheit");
	printf("\n  2  Fahrenheit --> Celsius");
	printf("\n  3  Kelvin --> Celsius");
	printf("\n  4  Celsius --> Kelvin");
	int y;
	printf("\n Enter that you want to convert:");
	scanf("%d",&y);
	switch(y)
	{
		case 1:
			{
			float a,b;
			printf("\n Enter value in Celsius:");
			scanf("%f",&a);
			b=((a*9/5)+32);
			printf("\n Temperature in Fahrenheit is: %f",b);
		    }
			break;
			
		case 2:
			{
		    float d,c;
		printf("\n Enter the temperature in Fahrenheit:");
		scanf("%f",&d);
		c=((d-32)*5/9);
		printf("\n Temperature in Celsius is: %f",c);
	      }
		break;
		
		case 3:
			{
		    float w,y;
		printf("\n Enter value in Kelvin:");
		scanf("%f",&w);
		y=w-273.15;
		printf("\n Value in celsius is: %f",y);
	}
		break;
		
		case 4:
		{
		    float e,f;
		printf("\n Enter value in Celsius: ");
		scanf("%f",&e);
		f=e+273.15;
		printf("\n Temperature in Kelvin is: %f",f);
	    }
		break;
		default :
			{
		printf("\n Invalid Option");
		
	    }
	
	}
	exit(0);
	
	case 2:
	{
	printf("\n  1 Miles to Kilometers");
	printf("\n  2 Millimeters to Inches");
	printf("\n  3 Inches to Feet");
	printf("\n  4 Feet to Inches");
	printf("\n  5 Inches to Millimeters");
	printf("\n  6 Kilometers to Miles");
	printf("\n  7 Metres to Feet");
	printf("\n  8 Feet to Metres");
	printf("\n  9 Inches to cm");
	printf("\n 10 cm to Inches");
	printf("\n 11 to convert Yards to Km");
	int z;
	printf("\n Enter that you want to convert:");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
		float a,b;
		printf("\n Enter distance in Miles:");
		scanf("%f",&a);
		b=a*1.66;
		printf("\n Distance in Kilometers is: %f",b);
		break;		
		
		case 2:
			float c,d;
		printf("\n Enter length in Millimeters:");
		scanf("%f",&c);
		d=c*0.039370;
		printf("\n Length in Inches is: %f",d);
		break;
	
		case 3:	
			float e,f;
		printf("\n Enter length in Inches:");
		scanf("%f",&e);
		f=e*0.08333;
		printf("\n Length in Feet is: %f",f);
		break;
		
		case 4:
			float g,h;
		printf("\n Enter length in Feet:");
		scanf("%f",&g);
		h=g*12.00;
		printf("\n Length in Inches is: %f",h);
		break;
		
		case 5:
			float i,j;
		printf("\n Enter length in Inches:");
		scanf("%f",&i);
		j=i/0.039370;
		printf("\n Length in Millimetres is: %f",j);
		break;
		
		case 6:
			float k,l;
		printf("\n Enter length in Kilometres:");
		scanf("%f",&k);
		l=k/1.66;
		printf("\n Length in Miles is: %f",l);
		break;	
			
		case 7:
		    float m,n;
		printf("\n Enter length in Metres:");
		scanf("%f",&m);
		n=m*3.2808;
		printf("\n Length in Feet is: %f",n);
		break;	
		
		case 8:
		    float o,p;
		printf("\n Enter length in Feet:");
		scanf("%f",&o);
		p=o/3.2808;
		printf("\n Length in Metres is: %f",p);
		break;	
		
		case 9:
		    float q,r;
	    printf("\n Enter length in Inches:");
		scanf("%f",&q);
		r=q/0.39370;
		printf("\n Length in cm is: %f",r);
		break;	
		
		case 10:
		    float s,t;
		printf("\n Enter length in cm:");
		scanf("%f",&s);
		t=s*0.39370;
		printf("\n Length in Inches is: %f",t);
		break;
		
		case 11:
		    float u,v;
		printf("\n Enter length in Yards:");
		scanf("%f",&u);
		v=u/1093.6;
		printf("\n Length in Km is: %f",v);
		break;	
		
		default:
		printf("\n Invalid option");	
	   }
	   
	}
	exit(0);
	case 3:
		{
		printf("\n  1 Square Feet to Acres");
		printf("\n  2 Acres to Square Feet ");
		printf("\n  3 Hectares to Acres");
	    printf("\n  4 Hectares to Square Feet");
	    printf("\n  5 Square Miles to Square Kilometres");
	    printf("\n  6 Square Kilometres to Square Miles");
	    int xx;
	    printf("\n Enter that you want to convert:");
	    scanf("%d",&xx);
	    switch(xx)
	    {
	    case 1:
	    	float a,b;
	    printf("\n Enter value in Square Feet:");
		scanf("%f",&a);
		b=a*2.2956;
		printf("\n Area in Acres is: %f",b);
		break;
		
		case 2:
		    float c,d;
		printf("\n Enter value in Acres:");
		scanf("%f",&c);
		d=c/2.2956;
		printf("\n Area in Square Feet is: %f",d);
		break;	
		
		case 3:
		    float e,f;
		printf("\n Enter value in Hectares:");
		scanf("%f",&e);
		f=e*2.4711;
		printf("\n Area in Acres is: %f",f);
		break;	
		
		case 4:
		    float g,h;
		printf("\n Enter value in Hectares:");
		scanf("%f",&g);
		h=g*107640;
		printf("\n Area in Square Feet is: %f",h);
		break;	
		
		case 5:
			float i,j;
		printf("\n Enter value in Square Miles:");
		scanf("%f",&i);
		j=i/0.38610;
		printf("\n Area in Square Km is: %f",j);
		break;	
		
		case 6:
			float k,l;
		printf("\n Enter value in Square Kilometrs:");
		scanf("%f",&k);
		l=k*0.38610;
		printf("\n Area in Square Miles is: %f",l);
		break;
		
		default:
		printf("\n Invalid option");	
		}
	}
		exit(0);
		
		case 4:
			{
		printf("\n  1 US Gallons to Litres");
		printf("\n  2 Litres to US Gallons");
		printf("\n  3 ml to Ounces");
		printf("\n  4 Ounces to ml");
		printf("\n  5 Ounces to Litres");
		printf("\n  6 Litres to Ounces");
		int xy;
		printf("\n Enter that you want to convert:");
		scanf("%d",&xy);
		switch(xy)
		{
		case 1:
			float a,b;
		printf("\n Enter Volume in US Gallons:");
		scanf("%f",&a);
		b=a/0.26417;
		printf("\n Volume in Litres is: %f",b);
		break;
		
		case 2:
	    	float c,d;
		printf("\n Enter Volume in Litres:");
		scanf("%f",&c);
		d=c*0.26417;
		printf("\n Volume in Litres is: %f",d);
		break;
		
		case 3:
		    float e,f;
		printf("\n Enter Volume in ml:");
		scanf("%f",&e);
		f=e*0.033814;
		printf("\n Volume in Ounces is: %f",f);
		break;
		
		case 4:
			 float g,h;
		printf("\n Enter Volume in Ounces:");
		scanf("%f",&g);
		h=g/0.033814;
		printf("\n Volume in ml is: %f",h);
		break;
		
		case 5:
			float i,j;
		printf("\n Enter Volume in Ounces:");
		scanf("%f",&i);
		j=i/33.814;
		printf("\n Volume in Litres is: %f",j);
		break;	
		
		case 6:
		    float k,l;
		printf("\n Enter Volume in Litres:");
		scanf("%f",&k);
		l=k*33.814;
		printf("\n Volume in Ounces is: %f",l);
		break;	
		
		default:
		printf("\n Invalid option");	
		}
		}
		exit(0);
		case 5:
			{
	printf("\n  1 Pounds to Kilograms");
	printf("\n  2 Ounces to Grams");
    printf("\n  3 Stones to Kilograms");
	printf("\n  4 Ounces to Pounds");
	printf("\n  5 Pounds to Ounces");
	printf("\n  6 Kg to Stones");
	printf("\n  7 Grams to Ounces");
	printf("\n  8 Kg to Pounds");
	int xz;
	printf("\n Enter that you want to convert:");
	scanf("%d",&xz);
	switch(xz)
	{
		case 1:
			float a,b;
		printf("\n Enter weight in Pounds:");
		scanf("%f",&a);
		b=a/2.2046;
		printf("\n Weight in Kilograms is: %f",b);
		break;	
		
		case 2:
			float c,d;
		printf("\n Enter weight in Ounces:");
		scanf("%f",&c);
		d=c/0.035274;
		printf("\n Weight in Grams is: %f",d);
		break;	
		
		case 3:
			float e,f;
		printf("\n Enter weight in Stones:");
		scanf("%f",&e);
		f=e/0.15747;
		printf("\n Weight in Kilograms is: %f",f);
		break;	
		
		case 4:
			float g,h;
	    printf("\n Enter weight in Ounces:");
		scanf("%f",&g);
		h=g*0.062500;
		printf("\n Weight in Pounds is: %f",h);
		break;	
		
		case 5:
			float i,j;
		printf("\n Enter weight in Pounds:");
		scanf("%f",&i);
		j=i/0.062500;
		printf("\n Weight in Ounces is: %f",j);
		break;	
		
		case 6:
		     float k,l;
		printf("\n Enter weight in Kg:");
		scanf("%f",&k);
		l=k*0.15747;
		printf("\n Weight in Stones is: %f",l);
		break;	
		
		case 7:
		    float m,n;
		printf("\n Enter weight in Grams:");
		scanf("%f",&m);
		n=m*0.035274;
		printf("\n Weight in Ounces is: %f",n);
		break;	
		
		case 8:
		     float o,p;
		printf("\n Enter weight in Kg:");
		scanf("%f",&o);
		p=o*2.2046;
		printf("\n Weight in Pounds is: %f",p);
		break;		 
		
		default:
		printf("\n Invalid option");
	}
			
	}
	exit(0);	

	default:
		printf("\n wrong choice");
		
		}
		getch();
	    
	  }
	  

