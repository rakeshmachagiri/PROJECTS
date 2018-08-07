#include<stdio.h>
main()
{
	int acount_number[100],acount_money[100];
	char option=0;
	int amount=0;
	int ac_no=500301,ac=0,mn=0,ac_number=0;
	int num=0,numb=0,count=0;
	int money=0;
	int debit=0,credit=0,ac_number2=0;
	
	while(1) //to repeate the  controle flow 
	{
	   printf("ENTER THE OPTION : ");
	   scanf("%c",&option);
	 
      switch(option)
      {
        case 'a':
        	printf("CREATE ACCOUNT\n");
        	status:                     
    		printf("ENTER THE AMOUNT: ");
    		scanf("%d",&amount);
    		if(amount>=100)
    		{
    			acount_number[ac]=ac_no;   
    			acount_money[ac]=amount;
                printf("your ac.no %d\namount %d\n",acount_number[ac],acount_money[ac]);
    			ac++;
    			ac_no++;	
			}
			else
			{
				printf("PLEASE ENTER VALIED AMOUNT\n");
				goto status;
			}
			
			break;
		case 'b':
		       printf("CHECK BALENCE\n");	
		       bal:
		       printf("enter the acount number:");
		       scanf("%d",&ac_number);
		     
		       for(num=0;num<=ac;num++)
		       {
		           if(ac_number==acount_number[num])
		           {
		              //count++;	
		              printf("balence amount is: %d\n",acount_money[num]);
		              goto kkk;
		           }
			   }
			    
			       //if(count==0)
			       // else
			       //{
			     	  printf("enter valied acount number\n");
		              goto bal;
				   //}
			    kkk:
		        break;
		case'd':
		    	printf("DIPOSIT AMOUNT\n");
		    	
		    	printf("enter the acount number: ");
		    	scanf("%d",&ac_number);
		    	printf("enter the amount\n");
		    	scanf("%d",&money);
		    	
		    	for(num=0;num<ac;num++)
		        {
		          if(ac_number==acount_number[num])
		           {
		              count++;
					  acount_money[num]+=money;
		           }
				
			    }
			      if(count==0)
			       {
			     	printf("enter valied acount number\n");
		            goto bal;
				   }
		           break;
		           
		    case 'w':
		    	printf("WITHDRAL AMOUNT\n");
		    	val:
		    	printf("enter the acount number: ");
		    	scanf("%d",&ac_number);
		    	
		    	for(num=0;num<ac;num++)
		        {
		           if(ac_number==acount_number[num])
		           { 
				     count++;
					 with:    
				     w:
		    	       printf("enter the amount\n");
		    	       scanf("%d",&money);

		                if(money<=acount_money[num])
		                  {  
		                     if(money>=100 && money<=100000)
		                      {
					           acount_money[num]-=money;
				              }
				             else
				              {
				              	printf("minmum withdrawl limit 100 maximum withdrawl limit is 100000\n");
				              	goto with;
							  }
					      }
					    else
					      {
					  	   printf("insuficiant funds:\n you can withdrw up to %d\n",acount_money[num]);
					  	   goto w;
					      }
					    break;
				   }
				
			    }
			
			      if(count==0)
			           {
			     	   printf("enter valied acount number\n");
		                goto val;
				       }
		               break;
		               
		    case 't':
			      printf("TRANSFER AMOUNT\n");
			      lable:
				  printf("enter the debit acount number\n");
				  scanf("%d",&ac_number);
				  
				  for(num=0;num<=ac;num++)
				  {
				  	
				  if(ac_number==acount_number[num])
				    {   
				         debit++;
				        back:
				    	printf("enter the credit acount number\n");
				        scanf("%d",&ac_number2);
				        
				       for(numb=0;numb<=ac;numb++)
				        {
				         if(ac_number2==acount_number[numb])
				         {
						    credit++;
				           	in:
				           	printf("enter the amount:");
				           	scanf("%d",&amount);
				           	
				            if(amount<=acount_money[num])
		                    {  
		            
		                    acount_money[num]-=amount;
		                    acount_money[numb]+=amount;
		                    
				            }
				            else
				            {
				            	printf("insuficiant money in your acount\n");
				            	goto in;
				            }
				          }
						
					    }
					    if(credit==0)
				          { 
				        	printf("credit account number is invalid\n:");
				     	    goto back; 
					      } 
						  break; 
					}
				  
				 }
				    if(debit==0)
				     {
				     	printf("debit account number is invalid\n:");
				     	goto lable;
					 }
				    
				  break;
			   }
			   
       }
}



