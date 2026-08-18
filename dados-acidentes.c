#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int cod_cidade, num_veiculos, num_acidentes,maior_valor, menor_valor;
	int cod_maior_cidade, cod_menor_cidade, cidades_pequenas = 0;
	int soma_veiculos = 0, soma_acidentes = 0;
	float media_veiculos, media_acidentes;

	for (int i = 1; i <= 5; i++) {

		printf("Digite o código da cidade: ");
		scanf("%d", &cod_cidade);

		printf("Digite o número de veículos: ");
		scanf("%d", &num_veiculos);

		printf("Digite o número de acidentes: ");
		scanf("%d", &num_acidentes);

		if (i == 1) {
			maior_valor = num_acidentes;
			cod_maior_cidade = cod_cidade;

			menor_valor = num_acidentes;
			cod_menor_cidade = cod_cidade;
		} else {
			// Testa se é o maior
			if (num_acidentes > maior_valor) {
				maior_valor = num_acidentes;
				cod_maior_cidade = cod_cidade; // Salva o código da maior
			}

			if (num_acidentes < menor_valor) {
				menor_valor = num_acidentes;
				cod_menor_cidade = cod_cidade; // Salva o código da menor
			}
		}
		
		if (num_veiculos < 2000){
			soma_acidentes += num_acidentes;
			cidades_pequenas++;
		}
		
		soma_veiculos += num_veiculos;
	}
	
	media_veiculos = soma_veiculos / 5.0;
	media_acidentes = soma_acidentes / cidades_pequenas;

	printf("Maior número de acidentes: %d (Cidade Código: %d)\n", maior_valor, cod_maior_cidade);
	printf("Menor número de acidentes: %d (Cidade Código: %d)\n", menor_valor, cod_menor_cidade);
	printf("Média de veículos de todas as cidades: %.1f\n", media_veiculos);
	printf("Média de acidentes < 2000: %.1f\n", media_acidentes);

	return 0;
}