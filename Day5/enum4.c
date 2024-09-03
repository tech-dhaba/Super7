//Product Categories: Define an enum to represent different product categories (e.g., ELECTRONICS, APPAREL, GROCERIES) with corresponding tax rates.
//Product Information: Input product category, base price, and quantity from the user.
//Tax Calculation: Calculate the tax amount based on the product category and price.
//Discount Calculation: Determine the discount percentage based on the product category and total price, using a switch case.
//Total Price Calculation: Calculate the final price after applying the discount and adding the tax.
//Error Handling: Use a goto statement to handle potential errors like invalid input or division by zero.
#include<stdio.h>
enum Product_category{
         ELECTRONICS = 15,//product rate in percentage
         APPAREL = 10,
         GROCERIES = 5
};
double discount(enum Product_category cat,int Total_Price)
{
	double dis=0;
	switch(cat)
	{
		case ELECTRONICS:
			if(Total_Price>1000)
			{
				dis=15;
			}
			else
			{
				dis=10;
			}
			break;
		case APPAREL:
			if(Total_Price>500)
			{
				dis=10;
			}
			else
			{
				dis=5;
			}
			break;
		case GROCERIES:
			if(Total_Price>200)
			{
				dis=5;
			}
			else
			{
				dis=0;
			}
			break;
		default:
			dis=0;
			break;
	}
	return dis;
}
int main()
{
	enum Product_category cat;
	double tp,bp,qt,tx_rate,tx_amt,dis_amt,final_price;
	printf("Enter category(0 for electronics,1 for apparel,2 for groceries):\n");
	int type;
	scanf("%d",&type);
	if(type<0||type>2)
	{
		goto error;
	}
	cat=(enum Product_category)type;
	printf("Enter base price:\n");
	scanf("%lf",&bp);
	if(bp<=0)
	{
		goto error;
	}
	printf("Enter quantity:\n");
	scanf("%lf",&qt);
	if(qt<=0)
        {
                goto error;
        }
	tp=bp*qt;
	tx_rate=(double)cat;
	tx_amt=(tx_rate/100)*tp;
	int dis=discount(cat,tp);
	dis_amt=(dis/100)*tp;
	final_price=tp-dis_amt+tx_amt;
	printf("total price is:%lf\n",tp);
	printf("total tax amount is:%lf\n",tx_amt);
	printf("total discount amount is:%lf\n",dis_amt);
	printf("final price is:%lf\n",final_price);
error:
	printf("Not a valid condition");
	return 0;
}
