#include <stdio.h>

int main() {
	int i=1, id_cliente[i],quant_cliente=1;
    float faturamento=0,valor_servico[i];
    printf("CALCULO DE FATURAMENTO DIARIO:\nDIGITE UM NUMERO NEGATIVO PARA ENCERRAR AO FIM DO DIA:\n");
    printf("ID do CLIENTE: x\n");
    printf("Valor a ser pago: y\n");
    printf("===================================\n");
    
	
	printf("Digite o ID do cliente %d: ",i);
    scanf("%d",&id_cliente[i]);
    if(id_cliente[i]<0){
    	printf("Dia Encerrado, sem faturamento.");
    	return 0;
	}
    else{
		printf("Valor a ser pago: ");
	    scanf("%f",&valor_servico[i]);
		faturamento+=valor_servico[i];	
		printf("===================================\n");
	}
	
	while(quant_cliente<5 && id_cliente[i]>0){
		i++;	
    	printf("Digite o ID do cliente %d: ",i);
    	scanf("%d",&id_cliente[i]);
    	printf("Valor a ser pago: ");
    	scanf("%f",&valor_servico[i]);	
    	faturamento+=valor_servico[i];
    	printf("===================================\n");
    	quant_cliente++;
	}
	
   	printf("================================================\n");
    printf("=============CALCULANDO FATURAMENTO=============\n");
   	printf("================================================\n");
    printf("=============FATURAMENTO CALCULADO==============\n");
   	printf("================================================\n");
    printf("O faturamento diario do lava jato foi de R$ %.2f \n",faturamento);	
   	printf("================================================\n");
    
    return 0;
}
