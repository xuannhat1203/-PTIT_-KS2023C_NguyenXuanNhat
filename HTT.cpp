#include<stdio.h>
#include<math.h>
int main(){
	int array[100];
	int choice;
	int size;
	printf("Nhap so phan tu ban muon: ");
	scanf("%d", &size);
	int sum = 0;
	int max ;
	int min ;
	int sum2=0;
	int count;
	int value;
	int index;
	int array2[3];
	do
	{
		printf("**************************MENU***************************");
		printf("\n1.Nhap gia tri n phan tu cua mang: ");
		printf("\n2.In ra gia tri cac phan tu trong mang");
		printf("\n3.Tinh tong cac phan tu chia het cho 2 va 3 trong mang");
		printf("\n4.In ra phan tu lon nhat va nho nhat trong mang");
		printf("\n5.Sap xep mang tang dan");
		printf("\n6.Tinh tong cac phan tu la so nguyen to");
		printf("\n7.Sap xep cac phan tu le o dau chia het cho 5 theo thu tu");
		printf("\n8.tang dan va cac phan tu chan o cuoi mang theo thu tu gian gan");
		printf("\nchen phan tu m vao mang va sap xep tang dan");
		printf("\n9.Thoat");
		printf("\nBan muon lam gi: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				for(int i=0; i<size;i++){
					printf("\nNhap phan tu thu [%d]: ",i);
					scanf("%d", &array[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("cac phan tu trong mang la: \n");
				for (int i=0; i<size; i++){
					printf("%d\t",array[i]);
				}
				printf("\n");
				break;
			case 3:
		
				for (int i=0; i<size; i++){
					if(array[i]%2==0 &&array[i]%3==0){
						sum+=array[i];
					}
				}
				printf("tong cac so chia het cho 2 va 3 la: %d",sum);
				printf("\n");
				
				break;
			case 4:
				max = array[0];
				min = array[0];
				for(int i=1; i<size;i++){
					if(array[i] > max){
						max = array[i];
					}
					if(array[i] < min){
						min = array[i];
					}
				}
				printf("Gia tri lon nhat trong mang la: %d",max);
				printf("\nGia tri nho nhat trong mang la: %d",min);
				printf("\n");
				break;
			case 5:
				for (int i=0; i<size; i++){
					for (int j=i+1; j<size;j++){
						if (array[i] > array[j]){
							int temp = array[i];
							array[i]=array[j];
							array[j]=temp;
						}
					}
				}
				printf("Day so sau khi sap xep: ");
				for (int i=0; i<size; i++){
					printf("%d\t",array[i]);
				}
				printf("\n");
				break;
			case 6: 
				sum = 0;
            	for (int i = 0; i < size; i++)
           		{
               	 count = 0;
              	  for (int j = 1; j <= sqrt(array[i]); j++)
              	  	{
              	      if (array[i] % j == 0 && j != 1)
                   	 	{
                    	    count++;
                        	break;
                   	 	}
                	}
                		if (count == 0 && array[i] >= 2)
               			{
                    		sum += array[i];
                		}
           	 	}
            	printf("Tong cac so nguyen to co trong mang la %d\n", sum);
           	 	break;
           	case 7:
           		count = 0;
           		for (int i=0; i<3; i++){
				if(array[i] %2 !=0 && array[i] % 5  == 0){
				array2[count]=array[i];
				count++;
				}	
				}
				for (int count=0; count<3;count++){
					for (int count2 = count+1;count2<3;count2++){
						if (array2[count] < array2[count2]){
						int temp = array2[count];
						array2[count] = array2[count2];
						array2[count2] = temp;
				}
				}
				}
				for (int i=0; i<3; i++){
					printf("%d\t",array2[i]);
				}
				break;
            case 8: 
            printf("\nnhap gia tri muon them vao mang: ");
            scanf("%d", &value);
            printf("\nnhap vi tri muon them: ");
            scanf("%d", &index);
            	if (index >= 0 && index <= size){
                	for (int i = size; i > index; i--){
                   		array[i] = array[i - 1];
               		}
               	 	array[index] = value;
                	size++;
                	for (int i = 0; i < size; i++){
                    	for (int j = i + 1; j < size; j++){
                       		if (array[i] < array[j]){
                            	int temp = array[i];
                           	 	array[i] = array[j];
                           	 	array[j] = temp;
                        	}
                    	}
                	}
                for (int i = 0; i < size; i++){
                	printf("phan tu thu [%d] = %d\n", i, array[i]);
                    }
                }
    		break;

			case 9:
				return 0;
				break;
			default: 
			printf("vui long nhap tu 1-9");
			break;
				
		}		
	}while(1==1);	
}
