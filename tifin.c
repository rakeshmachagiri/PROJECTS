#include<stdio.h>
main()
{   printf("BILL---> B, ITEM DAY BILL---> T, TOTAL DAY BILL---> Z\n ");
	printf("  MENU: \n");
	printf("1 . idly Rs.20\n2 . dosa Rs.30\n3 . wada Rs.35\n4 . puri Rs.40\n");
	
	char food;
	int idly_count=0,wada_count=0,dosa_count=0,puri_count=0,amount=0,total_amount=0;
	int idly_price,idly_total=0,idly_quantity=0;
	int dosa_price,dosa_total=0,dosa_quantity=0;
	int wada_price,wada_total=0,wada_quantity=0;
	int puri_price,puri_total=0,puri_quantity=0;
	int grand_total=0;
	
	while(1)
	{
	printf("\nenter number for food (or) enter B for bill : ");
	scanf("%c",&food);
	
	switch(food)
	   {
		case '1':
			printf("entr the idly_quantity: ");
	        scanf("%d",&idly_quantity);
	        idly_count=idly_count+idly_quantity;
			idly_price=20;
			idly_total+=idly_quantity;
			break;
	    case '2':
	    	printf("entr the dosa_quantity: ");
	        scanf("%d",&dosa_quantity);
			dosa_price=30;
			dosa_count=dosa_count+dosa_quantity;
			dosa_total+=dosa_quantity;
			break;	
		case '3':
			printf("entr the wada_quantity: ");
	        scanf("%d",&wada_quantity);
			wada_price=35;
			wada_count=wada_count+wada_quantity;
			wada_total+=wada_quantity;
			break;
		case '4':
			printf("entr the puri_quantity: ");
	        scanf("%d",&puri_quantity);
	    	puri_price=40;
	    	puri_count=puri_count+puri_quantity;
	    	puri_total+=puri_quantity;
			break;
		case 'b':
			if(idly_total>0)
			{	
			printf("food:idly quantity:%d price:%d total:%d\n",idly_quantity,idly_price,idly_total*20);
		    }
			if(dosa_total>0)
			{ 	
			printf("food:dosa quantity:%d price:%d total:%d\n",dosa_quantity,dosa_price,dosa_total*30);
		    }
			if(wada_total>0)
			{	
			printf("food:wada quantity:%d price:%d total:%d\n",wada_quantity,wada_price,wada_total*35);
		    }
			if(puri_total>0)
			{ 	
			printf("food:puri quantity:%d price:%d total:%d\n",puri_quantity,puri_price,puri_total*40);
		    }
		    
		    printf("\nbill amount:%d\n",(idly_total*20)+(wada_total*35)+(dosa_total*30)+(puri_total*40));
		    
		idly_total=0,idly_quantity=0;
		dosa_total=0,dosa_quantity=0;
		wada_total=0,wada_quantity=0;
		puri_total=0,puri_quantity=0;
		    
		    break;
		case 't':
			if(idly_count>0)
			{
			 printf("1 day total number of idly plates%d amount %d\n",idly_count,idly_count*20);
		    }
		    if(dosa_count>0)
			{
			 printf("1 day total number of dosa plates%d amount %d\n",dosa_count,dosa_count*30);
		    }
		    if(wada_count>0)
			{
			 printf("1 day total number of wada plates%d amount %d\n",wada_count,wada_count*35);
		    }
		    if(puri_count>0)
			{
			 printf("1 day total number of puri plates%d amount %d\n",puri_count,puri_count*40);
		    }
		    break;
		case 'z':    
		    grand_total=(idly_count*20)+(dosa_count*30)+(wada_count*35)+(puri_count*40);
		    printf("TOTAL AMOUNT OF THE DAY :%d\n",grand_total);
		    grand_total=0;
			puri_count=0;
			idly_count=0;
			dosa_count=0;
			wada_count=0;
			break;
			 
			
	    }  
	    
		    
		    	
	}
}

