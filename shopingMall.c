#include<stdio.h>
main()
{   printf("1-shirt\n2-formalPant\n3-jeans\n4-tshirt\n");
    
    int s_quant=0,s_qt=0,s_tot=0,s_gst=0,s_desc=0,s_ft=0;
    int t_quant=0,t_qt=0,t_tot=0,t_gst=0,t_desc=0,t_ft=0;
    int f_quant=0,f_qt=0,f_tot=0,f_gst=0,f_desc=0,f_ft=0;
    int j_quant=0,j_qt=0,j_tot=0,j_gst=0,j_desc=0,j_ft=0;

    char option;
	while(1)
	 {
	 	printf("enter the option:");
	 	scanf("%c",&option);
	 	
	 	
	 switch(option)
	    {
	     case '1':
		         printf("enter the shirts quantity:");
				 scanf("%d",&s_quant);
				 s_qt+=s_quant;     // total quant
				 s_tot=s_qt*500;   //total price
				 s_gst=(s_tot/100)*18; // gst amount
				 s_desc=((s_tot+s_gst)/100)*40; // desc amount
				 s_ft=(s_tot+s_gst)-s_desc;
				 
				 break;
		case '2':
		         printf("enter the formal pant quantity:");
				 scanf("%d",&f_quant);
				 f_qt+=f_quant;
				 f_tot=f_qt*800;   //total price
				 f_gst=(f_tot/100)*18; // gst amount
				 f_desc=((f_tot+f_gst)/100)*40; // desc amount
				 f_ft=(f_tot+f_gst)-f_desc;
				 
				 break;
		case '3':
		         printf("enter the jeans quantity:");
				 scanf("%d",&j_quant);
				 j_qt+=j_quant;
				 j_tot=j_qt*1000;   //total price
				 j_gst=(j_tot/100)*18; // gst amount
				 j_desc=((j_tot+j_gst)/100)*40; // desc amount
				 j_ft=(j_tot+j_gst)-j_desc;
				   
				 break;
		case '4':
		         printf("enter the t-shirts quantity:");
				 scanf("%d",&t_quant);
				 t_qt+=t_quant;
				 t_tot=t_qt*300;   //total price
	 			 t_gst=(t_tot/100)*18; // gst amount
				 t_desc=((t_tot+t_gst)/100)*40; // desc amount
				 t_ft=(t_tot+t_gst)-t_desc;
				 
				 
				    
				 break;		 		  		  
		 case 'b':
		 	    printf("product     quantity     price     Gst     descount     total\n");
		 	    printf("--------------------------------------------------------------\n");
		 	    if(s_qt>0)
		 	    {
		 	    printf("shirt          %d         %d        %d        %d        %d\n",s_qt,s_tot,s_gst,s_desc,s_ft);
				}
				if(t_qt>0)
		 	    {
		 	    printf("Tshirt         %d          %d        %d        %d        %d\n",t_qt,t_tot,t_gst,t_desc,t_ft);
				}
				if(f_qt>0)
		 	    {
		 	    printf("foramlp        %d         %d        %d        %d        %d\n",f_qt,f_tot,f_gst,f_desc,f_ft);
				}
				if(j_qt>0)
		 	    {
		 	    printf("jeans          %d         %d        %d        %d        %d\n",j_qt,j_tot,j_gst,j_desc,j_ft);
				}
		 	    printf("TOTAL------------------------------------------------- > %d\n",s_ft+j_ft+f_ft+t_ft);
		 	    
		 	     s_quant=0,s_qt=0,s_tot=0,s_gst=0,s_desc=0,s_ft=0;
                 t_quant=0,t_qt=0,t_tot=0,t_gst=0,t_desc=0,t_ft=0;
                 f_quant=0,f_qt=0,f_tot=0,f_gst=0,f_desc=0,f_ft=0;
                 j_quant=0,j_qt=0,j_tot=0,j_gst=0,j_desc=0,j_ft=0;

		 	 break;
		 	    
				   	 
				   	
		}	
	 	
	 	
	 }
}
