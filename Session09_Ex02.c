#include<stdio.h>

int main() {
	
	int arr[100]; 
	int i;
	int n = 0; 
	
	printf("So phan tu cua mang ma ban muon: \n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("phan tu number[%d] la: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	if(n > 0){
		int index, phan_tu_moi;
		printf("phan tu ban muon nhap co vi tri la: (luu y chi co the sua phan tu tu 0 den %d)\n", n -1);
		scanf("%d", &index);
		if(index >= 0 && index < n){
		printf(" phan tu moi ma ban muon thay o vi tri number[%d]\n", index);
		scanf("%d", &phan_tu_moi);
		arr[index] = phan_tu_moi;
		printf("phan tu %d da duoc ban sua thanh %d\n", index, phan_tu_moi);
	} else{
		printf("phan tu ban vua nhap khong ton taia trong mang: \n");
	}
	}else {
		printf("mang dang rong khong co phan tu de sua: \n");
	}
	
	for(i = 0; i < n; i++){
		if(n == 0) {
			printf("khong co bat cu phan tu nao trong mang de co the in ra\n");
		} else{
			printf("cac phan tu co trong nhom la: \n");
			printf("number[%d] = %d", i, arr[i]);
		}
	}
	return 0;
}
